extern PC_DATA         *pc_first;
extern PC_DATA         *pc_last;
void save_player_list args( (void) );
void load_player_list args( (void) );
#define PLAYERLIST_FILE  "../data/player.lst"
#define FIRST(ch)           (!IS_NPC((ch)) && (ch)->pcdata == pc_first)
#define ADDICTED(ch)       ((int) ((current_time - (ch)->logon) / 3600))
