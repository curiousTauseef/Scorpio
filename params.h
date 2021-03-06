//Automatically generated file. 
//Any changes made will be lost after tuning. 
static PARAM PAWN_GUARD = 12;
static PARAM PAWN_STORM = 6;
static PARAM KING_ON_OPEN = 21;
static PARAM PAWN_ATTACK = 16;
static PARAM KNIGHT_ATTACK = 16;
static PARAM BISHOP_ATTACK = 16;
static PARAM ROOK_ATTACK = 32;
static PARAM QUEEN_ATTACK = 64;
static PARAM UNDEFENDED_ATTACK = 32;
static PARAM HANGING_PENALTY = 13;
static PARAM ATTACKED_PIECE = 4;
static PARAM DEFENDED_PIECE = 5;
static PARAM KNIGHT_OUTPOST_MG = 40;
static PARAM KNIGHT_OUTPOST_EG = 6;
static PARAM BISHOP_OUTPOST_MG = 34;
static PARAM BISHOP_OUTPOST_EG = -2;
static PARAM KNIGHT_MOB_MG = 50;
static PARAM KNIGHT_MOB_EG = 43;
static PARAM BISHOP_MOB_MG = 22;
static PARAM BISHOP_MOB_EG = 15;
static PARAM ROOK_MOB_MG = 31;
static PARAM ROOK_MOB_EG = 20;
static PARAM QUEEN_MOB_MG = -33;
static PARAM QUEEN_MOB_EG = 189;
static PARAM BAD_BISHOP_MG = 5;
static PARAM BAD_BISHOP_EG = 8;
static PARAM PASSER_BLOCKED = 34;
static PARAM PASSER_KING_SUPPORT = 9;
static PARAM PASSER_KING_ATTACK = 41;
static PARAM PASSER_SUPPORT = 238;
static PARAM PASSER_ATTACK = 117;
static PARAM PAWNS_VS_KNIGHT = 30;
static PARAM CANDIDATE_PP_MG = 23;
static PARAM CANDIDATE_PP_EG = 58;
static PARAM PAWN_DOUBLED_MG = -1;
static PARAM PAWN_DOUBLED_EG = 9;
static PARAM PAWN_ISOLATED_ON_OPEN_MG = 49;
static PARAM PAWN_ISOLATED_ON_OPEN_EG = 22;
static PARAM PAWN_ISOLATED_ON_CLOSED_MG = 22;
static PARAM PAWN_ISOLATED_ON_CLOSED_EG = 13;
static PARAM PAWN_WEAK_ON_OPEN_MG = 22;
static PARAM PAWN_WEAK_ON_OPEN_EG = 8;
static PARAM PAWN_WEAK_ON_CLOSED_MG = 3;
static PARAM PAWN_WEAK_ON_CLOSED_EG = -1;
static PARAM PAWN_DUO_MG = 6;
static PARAM PAWN_DUO_EG = -5;
static PARAM PAWN_SUPPORTED_MG = 10;
static PARAM PAWN_SUPPORTED_EG = 5;
static PARAM ROOK_ON_7TH = 16;
static PARAM ROOK_ON_OPEN = 15;
static PARAM ROOK_SUPPORT_PASSED_MG = -28;
static PARAM ROOK_SUPPORT_PASSED_EG = 55;
static PARAM TRAPPED_BISHOP = 85;
static PARAM TRAPPED_KNIGHT = 112;
static PARAM TRAPPED_ROOK = 97;
static PARAM EXTRA_PAWN = 130;
static PARAM QUEEN_MG = 1775;
static PARAM QUEEN_EG = 1417;
static PARAM ROOK_MG = 778;
static PARAM ROOK_EG = 815;
static PARAM BISHOP_MG = 652;
static PARAM BISHOP_EG = 492;
static PARAM KNIGHT_MG = 605;
static PARAM KNIGHT_EG = 450;
static PARAM PAWN_MG = 114;
static PARAM PAWN_EG = 134;
static PARAM BISHOP_PAIR_MG = 12;
static PARAM BISHOP_PAIR_EG = 23;
static PARAM MAJOR_v_P = 178;
static PARAM MINOR_v_P = 40;
static PARAM MINORS3_v_MAJOR = -15;
static PARAM MINORS2_v_MAJOR = -13;
static PARAM ROOK_v_MINOR = 37;
static PARAM TEMPO_BONUS = 31;
static PARAM TEMPO_SLOPE = 19;
static PARAM king_pcsq[64] = {
  -7,  29, -10,  11, -72, -41, -34, -36,
  -3,   3, -36, -45, -27,  -9,  -3,   1,
 -39, -38, -44, -41, -12,   0,  18,   3,
 -72, -66, -64, -65,   1,  21,  20,   5,
 -76, -70, -80, -74,   9,  45,  61,  29,
 -85, -70, -72, -79,   1,  39,  64,  41,
 -81, -78, -78, -78, -15,  11,  19,  21,
 -80, -80, -79, -81, -32, -19,  -8,  -3
};
static PARAM queen_pcsq[64] = {
  -5,  -6,  -6,  27,  -7,  -9, -10,  -8,
 -13,   0,  33,  25, -12, -15, -10,   1,
  -8,  26,   3,   9,  -9,  -1,  -1,   8,
   3,  -5,  -2,  -9,  -5,  -6,   8,  12,
 -12,  -8,  -9, -15, -10,   7,  11,  23,
   2,   5, -10,  -5, -11,  -2,   3,  14,
  -6, -48,  -5,  -7, -12,   2, -10,  -2,
 -10,  -6,  -5,  -7, -17, -14,  -5, -18
};
static PARAM rook_pcsq[64] = {
  10,   3,  25,  37,  -8,   0,  -4, -12,
 -31,   3,  -2,  13,  -5,  -1,  -4,  -1,
 -24,  -3,  -7,   1, -10,  -2,   1,  -3,
 -19,  -6,  -6,   0,  -1,   4,   5,   4,
  -8,  -6,   7,   7,   6,  14,   8,   9,
 -10,   6,  11,   7,   4,  10,  13,   8,
  -5,   5,  18,  11,  -2,   6,   7,   4,
 -10,  -1,   2,  14,   9,  14,  12,  14
};
static PARAM bishop_pcsq[64] = {
 -33, -12, -23, -13,  -1, -17, -18, -31,
 -12,  35,   5,  -1,  -7,  -1, -26, -11,
 -11,   0,  23,  -2,   0,  -7,  15,  -3,
 -12,   3, -19,  17, -13,   7,   1,  10,
 -18, -18,   2,  12, -17,   0,   8,  24,
 -21,   4,   4,  -3, -14,  -9,  16,  11,
 -29,  -8,  -6,  -6, -17,  -7,  -4,  -8,
 -15, -15, -20, -21, -14, -15, -14, -18
};
static PARAM knight_pcsq[64] = {
 -48, -35, -31, -24, -19, -18, -23, -16,
 -33, -18,  -4,   4, -18,  -7,  -7,  -9,
 -35,  -1,  12,  22,  -1, -11,   2,   2,
 -24,   0,   9,   2,   3,   1,  20,  18,
  -8,  10,  17,  13, -11,   2,  30,  23,
 -15,  10,  13,  19, -14,  -4,   8,  -6,
 -40, -14,   8,  -7,  -9,  -5,  -7, -14,
 -48, -35, -29, -19, -25, -28, -25, -23
};
static PARAM pawn_pcsq[64] = {
   0,   0,   0,   0,   0,   0,   0,   0,
 -18,  -1,  -2, -12,  13,  15,   0,  -1,
  -3,  12,  19,  24,   0,  -5,  -6,  -7,
 -17,  -5,  19,  53, -14,  -5,   5,   7,
  -5,  39,  29,  59, -22,  -3,   4,  17,
  -5,  26,  50,  26, -21,   4,  30,  43,
  11,  34,  37,  36,  28,  41,  59,  84,
   0,   0,   0,   0,   0,   0,   0,   0
};
static PARAM outpost[32] = {
   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   8,   5,  10,  15,
  13,  13,   6,  15,   5,  21,   8,  12,
 -22,  -6,   6,   1,   0,   0,   0,   0
};
static PARAM passed_rank_bonus[8] = {
   0,   5,   7,  19,  41,  81, 145,   0
};
static PARAM passed_file_bonus[4] = {
   6,   5,  -2,  -7
};
static PARAM qr_on_7thrank[18] = {
 -24,   0,   1, -29, 139,  83, 199, 200,
 200, 200, 200, 200, 200, 200, 200, 200,
 200, 200
};
static PARAM rook_on_hopen[13] = {
 -61, -47, -37, -21,   0,  60,  69,  90,
 100, 110, 130, 140, 150
};
static PARAM king_to_pawns[8] = {
   0,   5,  32,  60, 130, 158, 175, 144
};
static PARAM king_on_hopen[8] = {
   0,  16,  64,  96,  64,  96, 112, 112
};
static PARAM king_on_file[8] = {
  32,  16,  48,  64,  64,  32,   0,  16
};
static PARAM king_on_rank[8] = {
   0,  16,  32,  48,  48,  48,  48,  48
};
static PARAM piece_tropism[8] = {
   0,  61,  60,  21,  -5,   3,   6, -18
};
static PARAM queen_tropism[8] = {
   0,  37, 113,  15, -15, -32,  -7,   1
};
static PARAM file_tropism[8] = {
  85,  94,  67,  53,   9,  -6, -16, -14
};
static PARAM ELO_DRAW = 197;
static PARAM ELO_DRAW_SLOPE_PHASE = -40;
static PARAM PASSER_WEIGHT_MG = 10;
static PARAM PASSER_WEIGHT_EG = 20;
static PARAM ATTACK_WEIGHT = 21;
static PARAM TROPISM_WEIGHT = 13;
