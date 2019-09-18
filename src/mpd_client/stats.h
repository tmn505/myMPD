/* myMPD (c) 2018-2019 Juergen Mang <mail@jcgames.de> This project's
   homepage is: https://github.com/jcorporation/mympd
   
   myMPD ist fork of:
   
   ympd
   (c) 2013-2014 Andrew Karpow <andy@ndyk.de>
   This project's homepage is: http://www.ympd.org
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef __STATS_H__
#define __STATS_H__
typedef struct t_sticker {
    int playCount;
    int skipCount;
    int lastPlayed;
    int lastSkipped;
    int like;
} t_sticker;

static bool mpd_client_count_song_uri(t_mpd_state *mpd_state, const char *uri, const char *name, const int value);
static bool mpd_client_like_song_uri(t_mpd_state *mpd_state, const char *uri, int value);
static bool mpd_client_last_played_song_uri(t_mpd_state *mpd_state, const char *uri);
static bool mpd_client_last_skipped_song_uri(t_mpd_state *mpd_state, const char *uri);
static bool mpd_client_get_sticker(t_mpd_state *mpd_state, const char *uri, t_sticker *sticker);
static bool mpd_client_last_played_list(t_config *config, t_mpd_state *mpd_state, const int song_id);
static bool mpd_client_last_played_list_save(t_config *config, t_mpd_state *mpd_state);
static int mpd_client_put_stats(t_mpd_state *mpd_state, char *buffer);
static int mpd_client_put_last_played_songs(t_config *config, t_mpd_state *mpd_state, char *buffer, const unsigned int offset, const t_tags *tagcols);
#endif
