"use strict";
// SPDX-License-Identifier: GPL-3.0-or-later
// myMPD (c) 2018-2023 Juergen Mang <mail@jcgames.de>
// https://github.com/jcorporation/mympd

/** @module modalEnterPin_js */

/**
 * Initialization function for the connection settings elements
 * @returns {void}
 */
function initModalEnterPin() {
    elGetById('modalEnterPin').addEventListener('shown.bs.modal', function() {
        setFocusId('modalEnterPinPinInput');
    }, false);

    elGetById('modalEnterPinPinInput').addEventListener('keyup', function(event) {
        if (event.key === 'Enter') {
            elGetById('modalEnterPinEnterBtn').click();
        }
    }, false);
}
