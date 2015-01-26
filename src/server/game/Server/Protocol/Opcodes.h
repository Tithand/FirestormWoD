/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License alonge
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/// \addtogroup u2w
/// @{
/// \file

#ifndef _OPCODES_H
#define _OPCODES_H

#include "Common.h"

enum OpcodeTransferDirection : uint8
{
    WOW_SERVER_TO_CLIENT = 0,
    WOW_CLIENT_TO_SERVER = 1,

    TRANSFER_DIRECTION_MAX = 2
};

/// List of Opcodes
enum Opcodes
{
    NUM_OPCODE_HANDLERS                               = (0x7FFF+1),
    UNKNOWN_OPCODE                                    = (0xFFFF+1),
    NULL_OPCODE                                       = 0,
    COMPRESSED_OPCODE_MASK                            = 0x8000,

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Protocol
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamProtocol
        /// Opcodes
        SMSG_AUTH_CHALLENGE                         = 0x0403, ///< 6.1.0 19508
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Dispatch
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamDispatch
        /// Base opcodes
        SMSG_AUTH_RESPONSE                          = 0x0B61, ///< 6.1.0 19508
        SMSG_CACHE_VERSION                          = 0x0000, ///<
        SMSG_ADDON_INFO                             = 0x0000, ///<
        SMSG_FEATURE_SYSTEM_STATUS                  = 0x0000, ///<
        SMSG_SET_TIME_ZONE_INFORMATION              = 0x0000, ///<
        SMSG_LOGIN_VERIFY_WORLD                     = 0x0000, ///<
        SMSG_NEW_WORLD                              = 0x0000, ///<
        SMSG_LOGIN_SET_TIME_SPEED                   = 0x0000, ///<
        SMSG_HOTFIX_NOTIFY_BLOB                     = 0x0000, ///<
        SMSG_HOTFIX_NOTIFY                          = 0x0000, ///<
        SMSG_WORLD_SERVER_INFO                      = 0x0000, ///<
        SMSG_INITIAL_SETUP                          = 0x0000, ///<
        SMSG_PONG                                   = 0x0000, ///<
        SMSG_UITIME                                 = 0x0000, ///<

        /// Query
        SMSG_DB_REPLY                               = 0x0000, ///<
        SMSG_CREATURE_QUERY_RESPONSE                = 0x0000, ///<
        SMSG_NPC_TEXT_UPDATE                        = 0x0000, ///<
        SMSG_NAME_QUERY_RESPONSE                    = 0x0000, ///<
        SMSG_REALM_QUERY_RESPONSE                   = 0x0000, ///<
        SMSG_GAMEOBJECT_QUERY_RESPONSE              = 0x0000, ///<
        SMSG_QUERY_TIME_RESPONSE                    = 0x0000, ///<

        /// Misc
        SMSG_UPDATE_ACTION_BUTTONS                  = 0x0000, ///<
        SMSG_SET_PROFICIENCY                        = 0x0000, ///<
        SMSG_INIT_WORLD_STATES                      = 0x0000, ///<
        SMSG_UPDATE_WORLD_STATE                     = 0x0000, ///<
        SMSG_EMOTE                                  = 0x0000, ///<
        SMSG_EXPLORATION_EXPERIENCE                 = 0x0000, ///<
        SMSG_LOG_XP_GAIN                            = 0x0000, ///<
        SMSG_LEVELUP_INFO                           = 0x0000, ///<
        SMSG_ITEM_PUSH_RESULT                       = 0x0000, ///<
        SMSG_INIT_CURRENCY                          = 0x0000, ///<
        SMSG_UPDATE_CURRENCY                        = 0x0000, ///<
        SMSG_UPDATE_CURRENCY_WEEK_LIMIT             = 0x0000, ///<
        SMSG_WEEKLY_RESET_CURRENCY                  = 0x0000, ///<
        SMSG_EQUIPMENT_SET_LIST                     = 0x0000, ///<
        SMSG_BINDER_CONFIRM                         = 0x0000, ///<
        SMSG_BIND_POINT_UPDATE                      = 0x0000, ///<
        SMSG_UPDATE_TALENT_DATA                     = 0x0000, ///<
        SMSG_TRANSFER_ABORTED                       = 0x0000, ///<
        SMSG_TRANSFER_PENDING                       = 0x0000, ///<
        SMSG_INVENTORY_CHANGE_FAILURE               = 0x0000, ///<
        SMSG_SET_DUNGEON_DIFFICULTY                 = 0x0000, ///<
        SMSG_SET_RAID_DIFFICULTY                    = 0x0000, ///<
        SMSG_LOAD_CUF_PROFILES                      = 0x0000, ///<
        SMSG_STANDSTATE_UPDATE                      = 0x0000, ///<
        SMSG_START_TIMER                            = 0x0000, ///<
        SMSG_START_ELAPSED_TIMER                    = 0x0000, ///< (unused)
        SMSG_START_ELAPSED_TIMERS                   = 0x0000, ///< (unused)
        SMSG_STOP_ELAPSED_TIMER                     = 0x0000, ///< (unused)
        SMSG_DEATH_RELEASE_LOC                      = 0x0000, ///<
        SMSG_CORPSE_RECLAIM_DELAY                   = 0x0000, ///<
        SMSG_CORPSE_LOCATION                        = 0x0000, ///<
        SMSG_CORPSE_TRANSPORT_QUERY                 = 0x0000, ///<
        SMSG_DURABILITY_DAMAGE_DEATH                = 0x0000, ///<
        SMSG_PLAY_MUSIC                             = 0x0000, ///<
        SMSG_PLAY_OBJECT_SOUND                      = 0x0000, ///<
        SMSG_PLAY_SOUND                             = 0x0000, ///<
        SMSG_DISPLAY_TOAST                          = 0x0000, ///<
        SMSG_ITEM_ENCHANT_TIME_UPDATE               = 0x0000, ///<
        SMSG_ENCHANTMENT_LOG                        = 0x0000, ///<
        SMSG_PARTY_KILL_LOG                         = 0x0000, ///<
        SMSG_PROCRESIST                             = 0x0000, ///<
        SMSG_CLEAR_TARGET                           = 0x0000, ///<
        SMSG_WEATHER                                = 0x0000, ///<
        SMSG_SET_PHASE_SHIFT                        = 0x0000, ///<
        SMSG_TRIGGER_CINEMATIC                      = 0x0000, ///<
        SMSG_TOTEM_CREATED                          = 0x0000, ///<
        SMSG_RESPEC_WIPE_CONFIRM                    = 0x0000, ///<
        SMSG_USE_EQUIPMENT_SET_RESULT               = 0x0000, ///<
        SMSG_TRADE_STATUS                           = 0x0000, ///<
        SMSG_TRADE_UPDATED                          = 0x0000, ///<
        SMSG_SHOW_NEUTRAL_PLAYER_FACTION_SELECT_UI  = 0x0000, ///<
        SMSG_NEUTRAL_PLAYER_FACTION_SELECT_RESULT   = 0x0000, ///< (unused)
        SMSG_INSPECT_TALENT                         = 0x0000, ///<
        SMSG_INSPECT_HONOR_STATS                    = 0x0000, ///<
        SMSG_INSPECT_RATED_BG_STATS                 = 0x0000, ///<
        SMSG_TIME_SYNC_REQUEST                      = 0x0000, ///<
        SMSG_RESUME_TOKEN                           = 0x0000, ///<
        SMSG_BARBER_SHOP_RESULT                     = 0x0000, ///<
        SMSG_ENABLE_BARBER_SHOP                     = 0x0000, ///<
        SMSG_PAGE_TEXT_QUERY_RESPONSE               = 0x0000, ///<
        SMSG_PAGE_TEXT                              = 0x0000, ///<
        SMSG_READ_ITEM_FAILED                       = 0x0000, ///<
        SMSG_READ_ITEM_OK                           = 0x0000, ///<
        SMSG_TEXT_EMOTE                             = 0x0000, ///<
        SMSG_TITLE_EARNED                           = 0x0000, ///<
        SMSG_TITLE_LOST                             = 0x0000, ///<
        SMSG_WHOIS                                  = 0x0000, ///<
        SMSG_TRIGGER_MOVIE                          = 0x0000, ///<
        SMSG_UPDATE_LAST_INSTANCE                   = 0x0000, ///<
        SMSG_UPDATE_INSTANCE_OWNERSHIP              = 0x0000, ///<
        SMSG_SUMMON_REQUEST                         = 0x0000, ///<
        SMSG_STOP_MIRROR_TIMER                      = 0x0000, ///<
        SMSG_START_MIRROR_TIMER                     = 0x0000, ///<
        SMSG_SOCKET_GEMS                            = 0x0000, ///<
        SMSG_RESURRECT_REQUEST                      = 0x0000, ///<
        SMSG_RESPOND_INSPECT_ACHIEVEMENTS           = 0x0000, ///<
        SMSG_RESET_FAILED_NOTIFY                    = 0x0000, ///<
        SMSG_SETUP_RESEARCH_HISTORY                 = 0x0000, ///<
        SMSG_RESEARCH_COMPLETE                      = 0x0000, ///<
        SMSG_REQUEST_CEMETERY_LIST_RESPONSE         = 0x0000, ///<
        SMSG_PLAYED_TIME                            = 0x0000, ///<
        SMSG_BREAK_TARGET                           = 0x0000, ///<
        SMSG_CANCEL_AUTO_REPEAT                     = 0x0000, ///<
        SMSG_CANCEL_COMBAT                          = 0x0000, ///<
        SMSG_COMPLAIN_RESULT                        = 0x0000, ///<
        SMSG_XPGAIN_ABORTED                         = 0x0000, ///< (unused)
        SMSG_SUPERCEDED_SPELL                       = 0x0000, ///<
        SMSG_PVP_CREDIT                             = 0x0000, ///<
        SMSG_PRE_RESURRECT                          = 0x0000, ///<
        SMSG_PLAY_ONE_SHOT_ANIM_KIT                 = 0x0000, ///<
        SMSG_PLAYER_BOUND                           = 0x0000, ///<
        SMSG_OVERRIDE_LIGHT                         = 0x0000, ///<
        SMSG_PRINT_NOTIFICATION                     = 0x0000, ///<
        SMSG_SPECIAL_MOUNT_ANIM                     = 0x0000, ///<
        SMSG_ITEM_TIME_UPDATE                       = 0x0000, ///<
        SMSG_QUERY_ITEM_TEXT_RESPONSE               = 0x0000, ///<
        SMSG_ITEM_PURCHASE_REFUND_RESULT            = 0x0000, ///<
        SMSG_GAMEOBJECT_DESPAWN                     = 0x0000, ///<
        SMSG_GAMEOBJECT_CUSTOM_ANIM                 = 0x0000, ///<
        SMSG_GAME_OBJECT_ACTIVATE_ANIM_KIT          = 0x0000, ///<
        SMSG_FISH_NOT_HOOKED                        = 0x0000, ///<
        SMSG_FISH_ESCAPED                           = 0x0000, ///<
        SMSG_DESTRUCTIBLE_BUILDING_DAMAGE           = 0x0000, ///<
        SMSG_CROSSED_INEBRIATION_THRESHOLD          = 0x0000, ///<
        SMSG_CLIENT_CONTROL_UPDATE                  = 0x0000, ///<
        SMSG_AREA_TRIGGER_NO_CORPSE                 = 0x0000, ///<
        SMSG_CHAR_CUSTOMIZE_RESULT                  = 0x0000, ///<
        SMSG_CHAR_CUSTOMIZE                         = 0x0000, ///<
        SMSG_ACCOUNT_MOUNT_UPDATE                   = 0x0000, ///<

        /// Control Alert
        SMSG_LOSS_OF_CONTROL_AURA_UPDATE            = 0x0000, ///<
        SMSG_ADD_LOSS_OF_CONTROL                    = 0x0000, ///< (not seen on retail)
        SMSG_CLEAR_LOSS_OF_CONTROL                  = 0x0000, ///< (not seen on retail)
        SMSG_REMOVE_LOSS_OF_CONTROL                 = 0x0000, ///< (not seen on retail)

        /// Reputations
        SMSG_INITIALIZE_FACTIONS                    = 0x0000, ///<
        SMSG_FACTION_BONUS_INFO                     = 0x0000, ///<
        SMSG_SET_FACTION_VISIBLE                    = 0x0000, ///<
        SMSG_SET_FACTION_NOT_VISIBLE                = 0x0000, ///<
        SMSG_SET_FACTION_STANDING                   = 0x0000, ///<
        SMSG_SET_FACTION_ATWAR                      = 0x0000, ///<
        SMSG_SET_FORCED_REACTIONS                   = 0x0000, ///<

        /// Interaction
        SMSG_LOGOUT_RESPONSE                        = 0x0000, ///<
        SMSG_LOGOUT_CANCEL_ACK                      = 0x0000, ///<
        SMSG_LOGOUT_COMPLETE                        = 0x0000, ///<
        SMSG_GOSSIP_POI                             = 0x0000, ///<

        /// World Object management
        SMSG_UPDATE_OBJECT                          = 0x0863, ///< 6.1.0 19508
        SMSG_POWER_UPDATE                           = 0x0000, ///<

        /// Character list
        SMSG_ENUM_CHARACTERS_RESULT                 = 0x13F2, ///< 6.1.0 19508
        SMSG_CREATE_CHAR                            = 0x0000, ///<
        SMSG_CHAR_DELETE                            = 0x0000, ///<
        SMSG_SET_PLAYER_DECLINED_NAMES_RESULT       = 0x0000, ///<
        SMSG_CHAR_FACTION_CHANGE                    = 0x0000, ///<
        SMSG_CHAR_RENAME                            = 0x0000, ///<

        /// Account data
        SMSG_ACCOUNT_DATA_TIMES                     = 0x0000, ///<
        SMSG_UPDATE_ACCOUNT_DATA                    = 0x0000, ///<
        SMSG_TUTORIAL_FLAGS                         = 0x0000, ///<

        /// Combat
        SMSG_ATTACKER_STATE_UPDATE                  = 0x0000, ///<
        SMSG_ATTACK_START                           = 0x0000, ///<
        SMSG_ATTACK_STOP                            = 0x0000, ///<
        SMSG_AI_REACTION                            = 0x0000, ///<
        SMSG_ATTACK_SWING_ERROR                     = 0x0000, ///<

        /// Duel
        SMSG_DUEL_REQUESTED                         = 0x0000, ///<
        SMSG_DUEL_COUNTDOWN                         = 0x0000, ///<
        SMSG_DUEL_COMPLETE                          = 0x0000, ///<
        SMSG_DUEL_INBOUNDS                          = 0x0000, ///<
        SMSG_DUEL_OUT_OF_BOUNDS                     = 0x0000, ///<
        SMSG_DUEL_WINNER                            = 0x0000, ///<
        SMSG_CAN_DUEL_RESULT                        = 0x0000, ///< (unused)

        /// Vendor
        SMSG_LIST_INVENTORY                         = 0x0000, ///<
        SMSG_BUY_FAILED                             = 0x0000, ///<
        SMSG_BUY_ITEM                               = 0x0000, ///<
        SMSG_SELL_ITEM                              = 0x0000, ///<

        /// Achievement
        SMSG_ALL_ACHIEVEMENT_DATA                   = 0x0000, ///<
        SMSG_ACHIEVEMENT_DELETED                    = 0x0000, ///<
        SMSG_ACHIEVEMENT_EARNED                     = 0x0000, ///<
        SMSG_ACCOUNT_CRITERIA_UPDATE                = 0x0000, ///< (unused)
        SMSG_ACCOUNT_CRITERIA_UPDATE_ALL            = 0x0000, ///< (unused)
        SMSG_CRITERIA_DELETED                       = 0x0000, ///<
        SMSG_CRITERIA_UPDATE                        = 0x0000, ///<

        /// Friends
        SMSG_CONTACT_LIST                           = 0x0000, ///<
        SMSG_FRIEND_STATUS                          = 0x0000, ///<

        /// Taxi
        SMSG_TAXI_NODE_STATUS                       = 0x0000, ///<
        SMSG_NEW_TAXI_PATH                          = 0x0000, ///<
        SMSG_SHOW_TAXI_NODES                        = 0x0000, ///<
        SMSG_ACTIVATE_TAXI_REPLY                    = 0x0000, ///<

        /// Loot
        SMSG_LOOT_LIST                              = 0x0000, ///<
        SMSG_LOOT_RESPONSE                          = 0x0000, ///<
        SMSG_LOOT_MONEY_NOTIFY                      = 0x0000, ///<
        SMSG_LOOT_RELEASE                           = 0x0000, ///<
        SMSG_LOOT_RELEASE_ALL                       = 0x0000, ///<
        SMSG_LOOT_REMOVED                           = 0x0000, ///<
        SMSG_COIN_REMOVED                           = 0x0000, ///<
        SMSG_LOOT_ALL_PASSED                        = 0x0000, ///<
        SMSG_LOOT_CONTENTS                          = 0x0000, ///< (unused)
        SMSG_LOOT_ITEM_LIST                         = 0x0000, ///< (unused)
        SMSG_MASTER_LOOT_CANDIDATE_LIST             = 0x0000, ///<
        SMSG_LOOT_ROLL                              = 0x0000, ///<
        SMSG_LOOT_ROLLS_COMPLETE                    = 0x0000, ///< (unused)
        SMSG_LOOT_ROLL_WON                          = 0x0000, ///<
        SMSG_LOOT_START_ROLL                        = 0x0000, ///<
        SMSG_AE_LOOT_TARGETS                        = 0x0000, ///< (unused)
        SMSG_AE_LOOT_TARGETS_ACK                    = 0x0000, ///< (unused)

        /// Bank
        SMSG_SHOW_BANK                              = 0x0000, ///<

        /// Rune
        SMSG_RESYNC_RUNES                           = 0x0000, ///<
        SMSG_DEBUG_RUNE_REGEN                       = 0x0000, ///<
        SMSG_ADD_RUNE_POWER                         = 0x0000, ///<
        SMSG_CONVERT_RUNE                           = 0x0000, ///<

        /// Group
        SMSG_PARTY_UPDATE                           = 0x0000, ///<
        SMSG_PARTY_MEMBER_STATE_FULL                = 0x0000, ///<
        SMSG_PARTY_MEMBER_STATE_PARTIAL             = 0x0000, ///<
        SMSG_PARTY_INVITE                           = 0x0000, ///<
        SMSG_GROUP_DECLINE                          = 0x0000, ///<
        SMSG_PARTY_COMMAND_RESULT                   = 0x0000, ///<
        SMSG_GROUP_UNINVITE                         = 0x0000, ///<
        SMSG_GROUP_NEW_LEADER                       = 0x0000, ///<
        SMSG_MINIMAP_PING                           = 0x0000, ///<
        SMSG_SET_LOOT_METHOD_FAILED                 = 0x0000, ///<
        SMSG_RANDOM_ROLL                            = 0x0000, ///<
        SMSG_SEND_RAID_TARGET_UPDATE_SINGLE         = 0x0000, ///<
        SMSG_SEND_RAID_TARGET_UPDATE_ALL            = 0x0000, ///<
        SMSG_READY_CHECK_COMPLETED                  = 0x0000, ///<
        SMSG_READY_CHECK_RESPONSE                   = 0x0000, ///<
        SMSG_READY_CHECK_STARTED                    = 0x0000, ///<
        SMSG_ROLL_POLL_INFORM                       = 0x0000, ///<
        SMSG_ROLE_CHANGED_INFORM                    = 0x0000, ///<
        SMSG_GROUP_DESTROYED                        = 0x0000, ///<

        /// Battleground
        SMSG_BATTLEFIELD_STATUS_QUEUED                      = 0x0000, ///<
        SMSG_BATTLEFIELD_STATUS_NONE                        = 0x0000, ///<
        SMSG_BATTLEFIELD_STATUS_NEED_CONFIRMATION           = 0x0000, ///<
        SMSG_BATTLEFIELD_STATUS_ACTIVE                      = 0x0000, ///<
        SMSG_BATTLEFIELD_STATUS_FAILED                      = 0x0000, ///<
        SMSG_BATTLEFIELD_STATUS_WAIT_FOR_GROUPS             = 0x0000, ///<
        SMSG_BATTLEFIELD_PORT_DENIED                        = 0x0000, ///< (unused)
        SMSG_RATED_BATTLEFIELD_INFO                         = 0x0000, ///<
        SMSG_BATTLEGROUND_PLAYER_JOINED                     = 0x0000, ///<
        SMSG_BATTLEGROUND_PLAYER_LEFT                       = 0x0000, ///<
        SMSG_BATTLEGROUND_PLAYER_POSITIONS                  = 0x0000, ///<
        SMSG_BATTLEFIELD_MGR_ENTERING                       = 0x0000, ///<
        SMSG_BATTLEFIELD_MGR_QUEUE_REQUEST_RESPONSE         = 0x0000, ///<
        SMSG_BATTLEFIELD_MGR_EJECT_PENDING                  = 0x0000, ///< (unused)
        SMSG_BATTLEFIELD_MGR_EJECTED                        = 0x0000, ///<
        SMSG_BATTLEFIELD_MGR_QUEUE_INVITE                   = 0x0000, ///<
        SMSG_BATTLEFIELD_MGR_STATE_CHANGED                  = 0x0000, ///< (unused)
        SMSG_BFMGR_ENTRY_INVITE                             = 0x0000, ///<
        SMSG_BATTLEFIELD_MGR_EXIT_REQUEST                   = 0x0000,
        SMSG_REQUEST_PVP_REWARDS_RESPONSE                   = 0x0000, ///<
        SMSG_PVP_OPTIONS_ENABLED                            = 0x0000, ///< (unused)
        SMSG_PVPLOG_DATA                                    = 0x0000, ///<
        SMSG_ARENA_OPPONENT_SPECIALIZATIONS                 = 0x0000, ///<
        SMSG_DESTROY_ARENA_UNIT                             = 0x0000, ///< (unused)
        SMSG_BATTLEGROUND_POINTS                            = 0x0000, ///< (unused)
        SMSG_BATTLEGROUND_INIT                              = 0x0000, ///< (unused)
        SMSG_MAP_OBJECTIVES_INIT                            = 0x0000, ///< (unused)
        SMSG_CONQUEST_FORMULA_CONSTANTS                     = 0x0000, ///< (unused)
        SMSG_PVP_SEASON                                     = 0x0000, ///<
        SMSG_WARGAME_CHECK_ENTRY                            = 0x0000, ///< (unused)
        SMSG_WARGAME_REQUEST_SUCCESSFULLY_SENT_TO_OPPENENT  = 0x0000, ///< (unused)
        SMSG_SPIRIT_HEALER_CONFIRM                          = 0x0000, ///<
        SMSG_AREA_SPIRIT_HEALER_TIME                        = 0x0000, ///<
        SMSG_BATTLEFIELD_LIST                               = 0x0000, ///<

        /// Pet
        SMSG_PET_NAME_QUERY_RESPONSE                        = 0x0000, ///<
        SMSG_PET_NAME_INVALID                               = 0x0000, ///<
        SMSG_PET_DISMISS_SOUND                              = 0x0000, ///<
        SMSG_PET_GUIDS                                      = 0x0000, ///<
        SMSG_PET_MODE                                       = 0x0000, ///< (unused)
        SMSG_PET_SLOT_UPDATED                               = 0x0000, ///< (unused)
        SMSG_PET_STABLE_LIST                                = 0x0000, ///<
        SMSG_PET_ACTION_FEEDBACK                            = 0x0000, ///<
        SMSG_PET_ACTION_SOUND                               = 0x0000, ///<
        SMSG_PET_ADDED                                      = 0x0000, ///< (unused)
        SMSG_SET_PET_SPECIALIZATION                         = 0x0000, ///<
        SMSG_STABLE_RESULT                                  = 0x0000, ///<

        /// Pet Battle opcodes
        SMSG_PETBATTLE_FULL_JOURNAL                         = 0x0000,
        SMSG_PETBATTLE_QUERY_NAME_RESPONSE                  = 0x0000,
        SMSG_PETBATTLE_REQUEST_FAILED                       = 0x0000,
        SMSG_PETBATTLE_FIRST_ROUND                          = 0x0000,
        SMSG_PETBATTLE_FULL_UPDATE                          = 0x0000,
        SMSG_PETBATTLE_FINALIZE_LOCATION                    = 0x0000,
        SMSG_PETBATTLE_PVP_CHALLENGE                        = 0x0000,
        SMSG_PETBATTLE_ROUND_RESULT                         = 0x0000,
        SMSG_PETBATTLE_REPLACEMENTS_MADE                    = 0x0000,
        SMSG_PETBATTLE_FINAL_ROUND                          = 0x0000,
        SMSG_PETBATTLE_FINISHED                             = 0x0000,
        SMSG_PETBATTLE_UPDATE_BATTLESLOT                    = 0x0000,

        /// Instances
        SMSG_INSTANCE_ENCOUNTER_ENGAGE_UNIT                     = 0x0137, ///<
        SMSG_INSTANCE_ENCOUNTER_DISENGAGE_UNIT                  = 0x05AE, ///<
        SMSG_INSTANCE_ENCOUNTER_CHANGE_PRIORITY                 = 0x0B03, ///<
        SMSG_INSTANCE_ENCOUNTER_TIMER_START                     = 0x010F, ///<
        SMSG_INSTANCE_ENCOUNTER_OBJECTIVE_START                 = 0x0F8D, ///<
        SMSG_INSTANCE_ENCOUNTER_OBJECTIVE_COMPLETE              = 0x150E, ///<
        SMSG_INSTANCE_ENCOUNTER_START                           = 0x051A, ///<
        SMSG_INSTANCE_ENCOUNTER_OBJECTIVE_UPDATE                = 0x0B0D, ///<
        SMSG_INSTANCE_ENCOUNTER_END                             = 0x0B1A, ///<
        SMSG_INSTANCE_ENCOUNTER_IN_COMBAT_RESURRECTION          = 0x13A1, ///<
        SMSG_INSTANCE_ENCOUNTER_PHASE_SHIFT_CHANGED             = 0x19EA, ///<
        SMSG_INSTANCE_ENCOUNTER_GAIN_COMBAT_RESURRECTION_CHARGE = 0x15BD, ///<
        SMSG_INSTANCE_RESET                                     = 0x0B16, ///<
        SMSG_INSTANCE_RESET_FAILED                              = 0x1189, ///<
        SMSG_RAID_INSTANCE_INFO                                 = 0x0DA0, ///<
        SMSG_RAID_GROUP_ONLY                                    = 0x0D9D, ///<
        SMSG_RAID_MARKERS_CHANGED                               = 0x0384, ///<
        SMSG_INSTANCE_SAVE_CREATED                              = 0x093A, ///<

        /// Scenarios
        SMSG_SCENARIO_POI                                       = 0x0343, ///<
        SMSG_SCENARIO_PROGRESS_UPDATE                           = 0x0324, ///<
        SMSG_SCENARIO_STATE                                     = 0x152D, ///<

        /// Auction House
        SMSG_AUCTION_HELLO_RESPONSE                             = 0x011F, ///<
        SMSG_AUCTION_BIDDER_LIST_RESULT                         = 0x01E9, ///<
        SMSG_AUCTION_BIDDER_NOTIFICATION                        = 0x0D90, ///<
        SMSG_AUCTION_BUYOUT_NOTIFICATION                        = 0x172E, ///<
        SMSG_AUCTION_COMMAND_RESULT                             = 0x0B2D, ///<
        SMSG_AUCTION_CLOSED_NOTIFICATION                        = 0x058E, ///<
        SMSG_AUCTION_LIST_PENDING_SALES                         = 0x0332, ///<
        SMSG_AUCTION_LIST_RESULT                                = 0x0BA4, ///<
        SMSG_AUCTION_OWNER_LIST_RESULT                          = 0x0B42, ///<
        SMSG_AUCTION_OWNER_BID_NOTIFICATION                     = 0x0026, ///<

        /// Mail
        SMSG_SEND_MAIL_RESULT                                   = 0x0302, ///<
        SMSG_MAIL_LIST_RESULT                                   = 0x0B3F, ///<
        SMSG_RECEIVED_MAIL                                      = 0x1F0D, ///<
        SMSG_MAIL_QUERY_NEXT_TIME_RESULT                        = 0x153D, ///<

        /// Trainers
        SMSG_TRAINER_LIST                                       = 0x0BA9, ///<
        SMSG_TRAINER_SERVICE                                    = 0x1BD2, ///<

        /// Void Storage
        SMSG_VOID_ITEM_SWAP_RESPONSE                            = 0x1131, ///<
        SMSG_VOID_STORAGE_CONTENTS                              = 0x0108, ///<
        SMSG_VOID_STORAGE_FAILED                                = 0x0B01, ///<
        SMSG_VOID_STORAGE_TRANSFER_CHANGES                      = 0x0321, ///<
        SMSG_VOID_TRANSFER_RESULT                               = 0x0539, ///<

        /// Petition
        SMSG_PETITION_ALREADY_SIGNED                            = 0x0D8E, ///<
        SMSG_PETITION_DECLINED                                  = 0x11E9, ///<
        SMSG_PETITION_QUERY_RESPONSE                            = 0x13AC, ///<
        SMSG_PETITION_SHOW_LIST                                 = 0x0915, ///<
        SMSG_PETITION_SHOW_SIGNATURES                           = 0x0830, ///<
        SMSG_TURN_IN_PETITION_RESULTS                           = 0x0919, ///<

        /// Threat
        SMSG_THREAT_CLEAR                                       = 0x030F, ///<
        SMSG_THREAT_REMOVE                                      = 0x0F3D, ///<
        SMSG_THREAT_UPDATE                                      = 0x03A9, ///<
        SMSG_HIGHEST_THREAT_UPDATE                              = 0x059A, ///<

        /// Tickets
        SMSG_GM_TICKET_GET_TICKET_RESPONSE                      = 0x0389, ///<
        SMSG_GM_TICKET_RESPONSE                                 = 0x03EA, ///<
        SMSG_GM_TICKET_RESPONSE_ERROR                           = 0x070D, ///<
        SMSG_GM_TICKET_RESOLVE_RESPONSE                         = 0x091F, ///<
        SMSG_GM_TICKET_SYSTEM_STATUS                            = 0x1229, ///<
        SMSG_GM_TICKET_UPDATE                                   = 0x13EB, ///<
        SMSG_GM_TICKET_STATUS_UPDATE                            = 0x1D2E, ///<
        SMSG_GM_TICKET_CASE_STATUS                              = 0x1D8D, ///<

        /// Toybox
        SMSG_ACCOUNT_TOYS_UPDATE                                = 0x0590, ///<

        /// Calendar
        SMSG_CALENDAR_CLEAR_PENDING_ACTION                      = 0x1E8A, ///<
        SMSG_CALENDAR_COMMAND_RESULT                            = 0x138A, ///<
        SMSG_CALENDAR_EVENT_INITIAL_INVITE                      = 0x0139, ///<
        SMSG_CALENDAR_EVENT_INVITE                              = 0x0BA2, ///<
        SMSG_CALENDAR_EVENT_INVITE_ALERT                        = 0x0A0F, ///<
        SMSG_CALENDAR_EVENT_INVITE_NOTES                        = 0x0208, ///<
        SMSG_CALENDAR_EVENT_INVITE_NOTES_ALERT                  = 0x1104, ///<
        SMSG_CALENDAR_EVENT_INVITE_REMOVED                      = 0x1F0E, ///<
        SMSG_CALENDAR_EVENT_INVITE_REMOVED_ALERT                = 0x0116, ///<
        SMSG_CALENDAR_EVENT_INVITE_STATUS                       = 0x1183, ///<
        SMSG_CALENDAR_EVENT_INVITE_STATUS_ALERT                 = 0x1BD3, ///<
        SMSG_CALENDAR_EVENT_MODERATOR_STATUS                    = 0x0B52, ///<
        SMSG_CALENDAR_EVENT_REMOVED_ALERT                       = 0x1124, ///<
        SMSG_CALENDAR_EVENT_UPDATED_ALERT                       = 0x1D9D, ///<
        SMSG_CALENDAR_RAID_LOCKOUT_ADDED                        = 0x0901, ///<
        SMSG_CALENDAR_RAID_LOCKOUT_REMOVED                      = 0x0122, ///<
        SMSG_CALENDAR_RAID_LOCKOUT_UPDATED                      = 0x09A4, ///<
        SMSG_CALENDAR_SEND_CALENDAR                             = 0x0184, ///<
        SMSG_CALENDAR_SEND_EVENT                                = 0x0225, ///<
        SMSG_CALENDAR_SEND_NUM_PENDING                          = 0x1B3A, ///<

        /// Warden
        SMSG_WARDEN_DATA                                        = 0x0000, ///<

        /// Challenges
        SMSG_CHALLENGE_MODE_REQUEST_LEADERS_RESULT              = 0x07AA, ///<
        SMSG_CHALLENGE_MODE_MAP_STATS_UPDATE                    = 0x0135, ///< (NYI)
        SMSG_CHALLENGE_MODE_NEW_PLAYER_RECORD                   = 0x13A3, ///<
        SMSG_CHALLENGE_MODE_ALL_MAP_STATS                       = 0x0904, ///<
        SMSG_CHALLENGE_MODE_START                               = 0x1221, ///<
        SMSG_CHALLENGE_MODE_COMPLETE                            = 0x1B31, ///<
        SMSG_CHALLENGE_MOD_REWARDS                              = 0x1CC9, ///< (NYI)

        /// BlackMarket
        SMSG_BLACK_MARKET_OPEN_RESULT                           = 0x0A05, ///<
        SMSG_BLACK_MARKET_OUTBID                                = 0x0B1D, ///<
        SMSG_BLACK_MARKET_REQUEST_ITEMS_RESULT                  = 0x1BC2, ///<
        SMSG_BLACK_MARKET_BID_ON_ITEM_RESULT                    = 0x0825, ///<
        SMSG_BLACK_MARKET_WON                                   = 0x1BAA, ///<
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Guild
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamGuild
        /// Petition
        SMSG_PETITION_RENAME                        = 0x0000, ///<

        /// Guild Finder
        SMSG_LFGUILD_BROWSE                         = 0x0000, ///<
        SMSG_LFGUILD_APPLICATIONS                   = 0x0000, ///<
        SMSG_LFGUILD_APPLICATIONS_LIST_CHANGED      = 0x0000, ///<
        SMSG_LFGUILD_COMMAND_RESULT                 = 0x0000, ///< (unused)
        SMSG_LFGUILD_RECRUITS                       = 0x0000, ///<
        SMSG_LFGUILD_POST                           = 0x0000, ///<
        SMSG_LFGUILD_APPLICANT_LIST_CHANGED         = 0x0000, ///<

        /// Bank
        SMSG_GUILD_RANKS                            = 0x0000, ///<
        SMSG_GUILD_BANK_LOG_QUERY_RESULT            = 0x0000, ///<
        SMSG_GUILD_BANK_REMAINING_WITHDRAW_MONEY    = 0x0000, ///<
        SMSG_GUILD_BANK_QUERY_TEXT_RESULT           = 0x0000, ///<
        SMSG_GUILD_BANK_QUERY_RESULTS               = 0x0000, ///<
        SMSG_GUILD_PERMISSIONS_QUERY_RESULTS        = 0x0000, ///<

        /// Achievement
        SMSG_GUILD_ACHIEVEMENT_DELETED              = 0x0000, ///<
        SMSG_GUILD_ACHIEVEMENT_MEMBERS              = 0x0000, ///< (unused)
        SMSG_GUILD_ACHIEVEMENT_EARNED               = 0x0000, ///<
        SMSG_GUILD_CRITERIA_UPDATE                  = 0x0000, ///< (unused)
        SMSG_GUILD_CRITERIA_DELETED                 = 0x0000, ///<
        SMSG_ALL_GUILD_ACHIEVEMENTS                 = 0x0000, ///<

        /// Info
        SMSG_GUILD_ROSTER                           = 0x0000, ///<
        SMSG_GUILD_ROSTER_UPDATE                    = 0x0000, ///< (unused)
        SMSG_QUERY_GUILD_INFO_RESPONSE              = 0x0000, ///<
        SMSG_GUILD_MEMBER_UPDATE_NOTE               = 0x0000, ///< (unused)
        SMSG_GUILD_REWARDS_LIST                     = 0x0000, ///<
        SMSG_GUILD_SEND_RANK_CHANGE                 = 0x0000, ///<
        SMSG_GUILD_CHALLENGE_UPDATED                = 0x0000, ///<
        SMSG_GUILD_MEMBER_RECIPES                   = 0x0000, ///< (unused)
        SMSG_GUILD_INVITE_EXPIRED                   = 0x0000, ///< (unused)
        SMSG_GUILD_COMMAND_RESULT                   = 0x0000, ///<
        SMSG_GUILD_CHALLENGE_COMPLETED              = 0x0000, ///< (unused)
        SMSG_GUILD_REPUTATION_REACTION_CHANGED      = 0x0000, ///< (unused)
        SMSG_GUILD_KNOWN_RECIPES                    = 0x0000, ///<
        SMSG_GUILD_MEMBER_DAILY_RESET               = 0x0000, ///<
        SMSG_GUILD_FLAGGED_FOR_RENAME               = 0x0000, ///< (unused)
        SMSG_GUILD_NAME_CHANGED                     = 0x0000, ///< (unused)
        SMSG_GUILD_RESET                            = 0x0000, ///< (unused)
        SMSG_GUILD_CHANGE_NAME_RESULT               = 0x0000, ///< (unused)
        SMSG_GUILD_INVITE                           = 0x0000, ///<
        SMSG_GUILD_INVITE_DECLINED                  = 0x0000, ///< (unused)
        SMSG_GUILD_PARTY_STATE                      = 0x0000, ///<
        SMSG_GUILD_MEMBERS_WITH_RECIPE              = 0x0000, ///< (unused)
        SMSG_GUILD_MOVE_STARTING                    = 0x0000, ///< (unused)
        SMSG_GUILD_MOVED                            = 0x0000, ///< (unused)
        SMSG_GUILD_NEWS                             = 0x0000, ///<
        SMSG_GUILD_NEWS_DELETED                     = 0x0000, ///< (unused)
        SMSG_PLAYER_TABAR_VENDOR_SHOW               = 0x0000, ///<
        SMSG_PLAYER_SAVE_GUILD_EMBLEM               = 0x0000, ///<

        /// Event system
        SMSG_GUILD_EVENT_NEW_LEADER                 = 0x0000, ///<
        SMSG_GUILD_EVENT_PRESENCE_CHANGE            = 0x0000, ///<
        SMSG_GUILD_EVENT_PLAYER_JOINED              = 0x0000, ///<
        SMSG_GUILD_EVENT_PLAYER_LEFT                = 0x0000, ///<
        SMSG_GUILD_EVENT_RANKS_UPDATED              = 0x0000, ///<
        SMSG_GUILD_EVENT_RANK_CHANGED               = 0x0000, ///<
        SMSG_GUILD_EVENT_LOG_QUERY_RESULTS          = 0x0000, ///<
        SMSG_GUILD_EVENT_MOTD                       = 0x0000, ///<
        SMSG_GUILD_EVENT_DISBANDED                  = 0x0000, ///<
        SMSG_GUILD_EVENT_TAB_ADDED                  = 0x0000, ///<
        SMSG_GUILD_EVENT_TAB_MODIFIED               = 0x0000, ///<
        SMSG_GUILD_EVENT_TAB_DELETED                = 0x0000, ///<
        SMSG_GUILD_EVENT_TAB_TEXT_CHANGED           = 0x0000, ///<
        SMSG_GUILD_EVENT_BANK_CONTENTS_CHANGED      = 0x0000, ///<
        SMSG_GUILD_EVENT_BANK_MONEY_CHANGED         = 0x0000, ///<
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Chat
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamChat
        /// Voice chat
        SMSG_VOICE_SESSION_ROSTER_UPDATE            = 0x0000, ///< (unused)
        SMSG_VOICE_SESSION_LEAVE                    = 0x0000, ///< (unused)
        SMSG_VOICE_PARENTAL_CONTROLS                = 0x0000, ///< (unused)
        SMSG_VOICE_CHAT_STATUS                      = 0x0000, ///< (unused)
        SMSG_AVAILABLE_VOICE_CHANNEL                = 0x0000, ///< (unused)

        /// Misc
        SMSG_SERVER_FIRST_ACHIEVEMENT               = 0x0000, ///<
        SMSG_RAID_INSTANCE_MESSAGE                  = 0x0000, ///<
        SMSG_MOTD                                   = 0x0000, ///<
        SMSG_EXPECTED_SPAM_RECORDS                  = 0x0000, ///< (unused)
        SMSG_DEFENSE_MESSAGE                        = 0x0000, ///< (unused)
        SMSG_ZONE_UNDER_ATTACK                      = 0x0000, ///<
        SMSG_WHO                                    = 0x0000, ///<

        /// Chat
        SMSG_CHAT_SERVER_MESSAGE                    = 0x0000, ///<
        SMSG_CHAT_RESTRICTED                        = 0x0000, ///<
        SMSG_CHAT_RECONNECT                         = 0x0000, ///< (unused)
        SMSG_CHAT_PLAYER_NOTFOUND                   = 0x0000, ///<
        SMSG_CHAT_PLAYER_AMBIGUOUS                  = 0x0000, ///<
        SMSG_CHAT_NOT_IN_PARTY                      = 0x0000, ///< (unused)
        SMSG_CHAT_IS_DOWN                           = 0x0000, ///< (unused)
        SMSG_CHAT_IGNORED_ACCOUNT_MUTED             = 0x0000, ///< (unused)
        SMSG_CHAT_DOWN                              = 0x0000, ///< (unused)
        SMSG_CHAT_AUTO_RESPONDED                    = 0x0000, ///< (unused)
        SMSG_CHAT                                   = 0x0000, ///<
        SMSG_CHAT_PLAYER_NOT_FOUND                  = 0x0000, ///<

        /// Channel
        SMSG_CHANNEL_NOTIFY_LEFT                    = 0x0000, ///<
        SMSG_CHANNEL_NOTIFY_JOINED                  = 0x0000, ///<
        SMSG_CHANNEL_NOTIFY                         = 0x0000, ///<
        SMSG_CHANNEL_LIST                           = 0x0000, ///<
        SMSG_USERLIST_ADD                           = 0x0000, ///<
        SMSG_USERLIST_REMOVE                        = 0x0000, ///<
        SMSG_USERLIST_UPDATE                        = 0x0000, ///<
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Move
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamMove
        /// Move speeds
        SMSG_MOVE_SET_RUN_SPEED                     = 0x0000, ///<
        SMSG_MOVE_SET_RUN_BACK_SPEED                = 0x0000, ///<
        SMSG_MOVE_SET_SWIM_SPEED                    = 0x0000, ///<
        SMSG_MOVE_SET_SWIM_BACK_SPEED               = 0x0000, ///<
        SMSG_MOVE_SET_FLIGHT_SPEED                  = 0x0000, ///<
        SMSG_MOVE_SET_FLIGHT_BACK_SPEED             = 0x0000, ///<
        SMSG_MOVE_SET_WALK_SPEED                    = 0x0000, ///<
        SMSG_MOVE_SET_TURN_RATE                     = 0x0000, ///<
        SMSG_MOVE_SET_PITCH_RATE                    = 0x0000, ///<
        SMSG_MOVE_KNOCK_BACK                        = 0x0000, ///<
        SMSG_MOVE_UPDATE_RUN_SPEED                  = 0x0000, ///<
        SMSG_MOVE_UPDATE_RUN_BACK_SPEED             = 0x0000, ///<
        SMSG_MOVE_UPDATE_SWIM_SPEED                 = 0x0000, ///<
        SMSG_MOVE_UPDATE_SWIM_BACK_SPEED            = 0x0000, ///<
        SMSG_MOVE_UPDATE_FLIGHT_SPEED               = 0x0000, ///<
        SMSG_MOVE_UPDATE_FLIGHT_BACK_SPEED          = 0x0000, ///<
        SMSG_MOVE_UPDATE_WALK_SPEED                 = 0x0000, ///<
        SMSG_MOVE_UPDATE_TURN_RATE                  = 0x0000, ///<
        SMSG_MOVE_UPDATE_PITCH_RATE                 = 0x0000, ///<
        SMSG_MOVE_UPDATE_KNOCK_BACK                 = 0x0000, ///<

        /// Player
        SMSG_MOVE_UPDATE                                    = 0x0000, ///<
        SMSG_MOVE_TELEPORT                                  = 0x0000, ///<
        SMSG_MOVE_UPDATE_TELEPORT                           = 0x0000, ///<
        SMSG_MOVE_ROOT                                      = 0x0000, ///<
        SMSG_MOVE_UNROOT                                    = 0x0000, ///<
        SMSG_MOVE_WATER_WALK                                = 0x0000, ///<
        SMSG_MOVE_LAND_WALK                                 = 0x0000, ///<
        SMSG_MOVE_FEATHER_FALL                              = 0x0000, ///<
        SMSG_MOVE_NORMAL_FALL                               = 0x0000, ///<
        SMSG_MOVE_SET_ACTIVE_MOVER                          = 0x0000, ///<
        SMSG_MOVE_SET_CAN_FLY                               = 0x0000, ///<
        SMSG_MOVE_UNSET_CAN_FLY                             = 0x0000, ///<
        SMSG_MOVE_SET_HOVER                                 = 0x0000, ///<
        SMSG_MOVE_UNSET_HOVER                               = 0x0000, ///<
        SMSG_MOVE_SET_CAN_TURN_WHILE_FALLING                = 0x0000, ///<
        SMSG_MOVE_UNSET_CAN_TURN_WHILE_FALLING              = 0x0000, ///<
        SMSG_MOVE_SET_CAN_TRANSITION_BETWEEN_SWIM_AND_FLY   = 0x0000, ///<
        SMSG_MOVE_UNSET_CAN_TRANSITION_BETWEEN_SWIM_AND_FLY = 0x0000, ///<
        SMSG_MOVE_SET_VEHICLE_REC_ID                        = 0x0000, ///<
        SMSG_MOVE_SET_COLLISION_HEIGHT                      = 0x0000, ///<
        SMSG_APPLY_MOVEMENT_FORCE                           = 0x0000, ///<
        SMSG_UNAPPLY_MOVEMENT_FORCE                         = 0x0000, ///<
        SMSG_MOVE_SKIP_TIME                                 = 0x0000, ///< (unused)
        SMSG_MOVE_ENABLE_GRAVITY                            = 0x0000, ///< (unused)
        SMSG_MOVE_DISABLE_GRAVITY                           = 0x0000, ///< (unused)
        SMSG_MOVE_ENABLE_COLLISION                          = 0x0000, ///< (unused)
        SMSG_MOVE_DISABLE_COLLISION                         = 0x0000, ///< (unused)

        /// Creature
        SMSG_MONSTER_MOVE                           = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_RUN_SPEED              = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_RUN_BACK_SPEED         = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_SWIM_SPEED             = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_SWIM_BACK_SPEED        = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_FLIGHT_SPEED           = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_FLIGHT_BACK_SPEED      = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_WALK_SPEED             = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_TURN_RATE              = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_PITCH_RATE             = 0x0000, ///<
        SMSG_SPLINE_MOVE_ROOT                       = 0x0000, ///<
        SMSG_SPLINE_MOVE_UNROOT                     = 0x0000, ///<
        SMSG_SPLINE_MOVE_GRAVITY_DISABLE            = 0x0000, ///<
        SMSG_SPLINE_MOVE_GRAVITY_ENABLE             = 0x0000, ///<
        SMSG_SPLINE_MOVE_COLLISION_DISABLE          = 0x0000, ///< (unused)
        SMSG_SPLINE_MOVE_COLLISION_ENABLE           = 0x0000, ///< (unused)
        SMSG_SPLINE_MOVE_SET_FEATHER_FALL           = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_NORMAL_FALL            = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_HOVER                  = 0x0000, ///<
        SMSG_SPLINE_MOVE_UNSET_HOVER                = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_WATER_WALK             = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_LAND_WALK              = 0x0000, ///<
        SMSG_SPLINE_MOVE_START_SWIM                 = 0x0000, ///< (unused)
        SMSG_SPLINE_MOVE_STOP_SWIM                  = 0x0000, ///< (unused)
        SMSG_SPLINE_MOVE_SET_RUN_MODE               = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_WALK_MODE              = 0x0000, ///<
        SMSG_SPLINE_MOVE_SET_FLYING                 = 0x0000, ///<
        SMSG_SPLINE_MOVE_UNSET_FLYING               = 0x0000, ///<
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Spell
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamSpell
        /// Aura
        SMSG_AURA_POINTS_DEPLETED                   = 0x0000, ///< (unused)
        SMSG_AURA_UPDATE                            = 0x0000, ///<

        /// Misc
        SMSG_CHEAT_IGNORE_DIMISHING_RETURNS         = 0x0000, ///< (unused)
        SMSG_DISPEL_FAILED                          = 0x0000, ///<
        SMSG_INCREASE_CAST_TIME_FOR_SPELL           = 0x0000, ///< (unused)
        SMSG_MIRROR_IMAGE_COMPONENTED_DATA          = 0x0000, ///<
        SMSG_MIRROR_IMAGE_CREATURE_DATA             = 0x0000, ///< (unused)
        SMSG_PET_CLEAR_SPELLS                       = 0x0000, ///< (unused)
        SMSG_REFRESH_SPELL_HISTORY                  = 0x0000, ///< (unused)
        SMSG_RESUME_CAST_BAR                        = 0x0000, ///< (unused)
        SMSG_CAST_FAILED                            = 0x0000, ///<
        SMSG_SPELL_FAILURE                          = 0x0000, ///<
        SMSG_SPELL_FAILED_OTHER                     = 0x0000, ///<
        SMSG_PET_CAST_FAILED                        = 0x0000, ///<
        SMSG_ITEM_COOLDOWN                          = 0x0000, ///<
        SMSG_MODIFY_COOLDOWN                        = 0x0000, ///<
        SMSG_COOLDOWN_CHEAT                         = 0x0000, ///< (unused)
        SMSG_PET_TAME_FAILURE                       = 0x0000, ///<
        SMSG_FEIGN_DEATH_RESISTED                   = 0x0000, ///<
        SMSG_NOTIFY_DEST_LOC_SPELL_CAST             = 0x0000, ///< (unused)
        SMSG_ON_CANCEL_EXPECTED_RIDE_VEHICLE_AURA   = 0x0000, ///<
        SMSG_SET_VEHICLE_REC_ID                     = 0x0000, ///<
        SMSG_CANCEL_SPELL_VISUAL_KIT                = 0x0000, ///< (unused)
        SMSG_PLAY_SPELL_VISUAL_KIT                  = 0x0000, ///<
        SMSG_COOLDOWN_EVENT                         = 0x0000, ///<
        SMSG_DISMOUNT                               = 0x0000, ///<
        SMSG_DISMOUNTRESULT                         = 0x0000, ///< (unused)
        SMSG_PLAY_SPELL_VISUAL                      = 0x0000, ///<
        SMSG_MOUNT_RESULT                           = 0x0000, ///<

        /// Spell Book / Bar
        SMSG_UPDATE_WEEKLY_SPELL_USAGE              = 0x0000, ///< (unused)
        SMSG_WEEKLY_SPELL_USAGE                     = 0x0000, ///< (unused)
        SMSG_SEND_KNOWN_SPELLS                      = 0x0000, ///<
        SMSG_SEND_SPELL_CHARGES                     = 0x0000, ///<
        SMSG_SEND_SPELL_HISTORY                     = 0x0000, ///< (unused)
        SMSG_SEND_UNLEARN_SPELLS                    = 0x0000, ///< (unused)
        SMSG_CLEAR_ALL_SPELL_CHARGES                = 0x0000, ///<
        SMSG_CLEAR_COOLDOWN                         = 0x0000, ///<
        SMSG_CLEAR_COOLDOWNS                        = 0x0000, ///<
        SMSG_CATEGORY_COOLDOWN                      = 0x0000, ///<
        SMSG_CLEAR_SPELL_CHARGES                    = 0x0000, ///<
        SMSG_SET_FLAT_SPELL_MODIFIER                = 0x0000, ///<
        SMSG_SET_PCT_SPELL_MODIFIER                 = 0x0000, ///<
        SMSG_SET_SPELL_CHARGES                      = 0x0000, ///<
        SMSG_LEARNED_SPELL                          = 0x0000, ///<
        SMSG_UNLEARNED_SPELLS                       = 0x0000, ///<

        /// Casting
        SMSG_SPELL_CHANNEL_START                    = 0x0000, ///<
        SMSG_SPELL_COOLDOWN                         = 0x0000, ///<
        SMSG_SPELL_CHANNEL_UPDATE                   = 0x0000, ///<
        SMSG_SPELL_DAMAGE_SHIELD                    = 0x0000,
        SMSG_SPELL_DELAYED                          = 0x0000, ///<
        SMSG_SPELL_GO                               = 0x0000, ///<
        SMSG_SPELL_MULTISTRIKE_EFFECT               = 0x0000, ///< (unused)
        SMSG_SPELL_OR_DAMAGE_IMMUNE                 = 0x0000,
        SMSG_SPELL_START                            = 0x0000, ///<
        SMSG_SPELL_UPDATE_CHAIN_TARGETS             = 0x0000, ///< (unused)

        /// Logging
        SMSG_SPELL_DISPELL_LOG                      = 0x0000,
        SMSG_SPELL_ENERGIZE_LOG                     = 0x0000,
        SMSG_SPELL_EXECUTE_LOG                      = 0x0000, ///<
        SMSG_SPELL_NON_MELEE_DAMAGE_LOG             = 0x0000, ///<
        SMSG_SPELL_HEAL_LOG                         = 0x0000, ///<
        SMSG_SPELL_INSTAKILL_LOG                    = 0x0000,
        SMSG_SPELL_INTERRUPT_LOG                    = 0x0000,
        SMSG_SPELL_MISS_LOG                         = 0x0000,
        SMSG_ENVIRONMENTAL_DAMAGE_LOG               = 0x0000, ///<
        SMSG_SPELL_PERIODIC_AURA_LOG                = 0x0000, ///<
        SMSG_SPELL_PROC_SCRIPT_LOG                  = 0x0000, ///< Debug opcode (disabled)
        SMSG_SPELL_PROCS_PER_MINUTE_LOG             = 0x0000, ///< Debug opcode (disabled)
        SMSG_SPELL_CHANCE_PROC_LOG                  = 0x0000, ///< Debug opcode (disabled)
        SMSG_RESIST_LOG                             = 0x0000, ///< Debug opcode (disabled)
        SMSG_AURA_CAST_LOG                          = 0x0000, ///< Debug opcode (disabled)

        /// Pet
        SMSG_PET_SPELLS_MESSAGE                     = 0x0000, ///<
        SMSG_PET_UNLEARNED_SPELLS                   = 0x0000, ///<
        SMSG_PET_LEARNED_SPELLS                     = 0x0000, ///<

    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Quest
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamQuest
        /// Quest log
        SMSG_QUERY_QUEST_INFO_RESPONSE              = 0x0000, ///<
        SMSG_QUEST_UPDATE_FAILED_TIMER              = 0x0000, ///<
        SMSG_QUEST_UPDATE_FAILED                    = 0x0000, ///<
        SMSG_QUEST_UPDATE_COMPLETE                  = 0x0000, ///<
        SMSG_QUEST_UPDATE_ADD_PVP_CREDIT            = 0x0000, ///<
        SMSG_QUEST_UPDATE_ADD_CREDIT_SIMPLE         = 0x0000, ///<
        SMSG_QUEST_UPDATE_ADD_CREDIT                = 0x0000, ///<
        SMSG_QUEST_PUSH_RESULT                      = 0x0000, ///<
        SMSG_QUEST_POIQUERY_RESPONSE                = 0x0000, ///<
        SMSG_QUEST_LOG_FULL                         = 0x0000, ///<
        SMSG_SET_QUEST_COMPLETED_BIT                = 0x0000, ///<
        SMSG_CLEAR_QUEST_COMPLETED_BITS             = 0x0000, ///<
        SMSG_CLEAR_QUEST_COMPLETED_BIT              = 0x0000, ///<
        SMSG_IS_QUEST_COMPLETE_RESPONSE             = 0x0000, ///<
        SMSG_QUEST_FORCE_REMOVED                    = 0x0000, ///<
        SMSG_QUEST_CONFIRM_ACCEPT                   = 0x0000, ///<
        SMSG_QUEST_COMPLETION_NPCRESPONSE           = 0x0000, ///<
        SMSG_DAILY_QUESTS_RESET                     = 0x0000, ///<

        /// Quest giver
        SMSG_QUEST_GIVER_STATUS_MULTIPLE            = 0x0000, ///<
        SMSG_QUEST_GIVER_STATUS                     = 0x0000, ///<
        SMSG_QUEST_GIVER_REQUEST_ITEMS              = 0x0000, ///<
        SMSG_QUEST_GIVER_QUEST_LIST_MESSAGE         = 0x0000, ///<
        SMSG_QUEST_GIVER_QUEST_FAILED               = 0x0000, ///<
        SMSG_QUEST_GIVER_QUEST_DETAILS              = 0x0000, ///<
        SMSG_QUEST_GIVER_QUEST_COMPLETE             = 0x0000, ///<
        SMSG_QUEST_GIVER_OFFER_REWARD_MESSAGE       = 0x0000, ///<
        SMSG_QUEST_GIVER_INVALID_QUEST              = 0x0000, ///<

        /// Gossip
        SMSG_GOSSIP_MESSAGE                         = 0x0000, ///<
        SMSG_GOSSIP_COMPLETE                        = 0x0000, ///<
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Lfg
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamLFG
        SMSG_LFG_BOOT_PLAYER                              = 0x07B3, ///<
        SMSG_LFG_DISABLED                                 = 0x0714, ///<
        SMSG_LFG_JOIN_RESULT                              = 0x0F72, ///<
        SMSG_LFG_OFFER_CONTINUE                           = 0x0797, ///<
        SMSG_LFG_OPEN_FROM_GOSSIP                         = 0x0F17, ///< (unused)
        SMSG_LFG_PARTY_INFO                               = 0x0F92, ///<
        SMSG_LFG_PLAYER_INFO                              = 0x0F36, ///<
        SMSG_LFG_PLAYER_REWARD                            = 0x0F15, ///<
        SMSG_LFG_PROPOSAL_UPDATE                          = 0x0F32, ///<
        SMSG_LFG_QUEUE_STATUS                             = 0x07F1, ///<
        SMSG_LFG_ROLE_CHECK_UPDATE                        = 0x0736, ///<
        SMSG_LFG_ROLE_CHOSEN                              = 0x07D3, ///<
        SMSG_LFG_SEARCH_RESULT                            = 0x0798, ///< (unused)
        SMSG_LFG_SLOT_INVALID                             = 0x07B1, ///< (unused)
        SMSG_LFG_TELEPORT_DENIED                          = 0x0795, ///<
        SMSG_LFG_LIST_JOIN_RESULT                         = 0x0793, ///< (unused)
        SMSG_LFG_UPDATE_LIST                              = 0x0000, ///<
        SMSG_LFG_UPDATE_PARTY                             = 0x0000,
        SMSG_LFG_UPDATE_PLAYER                            = 0x0000,
        SMSG_LFG_UPDATE_SEARCH                            = 0x0000,
        SMSG_LFG_UPDATE_STATUS                            = 0x07F7, ///<
        SMSG_LFG_UPDATE_STATUS_NONE                       = 0x0000,
        SMSG_UPDATE_DUNGEON_ENCOUNTER_FOR_LOOT            = 0x0000,
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    /// Jam Client Garrison
    //////////////////////////////////////////////////////////////////////////
    #pragma region JamGarrison
        SMSG_GET_GARRISON_INFO_RESULT                                   = 0x0000, ///<
        SMSG_GARRISON_PLOT_PLACED                                       = 0x0000, ///<
        SMSG_GARRISON_PLOT_REMOVED                                      = 0x0000, ///<
        SMSG_GARRISON_PLACE_BUILDING_RESULT                             = 0x0000, ///<
        SMSG_GARRISON_BUILDING_REMOVED                                  = 0x0000, ///<
        SMSG_GARRISON_LEARN_SPECIALIZATION_RESULT                       = 0x0000,
        SMSG_GARRISON_BUILDING_SET_ACTIVE_SPECIALIZATION_RESULT         = 0x0000,
        SMSG_GARRISON_LEARN_BLUEPRINT_RESULT                            = 0x0000, ///<
        SMSG_GARRISON_BLUEPRINT_AND_SPECIALIZATION_DATA                 = 0x0000, ///<
        SMSG_GARRISON_GET_BUILDINGS_DATA                                = 0x0000, ///<
        SMSG_GARRISON_REMOTE_INFO                                       = 0x0000, ///<
        SMSG_GARRISON_BUILDING_ACTIVATED                                = 0x0000, ///<
        SMSG_GARRISON_UPGRADE_RESULT                                    = 0x0000,
        SMSG_GARRISON_ADD_FOLLOWER_RESULT                               = 0x0000, ///<
        SMSG_GARRISON_REMOVE_FOLLOWER_RESULT                            = 0x0000,
        SMSG_GARRISON_LIST_FOLLOWERS_CHEAT_RESULT                       = 0x0000,
        SMSG_GARRISON_UPDATE_FOLLOWER_ACTIVATION_COUNT                  = 0x0000, ///<
        SMSG_GARRISON_UPDATE_FOLLOWER                                   = 0x0000, ///<
        SMSG_GARRISON_FOLLOWER_CHANGED_XP                               = 0x0000, ///<
        SMSG_GARRISON_FOLLOWER_CHANGED_ITEM_LEVEL                       = 0x0000,
        SMSG_GARRISON_ADD_MISSION_RESULT                                = 0x0000, ///<
        SMSG_GARRISON_START_MISSION_RESULT                              = 0x0000, ///<
        SMSG_GARRISON_COMPLETE_MISSION_RESULT                           = 0x0000, ///<
        SMSG_GARRISON_MISSION_BONUS_ROLL_RESULT                         = 0x0000, ///<
        SMSG_GARRISON_ASSIGN_FOLLOWER_TO_BUILDING_RESULT                = 0x0000,
        SMSG_GARRISON_REMOVE_FOLLOWER_FROM_BUILDING_RESULT              = 0x0000,
        SMSG_GARRISON_DELETE_RESULT                                     = 0x0000,
        SMSG_GARRISON_OPEN_ARCHITECT                                    = 0x0000, ///< 6.0.1
        SMSG_GARRISON_OPEN_MISSION_NPC                                  = 0x0000, ///<
        SMSG_GARRISON_REQUEST_UPGRADEABLE_RESULT                        = 0x0000, ///<
    #pragma endregion

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// Low protocol
    //////////////////////////////////////////////////////////////////////////
    CMSG_HANDSHAKE                              = 0x4F57,
    SMSG_HANDSHAKE                              = 0x4F57,

    //////////////////////////////////////////////////////////////////////////
    /// Garrison
    //////////////////////////////////////////////////////////////////////////
    CMSG_GARRISON_CREATE_CHEAT                              = 0x0000,
    CMSG_GARRISON_DELETE_CHEAT                              = 0x0000,
    CMSG_GARRISON_SET_LEVEL_CHEAT                           = 0x0000,
    CMSG_UPGRADE_GARRISON                                   = 0x0000,
    CMSG_GARRISON_PLACE_BUILDING_CHEAT                      = 0x0000,
    CMSG_GARRISON_REMOVE_BUILDING_CHEAT                     = 0x0000,
    CMSG_GARRISON_UPGRADE_BUILDING_CHEAT                    = 0x0000,
    CMSG_GARRISON_CANCEL_CONSTRUCTION                       = 0x0000, ///<
    CMSG_GARRISON_LEARN_BUILDING_SPECIALIZATION_CHEAT       = 0x0000,
    CMSG_GARRISON_SET_ACTIVE_BUILDING_SPECIALIZATION        = 0x0000,
    CMSG_GARRISON_SET_ACTIVE_BUILDING_SPECIALIZATION_CHEAT  = 0x0000,
    CMSG_GET_GARRISON_INFO                                  = 0x0000, ///<
    CMSG_GARRISON_LEARN_BLUEPRINT_CHEAT                     = 0x0000,
    CMSG_GARRISON_REQUEST_BUILDINGS                         = 0x0000, ///<
    CMSG_GARRISON_PURCHASE_BUILDING                         = 0x0000, ///<
    CMSG_GARRISON_SET_BUILDING_ACTIVE                       = 0x0000,
    CMSG_GARRISON_FORCE_BUILDING_ACTIVE                     = 0x0000,
    CMSG_GARRISON_PORT_CHEAT                                = 0x0000,
    CMSG_GARRISON_ADD_FOLLOWER_XPCHEAT                      = 0x0000,
    CMSG_GARRISON_SET_FOLLOWER_ITEM_LEVEL_CHEAT             = 0x0000,
    CMSG_GARRISON_ASSIGN_FOLLOWER_TO_BUILDING               = 0x0000,
    CMSG_GARRISON_REMOVE_FOLLOWER_FROM_BUILDING             = 0x0000,
    CMSG_GARRISON_CHANGE_FOLLOWER_ACTIVATION_STATE          = 0x0000, ///<
    CMSG_SHOW_GARRISON_TRANSFER                             = 0x0000,
    CMSG_GARRISON_ADD_UNIQUE_FOLLOWER_CHEAT                 = 0x0000,
    CMSG_GARRISON_REMOVE_FOLLOWER_CHEAT                     = 0x0000,
    CMSG_GARRISON_LIST_FOLLOWERS_CHEAT                      = 0x0000,
    CMSG_GARRISON_ADD_MISSION_CHEAT                         = 0x0000,
    CMSG_GARRISON_START_MISSION                             = 0x0000, ///<
    CMSG_GARRISON_COMPLETE_MISSION                          = 0x0000, ///<
    CMSG_GARRISON_MISSION_BONUS_ROLL                        = 0x0000, ///<
    CMSG_GARRISON_REQUEST_UPGRADEABLE                       = 0x0000, ///<
    CMSG_GARRISON_REQUEST_LANDING_PAGE_SHIPMENT_INFO        = 0x0000,
    CMSG_GARRISON_MISSION_NPC_HELLO                         = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// User Router
    //////////////////////////////////////////////////////////////////////////
    CMSG_LOG_STREAMING_ERROR                    = 0x0000, ///<
    CMSG_QUEUED_MESSAGES_END                    = 0x0000, ///<
    CMSG_LOG_DISCONNECT                         = 0x0000, ///<
    CMSG_PING                                   = 0x0000, ///<
    CMSG_AUTH_CONTINUED_SESSION                 = 0x0000, ///<
    CMSG_SUSPEND_TOKEN_RESPONSE                 = 0x0000, ///<
    CMSG_AUTH_SESSION                           = 0x1872, ///< 6.1.0 19508
    CMSG_ENABLE_NAGLE                           = 0x0000, ///<
    CMSG_SUSPEND_COMMS_ACK                      = 0x0000, ///<
    CMSG_KEEP_ALIVE                             = 0x0000, ///<
    CMSG_OBJECT_UPDATE_FAILED                   = 0x0000, ///<
    CMSG_OBJECT_UPDATE_RESCUED                  = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Character
    //////////////////////////////////////////////////////////////////////////
    CMSG_ENUM_CHARACTERS                        = 0x19E3, ///< 6.1.0 19508
    CMSG_CREATE_CHARACTER                       = 0x0000, ///<
    CMSG_CHAR_DELETE                            = 0x0000, ///<
    CMSG_REORDER_CHARACTERS                     = 0x0000, ///<
    CMSG_PLAYER_LOGIN                           = 0x1D31, ///< 6.1.0 19508
    CMSG_VIOLENCE_LEVEL                         = 0x0000, ///<
    CMSG_LOAD_SCREEN                            = 0x0000, ///<
    CMSG_REQUEST_ACCOUNT_DATA                   = 0x0000, ///<
    CMSG_UPDATE_ACCOUNT_DATA                    = 0x0000, ///<
    CMSG_SET_DUNGEON_DIFFICULTY                 = 0x0000, ///<
    CMSG_SET_RAID_DIFFICULTY                    = 0x0000, ///<
    CMSG_AUTO_DECLINE_GUILD_INVITES             = 0x0000, ///<
    CMSG_SHOWING_CLOAK                          = 0x0000, ///<
    CMSG_SHOWING_HELM                           = 0x0000, ///<
    CMSG_SET_ACTIVE_MOVER                       = 0x0000, ///<
    CMSG_LEARN_TALENTS                          = 0x0000, ///<
    CMSG_AUTOEQUIP_ITEM                         = 0x0000, ///<
    CMSG_SWAP_INV_ITEM                          = 0x0000, ///<
    CMSG_SWAP_ITEM                              = 0x0000, ///<
    CMSG_AUTOSTORE_BAG_ITEM                     = 0x0000, ///<
    CMSG_REQUEST_PET_INFO                       = 0x0000, ///<
    CMSG_STAND_STATE_CHANGE                     = 0x0000, ///<
    CMSG_BINDER_ACTIVATE                        = 0x0000, ///<
    CMSG_REQUEST_FORCED_REACTIONS               = 0x0000, ///<
    CMSG_DESTROY_ITEM                           = 0x0000, ///<
    CMSG_OPEN_ITEM                              = 0x0000, ///<
    CMSG_SET_TITLE                              = 0x0000, ///<
    CMSG_PLAYED_TIME                            = 0x0000, ///<
    CMSG_SAVE_EQUIPMENT_SET                     = 0x0000, ///<
    CMSG_USE_EQUIPMENT_SET                      = 0x0000, ///<
    CMSG_DELETE_EQUIPMENT_SET                   = 0x0000, ///<
    CMSG_WHO                                    = 0x0000, ///<
    CMSG_SOCKET_GEMS                            = 0x0000, ///<
    CMSG_RESURRECT_RESPONSE                     = 0x0000, ///<
    CMSG_QUERY_INSPECT_ACHIEVEMENTS             = 0x0000, ///<
    CMSG_SPLIT_ITEM                             = 0x0000, ///<
    CMSG_SET_PLAYER_DECLINED_NAMES              = 0x0000, ///<
    CMSG_MOUNT_SET_FAVORITE                     = 0x0000, ///<
    CMSG_CHAR_RENAME                            = 0x0000, ///<
    CMSG_CHAR_CUSTOMIZE                         = 0x0000, ///<
    CMSG_CHAR_RACE_OR_FACTION_CHANGE            = 0x1209, ///< 6.0.6 19116

    //////////////////////////////////////////////////////////////////////////
    /// Bank
    //////////////////////////////////////////////////////////////////////////
    CMSG_BANKER_ACTIVATE                        = 0x0000, ///<
    CMSG_AUTOBANK_ITEM                          = 0x0000, ///<
    CMSG_AUTOSTORE_BANK_ITEM                    = 0x0000, ///<
    CMSG_BUY_BANK_SLOT                          = 0x0000, ///<
    CMSG_BUY_REAGENT_BANK                       = 0x0000, ///<
    CMSG_SORT_BANK_BAGS                         = 0x0000, ///<
    CMSG_SORT_REAGENT_BANK_BAGS                 = 0x0000, ///<
    CMSG_DEPOSIT_ALL_REAGENTS                   = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Auction House
    //////////////////////////////////////////////////////////////////////////
    CMSG_AUCTION_LIST_BIDDER_ITEMS              = 0x0000, ///<
    CMSG_AUCTION_LIST_ITEMS                     = 0x0000, ///<
    CMSG_AUCTION_LIST_OWNER_ITEMS               = 0x0000, ///<
    CMSG_AUCTION_LIST_PENDING_SALES             = 0x0000, ///<
    CMSG_AUCTION_PLACE_BID                      = 0x0000, ///<
    CMSG_AUCTION_REMOVE_ITEM                    = 0x0000, ///<
    CMSG_AUCTION_SELL_ITEM                      = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Loot
    //////////////////////////////////////////////////////////////////////////
    CMSG_LOOT                                   = 0x0000, ///<
    CMSG_LOOT_MONEY                             = 0x0000, ///<
    CMSG_LOOT_ITEM                              = 0x0000, ///<
    CMSG_LOOT_RELEASE                           = 0x0000, ///<
    CMSG_LOOT_CURRENCY                          = 0x0000,
    CMSG_LOOT_ROLL                              = 0x0000, ///<
    CMSG_MASTER_LOOT_ITEM                       = 0x0000, ///<
    CMSG_DO_MASTER_LOOT_ROLL                    = 0x0000, ///<
    CMSG_SET_LOOT_SPECIALIZATION                = 0x0000, ///<
    CMSG_SET_LOOT_METHOD                        = 0x0000, ///<
    CMSG_OPT_OUT_OF_LOOT                        = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Combat
    //////////////////////////////////////////////////////////////////////////
    CMSG_ATTACKSTOP                             = 0x0000, ///<
    CMSG_ATTACKSWING                            = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Duel
    //////////////////////////////////////////////////////////////////////////
    CMSG_DUEL_PROPOSED                          = 0x0000, ///<
    CMSG_DUEL_RESPONSE                          = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Spell
    //////////////////////////////////////////////////////////////////////////
    CMSG_CAST_SPELL                             = 0x0000, ///<
    CMSG_CANCEL_CAST                            = 0x0000, ///<
    CMSG_USE_ITEM                               = 0x0000, ///<
    CMSG_CANCEL_AURA                            = 0x0000, ///<
    CMSG_CANCEL_AUTO_REPEAT_SPELL               = 0x0000, ///<
    CMSG_CANCEL_CHANNELLING                     = 0x0000, ///<
    CMSG_CANCEL_GROWTH_AURA                     = 0x0000, ///<
    CMSG_CANCEL_MOUNT_AURA                      = 0x0000, ///<
    CMSG_CANCEL_QUEUED_SPELL                    = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Cache
    //////////////////////////////////////////////////////////////////////////
    CMSG_REQUEST_HOTFIX                         = 0x0000, ///<
    CMSG_CREATURE_QUERY                         = 0x0000, ///<
    CMSG_NPC_TEXT_QUERY                         = 0x0000, ///<
    CMSG_NAME_QUERY                             = 0x0000, ///<
    CMSG_QUEST_QUERY                            = 0x0000, ///<
    CMSG_QUEST_POI_QUERY                        = 0x0000, ///<
    CMSG_REALM_NAME_QUERY                       = 0x0000, ///<
    CMSG_GAMEOBJECT_QUERY                       = 0x0000, ///<
    CMSG_PETITION_QUERY                         = 0x0000, ///<
    CMSG_QUERY_GUILD_INFO                       = 0x0000, ///<
    CMSG_PAGE_TEXT_QUERY                        = 0x0000, ///<
    CMSG_ITEM_TEXT_QUERY                        = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Interaction
    //////////////////////////////////////////////////////////////////////////
    CMSG_LOGOUT_REQUEST                         = 0x0000, ///<
    CMSG_LOGOUT_CANCEL                          = 0x0000, ///<
    CMSG_SET_ACTION_BUTTON                      = 0x0000, ///<
    CMSG_SET_ACTIONBAR_TOGGLES                  = 0x0000, ///<
    CMSG_SET_SELECTION                          = 0x0000, ///<
    CMSG_SETSHEATHED                            = 0x0000, ///<
    CMSG_GOSSIP_HELLO                           = 0x0000, ///<
    CMSG_GOSSIP_SELECT_OPTION                   = 0x0000, ///<
    CMSG_TOGGLE_PVP                             = 0x0000, ///<
    CMSG_TUTORIAL                               = 0x0000, ///<
    CMSG_SET_SPECIALIZATION                     = 0x0000, ///<
    CMSG_SET_WATCHED_FACTION                    = 0x0000, ///<
    CMSG_SET_FACTION_INACTIVE                   = 0x0000, ///<
    CMSG_AREATRIGGER                            = 0x0000, ///<
    CMSG_GAMEOBJECT_REPORT_USE                  = 0x0000, ///<
    CMSG_GAMEOBJECT_USE                         = 0x0000, ///<
    CMSG_SAVE_CUF_PROFILES                      = 0x0000, ///<
    CMSG_SPELLCLICK                             = 0x0000, ///<
    CMSG_REPOP_REQUEST                          = 0x0000, ///<
    CMSG_RECLAIM_CORPSE                         = 0x0000, ///<
    CMSG_QUERY_CORPSE_LOCATION_FROM_CLIENT      = 0x0000, ///<
    CMSG_QUERY_CORPSE_TRANSPORT                 = 0x0000, ///<
    CMSG_RETURN_TO_GRAVEYARD                    = 0x0000, ///<
    CMSG_CLOSE_INTERACTION                      = 0x0000, ///<
    CMSG_ITEM_REFUND_INFO                       = 0x0000, ///<
    CMSG_FAR_SIGHT                              = 0x0000, ///<
    CMSG_MOUNTSPECIAL_ANIM                      = 0x0000, ///<
    CMSG_OPENING_CINEMATIC                      = 0x0000, ///<
    CMSG_NEXT_CINEMATIC_CAMERA                  = 0x0000, ///<
    CMSG_COMPLETE_CINEMATIC                     = 0x0000, ///<
    CMSG_REQUEST_CEMETERY_LIST                  = 0x0000, ///<
    CMSG_TOTEM_DESTROYED                        = 0x0000, ///<
    CMSG_CONFIRM_RESPEC_WIPE                    = 0x0000, ///<
    CMSG_CANCEL_TRADE                           = 0x0000, ///<
    CMSG_SET_TRADE_CURRENCY                     = 0x0000,
    CMSG_SET_TRADE_GOLD                         = 0x0000, ///<
    CMSG_SET_TRADE_ITEM                         = 0x0000, ///<
    CMSG_CLEAR_TRADE_ITEM                       = 0x0000, ///<
    CMSG_ACCEPT_TRADE                           = 0x0000, ///<
    CMSG_BUSY_TRADE                             = 0x0000, ///<
    CMSG_BEGIN_TRADE                            = 0x0000, ///<
    CMSG_IGNORE_TRADE                           = 0x0000, ///<
    CMSG_INITIATE_TRADE                         = 0x0000, ///<
    CMSG_UNACCEPT_TRADE                         = 0x0000, ///<
    CMSG_NEUTRAL_PLAYER_SELECT_FACTION          = 0x0000, ///<
    CMSG_INSPECT                                = 0x0000, ///<
    CMSG_INSPECT_HONOR_STATS                    = 0x0000, ///<
    CMSG_REQUEST_INSPECT_RATED_BG_STATS         = 0x0000, ///<
    CMSG_TIME_SYNC_RESP                         = 0x0000, ///<
    CMSG_UNLEARN_SKILL                          = 0x0000, ///<
    CMSG_EMOTE                                  = 0x0A27, ///>
    CMSG_SEND_TEXT_EMOTE                        = 0x0000, ///<
    CMSG_ALTER_APPEARANCE                       = 0x0000, ///<
    CMSG_SELF_RES                               = 0x0000, ///<
    CMSG_READ_ITEM                              = 0x0000, ///<
    CMSG_COMPLETE_MOVIE                         = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Vehicles
    //////////////////////////////////////////////////////////////////////////
    CMSG_MOVE_SET_VEHICLE_REC_ID_ACK            = 0x0000, ///<
    CMSG_PLAYER_VEHICLE_ENTER                   = 0x0000, ///<
    CMSG_REQUEST_VEHICLE_EXIT                   = 0x0000, ///<
    CMSG_REQUEST_VEHICLE_NEXT_SEAT              = 0x0000, ///<
    CMSG_REQUEST_VEHICLE_PREV_SEAT              = 0x0000, ///<
    CMSG_REQUEST_VEHICLE_SWITCH_SEAT            = 0x0000, ///<
    CMSG_SET_VEHICLE_REC_ID_ACK                 = 0x0000, ///<
    CMSG_CHANGE_SEATS_ON_CONTROLLED_VEHICLE     = 0x0000, ///<
    CMSG_EJECT_PASSENGER                        = 0x0000, ///<
    CMSG_DISMISS_CONTROLLED_VEHICLE             = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Vendors
    //////////////////////////////////////////////////////////////////////////
    CMSG_LIST_INVENTORY                         = 0x0000, ///<
    CMSG_REPAIR_ITEM                            = 0x0000, ///<
    CMSG_BUYBACK_ITEM                           = 0x0000, ///<
    CMSG_BUY_ITEM                               = 0x0000, ///<
    CMSG_SELL_ITEM                              = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Taxi
    //////////////////////////////////////////////////////////////////////////
    CMSG_SET_TAXI_BENCHMARK_MODE                = 0x0000, ///<
    CMSG_ENABLE_TAXI_NODE                       = 0x0000, ///<
    CMSG_TAXI_HELLO                             = 0x0000, ///<
    CMSG_ACTIVATE_TAXI                          = 0x0000, ///<
    CMSG_ACTIVATE_TAXI_EXPRESS                  = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Quest
    //////////////////////////////////////////////////////////////////////////
    CMSG_QUESTGIVER_HELLO                       = 0x0000, ///<
    CMSG_QUEST_GIVER_STATUS_QUERY               = 0x0000, ///<
    CMSG_QUESTGIVER_STATUS_MULTIPLE_QUERY       = 0x0000, ///<
    CMSG_QUESTGIVER_QUERY_QUEST                 = 0x0000, ///<
    CMSG_QUESTGIVER_COMPLETE_QUEST              = 0x0000, ///<
    CMSG_QUESTGIVER_CHOOSE_REWARD               = 0x0000, ///<
    CMSG_QUESTGIVER_ACCEPT_QUEST                = 0x0000, ///<
    CMSG_QUESTGIVER_REQUEST_REWARD              = 0x0000, ///<
    CMSG_QUEST_CONFIRM_ACCEPT                   = 0x0000, ///<
    CMSG_QUESTLOG_REMOVE_QUEST                  = 0x0000, ///<
    CMSG_PUSH_QUEST_TO_PARTY                    = 0x0000, ///<
    CMSG_QUEST_PUSH_RESULT                      = 0x0000, ///<
    CMSG_QUERY_QUEST_COMPLETION_NPCS            = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Account data
    //////////////////////////////////////////////////////////////////////////
    CMSG_GET_UNDELETE_CHARACTER_COOLDOWN_STATUS = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Chat
    //////////////////////////////////////////////////////////////////////////
    /// Addon chat
    CMSG_CHAT_ADDON_MESSAGE_BATTLEGROUND        = 0x8001, ///<
    CMSG_CHAT_ADDON_MESSAGE_WHISPER             = 0x8002, ///<
    CMSG_CHAT_ADDON_MESSAGE_GUILD               = 0x8003, ///<
    CMSG_CHAT_ADDON_MESSAGE_OFFICER             = 0x8004, ///<
    CMSG_CHAT_ADDON_MESSAGE_RAID                = 0x8005, ///<
    CMSG_CHAT_ADDON_MESSAGE_PARTY               = 0x8006, ///<
    CMSG_ADDON_REGISTERED_PREFIXES              = 0x0000, ///<

    /// Chat
    CMSG_CHAT_MESSAGE_RAID_WARNING              = 0x0000, ///<
    CMSG_CHAT_MESSAGE_PARTY                     = 0x0000, ///<
    CMSG_CHAT_MESSAGE_YELL                      = 0x0000, ///<
    CMSG_CHAT_MESSAGE_SAY                       = 0x0000, ///<
    CMSG_CHAT_MESSAGE_OFFICER                   = 0x0000, ///<
    CMSG_CHAT_MESSAGE_EMOTE                     = 0x0000, ///<
    CMSG_CHAT_MESSAGE_AFK                       = 0x0000, ///<
    CMSG_CHAT_MESSAGE_DND                       = 0x0000, ///<
    CMSG_CHAT_MESSAGE_GUILD                     = 0x0000, ///<
    CMSG_CHAT_MESSAGE_RAID                      = 0x0000, ///<
    CMSG_CHAT_MESSAGE_WHISPER                   = 0x0000, ///<
    CMSG_CHAT_MESSAGE_CHANNEL                   = 0x0000, ///<

    /// Channel
    CMSG_JOIN_CHANNEL                           = 0x0000, ///<
    CMSG_CHANNEL_ANNOUNCEMENTS                  = 0x0000, ///<
    CMSG_CHANNEL_BAN                            = 0x0000, ///<
    CMSG_CHANNEL_DISPLAY_LIST                   = 0x0000, ///<
    CMSG_CHANNEL_INVITE                         = 0x0000, ///<
    CMSG_CHANNEL_KICK                           = 0x0000, ///<
    CMSG_CHANNEL_LIST                           = 0x0000, ///<
    CMSG_CHANNEL_MODERATOR                      = 0x0000, ///<
    CMSG_CHANNEL_MUTE                           = 0x0000, ///<
    CMSG_CHANNEL_OWNER                          = 0x0000, ///<
    CMSG_CHANNEL_PASSWORD                       = 0x0000, ///<
    CMSG_CHANNEL_SET_OWNER                      = 0x0000, ///<
    CMSG_CHANNEL_SILENCE_ALL                    = 0x0000, ///<
    CMSG_CHANNEL_SILENCE_VOICE                  = 0x0000, ///<
    CMSG_CHANNEL_UNBAN                          = 0x0000, ///<
    CMSG_CHANNEL_UNMODERATOR                    = 0x0000, ///<
    CMSG_CHANNEL_UNMUTE                         = 0x0000, ///<
    CMSG_CHANNEL_UNSILENCE_ALL                  = 0x0000, ///<
    CMSG_CHANNEL_UNSILENCE_VOICE                = 0x0000, ///<
    CMSG_CHANNEL_VOICE_OFF                      = 0x0000, ///<
    CMSG_CHANNEL_VOICE_ON                       = 0x0000, ///<
    CMSG_DECLINE_CHANNEL_INVITE                 = 0x0000, ///<
    CMSG_LEAVE_CHANNEL                          = 0x0000, ///<
    CMSG_SET_ACTIVE_VOICE_CHANNEL               = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Movement
    //////////////////////////////////////////////////////////////////////////
    /// Start
    CMSG_MOVE_START_FORWARD                     = 0x0000, ///<
    CMSG_MOVE_START_TURN_LEFT                   = 0x0000, ///<
    CMSG_MOVE_START_TURN_RIGHT                  = 0x0000, ///<
    CMSG_MOVE_START_BACKWARD                    = 0x0000, ///<
    CMSG_MOVE_START_STRAFE_LEFT                 = 0x0000, ///<
    CMSG_MOVE_START_STRAFE_RIGHT                = 0x0000, ///<
    CMSG_MOVE_START_ASCEND                      = 0x0000, ///<
    CMSG_MOVE_START_DESCEND                     = 0x0000, ///<
    CMSG_MOVE_START_PITCH_UP                    = 0x0000, ///<
    CMSG_MOVE_START_PITCH_DOWN                  = 0x0000, ///<
    CMSG_MOVE_START_SWIM                        = 0x0000, ///<

    /// Misc
    CMSG_MOVE_JUMP                              = 0x0000, ///<
    CMSG_MOVE_FALL_LAND                         = 0x0000, ///<
    CMSG_WORLD_PORT_RESPONSE                    = 0x0000, ///<
    CMSG_MOVE_TIME_SKIPPED                      = 0x0000, ///<
    CMSG_MOVE_SPLINE_DONE                       = 0x0000, ///<

    /// Update
    CMSG_MOVE_HEARTBEAT                         = 0x0000, ///<
    CMSG_MOVE_SET_FACING                        = 0x0000, ///<
    CMSG_MOVE_SET_PITCH                         = 0x0000, ///<
    CMSG_MOVE_SET_RUN_MODE                      = 0x0000, ///<
    CMSG_MOVE_SET_WALK_MODE                     = 0x0000, ///<
    CMSG_MOVE_TELEPORT_ACK                      = 0x0000, ///<
    CMSG_MOVE_CHNG_TRANSPORT                    = 0x0000, ///<

    /// Stop
    CMSG_MOVE_STOP                              = 0x0000, ///<
    CMSG_MOVE_STOP_TURN                         = 0x0000, ///<
    CMSG_MOVE_STOP_STRAFE                       = 0x0000, ///<
    CMSG_MOVE_STOP_SWIM                         = 0x0000, ///<
    CMSG_MOVE_STOP_ASCEND                       = 0x0000, ///<
    CMSG_MOVE_STOP_PITCH                        = 0x0000, ///<

    /// ACK
    CMSG_MOVE_SET_RUN_SPEED_CHEAT               = 0x0000, ///<
    CMSG_MOVE_SET_RUN_BACK_SPEED_CHEAT          = 0x0000, ///<
    CMSG_MOVE_SET_WALK_SPEED_CHEAT              = 0x0000, ///<
    CMSG_MOVE_SET_SWIM_SPEED_CHEAT              = 0x0000, ///<
    CMSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT         = 0x0000, ///<
    CMSG_MOVE_SET_FLIGHT_SPEED_CHEAT            = 0x0000, ///<
    CMSG_MOVE_SET_FLIGHT_BACK_SPEED_CHEAT       = 0x0000, ///<
    CMSG_MOVE_SET_TURN_SPEED_CHEAT              = 0x0000, ///<
    CMSG_MOVE_SET_PITCH_SPEED_CHEAT             = 0x0000, ///<
    CMSG_MOVE_KNOCK_BACK_ACK                    = 0x0000, ///<
    CMSG_MOVE_SET_CAN_FLY_ACK                   = 0x0000, ///<
    CMSG_MOVE_FEATHER_FALL_ACK                  = 0x0000, ///<
    CMSG_MOVE_WATER_WALK_ACK                    = 0x0000, ///<
    CMSG_MOVE_HOVER_ACK                         = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Group
    //////////////////////////////////////////////////////////////////////////
    CMSG_PARTY_INVITE                           = 0x0000, ///<
    CMSG_PARTY_INVITE_RESPONSE                  = 0x0000, ///<
    CMSG_LEAVE_GROUP                            = 0x0000, ///<
    CMSG_PARTY_UNINVITE                         = 0x0000, ///<
    CMSG_SET_PARTY_LEADER                       = 0x0000, ///<
    CMSG_SET_ROLE                               = 0x0000, ///<
    CMSG_MINIMAP_PING                           = 0x0000, ///<
    CMSG_RANDOM_ROLL                            = 0x0000, ///<
    CMSG_UPDATE_RAID_TARGET                     = 0x0000, ///<
    CMSG_CONVERT_RAID                           = 0x0000, ///<
    CMSG_DO_READY_CHECK                         = 0x0000, ///<
    CMSG_READY_CHECK_RESPONSE                   = 0x0000, ///<
    CMSG_INITIATE_ROLE_POLL                     = 0x0000, ///<
    CMSG_REQUEST_RAID_INFO                      = 0x0000, ///<
    CMSG_SET_EVERYONE_IS_ASSISTANT              = 0x0000, ///<
    CMSG_CLEAR_RAID_MARKER                      = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Friend
    //////////////////////////////////////////////////////////////////////////
    CMSG_SEND_CONTACT_LIST                      = 0x0000, ///<
    CMSG_ADD_FRIEND                             = 0x0000, ///<
    CMSG_ADD_IGNORE                             = 0x0000, ///<
    CMSG_SET_CONTACT_NOTES                      = 0x0000, ///<
    CMSG_DEL_FRIEND                             = 0x0000, ///<
    CMSG_DEL_IGNORE                             = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Petition
    //////////////////////////////////////////////////////////////////////////
    CMSG_OFFER_PETITION                         = 0x0000, ///<
    CMSG_PETITION_BUY                           = 0x0000, ///<
    CMSG_PETITION_DECLINE                       = 0x0000, ///<
    CMSG_PETITION_RENAME                        = 0x0000, ///<
    CMSG_PETITION_SHOWLIST                      = 0x0000, ///<
    CMSG_PETITION_SHOW_SIGNATURES               = 0x0000, ///<
    CMSG_PETITION_SIGN                          = 0x0000, ///<
    CMSG_TURN_IN_PETITION                       = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Pet
    //////////////////////////////////////////////////////////////////////////
    CMSG_PET_NAME_QUERY                         = 0x0000, ///<
    CMSG_PET_RENAME                             = 0x0000, ///<
    CMSG_PET_ABANDON                            = 0x0000, ///<
    CMSG_PET_ACTION                             = 0x0000, ///<
    CMSG_PET_CANCEL_AURA                        = 0x0000, ///<
    CMSG_PET_CAST_SPELL                         = 0x0000, ///<
    CMSG_PET_SET_ACTION                         = 0x0000, ///<
    CMSG_PET_STOP_ATTACK                        = 0x0000, ///<
    CMSG_LEARN_PET_SPECIALIZATION_GROUP         = 0x0000, ///<
    CMSG_LIST_STABLE_PETS                       = 0x0000, ///<
    CMSG_SET_PET_SLOT                           = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Battlegrounds
    //////////////////////////////////////////////////////////////////////////
    CMSG_BATTLEMASTER_JOIN                      = 0x0000, ///<
    CMSG_BATTLEMASTER_JOIN_ARENA                = 0x0000, ///<
    CMSG_BATTLEMASTER_JOIN_ARENA_SKIRMISH       = 0x0000, ///<
    CMSG_JOIN_RATED_BATTLEGROUND                = 0x0000, ///<
    CMSG_BATTLEFIELD_PORT                       = 0x0000, ///<
    CMSG_REQUEST_BATTLEFIELD_STATUS             = 0x0000, ///<
    CMSG_BATTLEFIELD_REQUEST_SCORE_DATA         = 0x0000, ///<
    CMSG_REQUEST_PVP_REWARDS                    = 0x0000, ///<
    CMSG_REQUEST_PVP_OPTIONS_ENABLED            = 0x0000, ///<
    CMSG_QUERY_COUNTDOWN_TIMER                  = 0x0000, ///< (unused)
    CMSG_REQUEST_CONQUEST_FORMULA_CONSTANTS     = 0x0000, ///< (unused)
    CMSG_LEAVE_BATTLEFIELD                      = 0x0000, ///<
    CMSG_SPIRIT_HEALER_ACTIVATE                 = 0x0000, ///<
    CMSG_AREA_SPIRIT_HEALER_QUERY               = 0x0000, ///<
    CMSG_AREA_SPIRIT_HEALER_QUEUE               = 0x0000, ///<
    CMSG_BATTLEFIELD_MGR_QUEUE_REQUEST          = 0x0000, ///<
    CMSG_BATTLEFIELD_MGR_QUEUE_INVITE_RESPONSE  = 0x0000, ///<
    CMSG_BATTLEFIELD_MGR_QUEUE_EXIT_REQUEST     = 0x0000, ///<
    CMSG_BATTLEFIELD_MGR_ENTRY_INVITE_RESPONSE  = 0x0000, ///<
    CMSG_BATTLEFIELD_LIST                       = 0x0000, ///<
    CMSG_BATTLEFIELD_LEAVE                      = 0x0000,
    CMSG_REQUEST_RATED_BATTLEFIELD_INFO         = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Guild
    //////////////////////////////////////////////////////////////////////////
    CMSG_GUILD_INVITE_BY_NAME                      = 0x0000, ///<
    CMSG_ACCEPT_GUILD_INVITE                       = 0x0000, ///<
    CMSG_GUILD_DECLINE_INVITATION                  = 0x0000, ///<
    CMSG_GUILD_OFFICER_REMOVE_MEMBER               = 0x0000, ///<
    CMSG_GUILD_SET_GUILD_MASTER                    = 0x0000, ///<
    CMSG_GUILD_LEAVE                               = 0x0000, ///<
    CMSG_GUILD_DELETE                              = 0x0000, ///<
    CMSG_GUILD_UPDATE_MOTD_TEXT                    = 0x0000, ///<
    CMSG_GUILD_UPDATE_INFO_TEXT                    = 0x0000, ///<
    CMSG_GUILD_GET_RANKS                           = 0x0000, ///<
    CMSG_GUILD_ADD_RANK                            = 0x0000, ///<
    CMSG_GUILD_DELETE_RANK                         = 0x0000, ///<
    CMSG_GUILD_SET_RANK_PERMISSIONS                = 0x0000, ///<
    CMSG_GUILD_SHIFT_RANK                          = 0x0000, ///<
    CMSG_GUILD_ASSIGN_MEMBER_RANK                  = 0x0000, ///<
    CMSG_GUILD_GET_ROSTER                          = 0x0000, ///<
    CMSG_GUILD_BANK_ACTIVATE                       = 0x0000, ///<
    CMSG_GUILD_BANK_BUY_TAB                        = 0x0000, ///<
    CMSG_GUILD_BANK_DEPOSIT_MONEY                  = 0x0000, ///<
    CMSG_GUILD_BANK_LOG_QUERY                      = 0x0000, ///<
    CMSG_GUILD_BANK_REMAINING_WITHDRAW_MONEY_QUERY = 0x0000, ///<
    CMSG_GUILD_BANK_QUERY_TAB                      = 0x0000, ///<
    CMSG_GUILD_BANK_TEXT_QUERY                     = 0x0000, ///<
    CMSG_GUILD_BANK_SWAP_ITEMS                     = 0x0000, ///<
    CMSG_GUILD_BANK_UPDATE_TAB                     = 0x0000, ///<
    CMSG_GUILD_BANK_WITHDRAW_MONEY                 = 0x0000, ///<
    CMSG_GUILD_BANK_SET_TAB_TEXT                   = 0x0000, ///<
    CMSG_GUILD_GET_ACHIEVEMENT_MEMBERS             = 0x0000, ///< (unused)
    CMSG_GUILD_SET_FOCUSED_ACHIEVEMENT             = 0x0000, ///<
    CMSG_GUILD_SET_ACHIEVEMENT_TRACKING            = 0x0000, ///< (unused)
    CMSG_GUILD_SET_MEMBER_NOTE                     = 0x0000, ///<
    CMSG_GUILD_CHALLENGE_UPDATE_REQUEST            = 0x0000, ///<
    CMSG_REQUEST_GUILD_PARTY_STATE                 = 0x0000, ///<
    CMSG_REQUEST_GUILD_REWARDS_LIST                = 0x0000, ///<
    CMSG_GUILD_REPLACE_GUILD_MASTER                = 0x0000, ///<
    CMSG_GUILD_CHANGE_NAME_REQUEST                 = 0x0000, ///<  (unused)
    CMSG_GUILD_PERMISSIONS_QUERY                   = 0x0000, ///<
    CMSG_GUILD_EVENT_LOG_QUERY                     = 0x0000, ///<
    CMSG_GUILD_NEWS_UPDATE_STICKY                  = 0x0000, ///<
    CMSG_GUILD_QUERY_NEWS                          = 0x0000, ///<
    CMSG_QUERY_GUILD_MEMBERS_FOR_RECIPE            = 0x0000, ///< (unused)
    CMSG_QUERY_GUILD_MEMBER_RECIPES                = 0x0000, ///< (unused)
    CMSG_QUERY_GUILD_RECIPES                       = 0x0000, ///<
    CMSG_PLAYER_SAVE_GUILD_EMBLEM                  = 0x0000, ///<

    /// Guild finding
    CMSG_LF_GUILD_ADD_RECRUIT                      = 0x0000, ///<
    CMSG_LF_GUILD_BROWSE                           = 0x0000, ///<
    CMSG_LF_GUILD_DECLINE_RECRUIT                  = 0x0000, ///<
    CMSG_LF_GUILD_GET_APPLICATIONS                 = 0x0000, ///<
    CMSG_LF_GUILD_GET_RECRUITS                     = 0x0000, ///<
    CMSG_LF_GUILD_POST_REQUEST                     = 0x0000, ///<
    CMSG_LF_GUILD_REMOVE_RECRUIT                   = 0x0000, ///<
    CMSG_LF_GUILD_SET_GUILD_POST                   = 0x0000, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Battle pet opcodes
    //////////////////////////////////////////////////////////////////////////
    CMSG_SUMMON_COMPANION                          = 0x0000,
    CMSG_PETBATTLE_QUERY_JOURNAL                   = 0x0000,
    CMSG_PETBATTLE_SET_ABILITY                     = 0x0000,
    CMSG_PETBATTLE_RENAME                          = 0x0000,
    CMSG_PETBATTLE_CAGE_PET                        = 0x0000,
    CMSG_PETBATTLE_QUERY_NAME                      = 0x0000,
    CMSG_PETBATTLE_REQUEST_WILD                    = 0x0000,
    CMSG_PETBATTLE_REQUEST_PVP                     = 0x0000,
    CMSG_PETBATTLE_JOIN_QUEUE                      = 0x0000,
    CMSG_PETBATTLE_REQUEST_UPDATE                  = 0x0000,
    CMSG_PETBATTLE_CANCEL_REQUEST_PVP_MATCHMAKING  = 0x0000,
    CMSG_PETBATTLE_INPUT                           = 0x0000,
    CMSG_PETBATTLE_INPUT_NEW_FRONT_PET             = 0x0000,
    CMSG_BATTLEPET_SET_BATTLESLOT                  = 0x0000,

    //////////////////////////////////////////////////////////////////////////
    /// Battle pay
    //////////////////////////////////////////////////////////////////////////
    CMSG_BATTLE_PAY_GET_PURCHASE_LIST              = 0x120C, ///< (unused)

    //////////////////////////////////////////////////////////////////////////
    /// LFG
    //////////////////////////////////////////////////////////////////////////
    CMSG_DFGET_SYSTEM_INFO                         = 0x030F, ///<
    CMSG_LFG_GET_PLAYER_INFO                       = 0x0000,
    CMSG_LFG_GET_STATUS                            = 0x1BA4, ///<
    CMSG_LFG_JOIN                                  = 0x0925, ///<
    CMSG_LFG_LEAVE                                 = 0x01A2, ///<
    CMSG_LFG_PROPOSAL_RESULT                       = 0x0509, ///<
    CMSG_LFG_SET_BOOT_VOTE                         = 0x0308, ///<
    CMSG_LFG_SET_COMMENT                           = 0x0000, ///< 6.0.2 19027 (unused)
    CMSG_LFG_SET_ROLES                             = 0x0000, ///< 6.0.2 19027
    CMSG_LFG_TELEPORT                              = 0x0316, ///<
    CMSG_SEARCH_LFG_JOIN                           = 0x0000, ///< 6.0.2 19027 (unused)
    CMSG_SEARCH_LFG_LEAVE                          = 0x0000, ///< 6.0.2 19027 (unused)
    CMSG_RESET_INSTANCES                           = 0x0389, ///<
    CMSG_REQUEST_LFGLIST_BLACKLIST                 = 0x0BCA, ///< (unused)

    //////////////////////////////////////////////////////////////////////////
    /// Auction House
    //////////////////////////////////////////////////////////////////////////
    CMSG_AUCTION_HELLO                             = 0x13EA, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Trainers
    //////////////////////////////////////////////////////////////////////////
    CMSG_TRAINER_LIST                              = 0x0A2E, ///<
    CMSG_TRAINER_BUY_SPELL                         = 0x0A28, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Void storage
    //////////////////////////////////////////////////////////////////////////
    CMSG_VOID_STORAGE_QUERY                        = 0x019E, ///<
    CMSG_VOID_STORAGE_TRANSFER                     = 0x0463, ///<
    CMSG_VOID_STORAGE_UNLOCK                       = 0x13BB, ///<
    CMSG_VOID_SWAP_ITEM                            = 0x0619, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Transmogrification
    //////////////////////////////////////////////////////////////////////////
    CMSG_TRANSMOGRIFY_ITEMS                        = 0x0A85, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Mail
    //////////////////////////////////////////////////////////////////////////
    CMSG_GET_MAIL_LIST                             = 0x0BD3, ///<
    CMSG_MAIL_CREATE_TEXT_ITEM                     = 0x13D1, ///<
    CMSG_MAIL_DELETE                               = 0x068C, ///<
    CMSG_MAIL_MARK_AS_READ                         = 0x02D1, ///<
    CMSG_MAIL_RETURN_TO_SENDER                     = 0x1B84, ///<
    CMSG_MAIL_TAKE_ITEM                            = 0x0030, ///<
    CMSG_MAIL_TAKE_MONEY                           = 0x0806, ///<
    CMSG_SEND_MAIL                                 = 0x0910, ///<
    CMSG_QUERY_NEXT_MAIL_TIME                      = 0x0B31, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Time
    //////////////////////////////////////////////////////////////////////////
    CMSG_UITIME_REQUEST                            = 0x0302, ///<

    //////////////////////////////////////////////////////////////////////////
    /// GameMasters
    //////////////////////////////////////////////////////////////////////////
    CMSG_GMRESPONSE_RESOLVE                         = 0x0B20, ///<
    CMSG_GMSURVEY_SUBMIT                            = 0x01AB, ///<
    CMSG_GMTICKET_CREATE                            = 0x0935, ///<
    CMSG_GMTICKET_DELETETICKET                      = 0x0F2E, ///<
    CMSG_GMTICKET_GETTICKET                         = 0x0B28, ///<
    CMSG_GMTICKET_GET_CASE_STATUS                   = 0x0F0A, ///<
    CMSG_GMTICKET_SYSTEMSTATUS                      = 0x0B0E, ///<
    CMSG_GMTICKET_UPDATETEXT                        = 0x0323, ///<
    CMSG_GM_REPORT_LAG                              = 0x0101, ///<
    CMSG_REPORT_BUG                                 = 0x0B0D, ///<
    CMSG_REPORT_SUGGESTION                          = 0x0D0A, ///<

    //////////////////////////////////////////////////////////////////////////
    /// ToyBox
    //////////////////////////////////////////////////////////////////////////
    CMSG_ADD_NEW_TOY_TO_BOX                         = 0x0632, ///<
    CMSG_SET_FAVORITE_TOY                           = 0x0105, ///<
    CMSG_USE_TOY                                    = 0x16E2, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Calendar
    //////////////////////////////////////////////////////////////////////////
    CMSG_CALENDAR_ADD_EVENT                         = 0x09A3, ///<
    CMSG_CALENDAR_COMPLAIN                          = 0x0D19, ///<
    CMSG_CALENDAR_COPY_EVENT                        = 0x0317, ///<
    CMSG_CALENDAR_EVENT_INVITE                      = 0x010E, ///<
    CMSG_CALENDAR_EVENT_MODERATOR_STATUS            = 0x118C, ///<
    CMSG_CALENDAR_EVENT_REMOVE_INVITE               = 0x03A3, ///<
    CMSG_CALENDAR_EVENT_RSVP                        = 0x11A4, ///<
    CMSG_CALENDAR_EVENT_SIGNUP                      = 0x0BAA, ///<
    CMSG_CALENDAR_EVENT_STATUS                      = 0x1201, ///<
    CMSG_CALENDAR_GET_CALENDAR                      = 0x0336, ///<
    CMSG_CALENDAR_GET_EVENT                         = 0x1229, ///<
    CMSG_CALENDAR_GET_NUM_PENDING                   = 0x033E, ///<
    CMSG_CALENDAR_GUILD_FILTER                      = 0x0000, ///<
    CMSG_CALENDAR_REMOVE_EVENT                      = 0x0330, ///<
    CMSG_CALENDAR_UPDATE_EVENT                      = 0x12A2, ///<

    //////////////////////////////////////////////////////////////////////////
    /// Challenges
    //////////////////////////////////////////////////////////////////////////
    CMSG_CHALLENGE_MODE_REQUEST_LEADERS             = 0x0E66, ///<
    CMSG_GET_CHALLENGE_MODE_REWARDS                 = 0x1C2F, ///<
    CMSG_CHALLENGE_MODE_REQUEST_MAP_STATS           = 0x0E78, ///<

    //////////////////////////////////////////////////////////////////////////
    /// BlackMarket
    //////////////////////////////////////////////////////////////////////////
    CMSG_BLACK_MARKET_OPEN                         = 0x1B39, ///<
    CMSG_BLACK_MARKET_REQUEST_ITEMS                = 0x0B21, ///<
    CMSG_BLACK_MARKET_PLACE_BID                    = 0x13C2, ///<

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    // CMSG
    CMSG_ACCEPT_LEVEL_GRANT                             = 0x0000,
    CMSG_ADD_VOICE_IGNORE                               = 0x0000,
    CMSG_ARENA_TEAM_ACCEPT                              = 0x0000,
    CMSG_ARENA_TEAM_CREATE                              = 0x0000,
    CMSG_ARENA_TEAM_DECLINE                             = 0x0000,
    CMSG_ARENA_TEAM_DISBAND                             = 0x0000,
    CMSG_ARENA_TEAM_INVITE                              = 0x0000,
    CMSG_ARENA_TEAM_LEADER                              = 0x0000,
    CMSG_ARENA_TEAM_LEAVE                               = 0x0000,
    CMSG_ARENA_TEAM_QUERY                               = 0x0000,
    CMSG_ARENA_TEAM_REMOVE                              = 0x0000,
    CMSG_ARENA_TEAM_ROSTER                              = 0x0000,
    CMSG_AUTOEQUIP_GROUND_ITEM                          = 0x0000,
    CMSG_AUTOEQUIP_ITEM_SLOT                            = 0x0000,
    CMSG_AUTOSTORE_GROUND_ITEM                          = 0x0000,
    CMSG_BOT_DETECTED2                                  = 0x0000,
    CMSG_CANCEL_TEMP_ENCHANTMENT                        = 0x0000,
    CMSG_CHANGEPLAYER_DIFFICULTY                        = 0x0000,
    CMSG_CHAT_FILTERED                                  = 0x0000,
    CMSG_CHAT_IGNORED                                   = 0x0000,
    CMSG_COMMENTATOR_ENABLE                             = 0x0000,
    CMSG_COMMENTATOR_ENTER_INSTANCE                     = 0x0000,
    CMSG_COMMENTATOR_EXIT_INSTANCE                      = 0x0000,
    CMSG_COMMENTATOR_GET_MAP_INFO                       = 0x0000,
    CMSG_COMMENTATOR_GET_PARTY_INFO                     = 0x0000,
    CMSG_COMMENTATOR_GET_PLAYER_INFO                    = 0x0000,
    CMSG_COMMENTATOR_INSTANCE_COMMAND                   = 0x0000,
    CMSG_COMMENTATOR_SKIRMISH_QUEUE_COMMAND             = 0x0000,
    CMSG_COMMENTATOR_START_WARGAME                      = 0x0000,
    CMSG_COMPLAIN                                       = 0x0000,
    CMSG_CONNECT_TO_FAILED                              = 0x0000,
    CMSG_DANCE_QUERY                                    = 0x0000,
    CMSG_DEL_VOICE_IGNORE                               = 0x0000,
    CMSG_DISMISS_CRITTER                                = 0x0000,
    CMSG_FORCE_MOVE_ROOT_ACK                            = 0x0000,
    CMSG_FORCE_MOVE_UNROOT_ACK                          = 0x0000,
    CMSG_GAMESPEED_SET                                  = 0x0000,
    CMSG_GAMETIME_SET                                   = 0x0000,
    CMSG_GETDEATHBINDZONE                               = 0x0000,
    CMSG_GET_MIRRORIMAGE_DATA                           = 0x0000,
    CMSG_GHOST                                          = 0x0000,
    CMSG_GRANT_LEVEL                                    = 0x0000,
    CMSG_GROUP_ASSISTANT_LEADER                         = 0x0000,
    CMSG_GROUP_ASSIGNMENT                               = 0x0000,
    CMSG_GROUP_CANCEL                                   = 0x0000,
    CMSG_GROUP_CHANGE_SUB_GROUP                         = 0x0000,
    CMSG_GROUP_REQUEST_JOIN_UPDATES                     = 0x0000,
    CMSG_GROUP_SWAP_SUB_GROUP                           = 0x0000,
    CMSG_HEARTH_AND_RESURRECT                           = 0x0000,
    CMSG_INSTANCE_LOCK_WARNING_RESPONSE                 = 0x0000,
    CMSG_ITEM_REFUND                                    = 0x0000,
    CMSG_MANEUVER_START                                 = 0x0000,
    CMSG_MEETINGSTONE_INFO                              = 0x0000,
    CMSG_MINIGAME_MOVE                                  = 0x0000,
    CMSG_MOVE_CHARM_TELEPORT_CHEAT                      = 0x0000,
    CMSG_MOVE_ENABLE_SWIM_TO_FLY_TRANS_ACK              = 0x0000,
    CMSG_MOVE_NOT_ACTIVE_MOVER                          = 0x0000,
    CMSG_MOVE_SET_RELATIVE_POSITION                     = 0x0000,
    CMSG_MOVE_TOGGLE_COLLISION_ACK                      = 0x0000,
    CMSG_NEW_SPELL_SLOT                                 = 0x0000,
    CMSG_PLAYER_DIFFICULTY_CHANGE                       = 0x0000,
    CMSG_PLAYER_LOGOUT                                  = 0x0000,
    CMSG_PLAY_DANCE                                     = 0x0000,
    CMSG_PVP_LOG_DATA                                   = 0x0000,
    CMSG_QUERY_BATTLEFIELD_STATE                        = 0x0000,
    CMSG_QUERY_TIME                                     = 0x0000,
    CMSG_QUEST_NPC_QUERY                                = 0x0000,
    CMSG_RANDOMIZE_CHAR_NAME                            = 0x0000,
    CMSG_REALM_SPLIT                                    = 0x0000,
    CMSG_REDIRECTION_AUTH_PROOF                         = 0x0000,
    CMSG_REPORT_PVP_AFK                                 = 0x0000,
    CMSG_REQUEST_BATTLEPET_JOURNAL                      = 0x0000,
    CMSG_REQUEST_CATEGORY_COOLDOWNS                     = 0x0000,
    CMSG_REQUEST_GM_TICKET                              = 0x0000,
    CMSG_REQUEST_PARTY_MEMBER_STATS                     = 0x0000,
    CMSG_REQUEST_RATED_BG_INFO                          = 0x0000,
    CMSG_REQUEST_RATED_BG_STATS                         = 0x0000,
    CMSG_REQUEST_RESEARCH_HISTORY                       = 0x0000,
    CMSG_RESET_CHALLENGE_MODE                           = 0x0000,
    CMSG_RESET_FACTION_CHEAT                            = 0x0000,
    CMSG_SAVE_PLAYER                                    = 0x0000,
    CMSG_SEND_SOR_REQUEST_VIA_ADDRESS                   = 0x0000,
    CMSG_SEND_SOR_REQUEST_VIA_BNET_ACCOUNT_ID           = 0x0000,
    CMSG_SERVERTIME                                     = 0x0000,
    CMSG_SETDEATHBINDPOINT                              = 0x0000,
    CMSG_SET_ALLOW_LOW_LEVEL_RAID1                      = 0x0000,
    CMSG_SET_ALLOW_LOW_LEVEL_RAID2                      = 0x0000,
    CMSG_SET_CURRENCY_FLAGS                             = 0x0000,
    CMSG_SET_FACTION_ATWAR                              = 0x0000,
    CMSG_UNSET_FACTION_ATWAR                            = 0x0000,
    CMSG_SET_FACTION_CHEAT                              = 0x0000,
    CMSG_SET_LFG_COMMENT                                = 0x0000,
    CMSG_SET_PREFERED_CEMETERY                          = 0x0000,
    CMSG_SET_RELATIVE_POSITION                          = 0x0000,
    CMSG_SET_SAVED_INSTANCE_EXTEND                      = 0x0000,
    CMSG_SET_SKILL_CHEAT                                = 0x0000,
    CMSG_SHOW_ACCOUNT_ACHIEVEMENT                       = 0x0000,
    CMSG_START_QUEST                                    = 0x0000,
    CMSG_STOP_DANCE                                     = 0x0000,
    CMSG_SUBMIT_BUG                                     = 0x0000,
    CMSG_SUBMIT_COMPLAIN                                = 0x0000,
    CMSG_SUGGESTION_SUBMIT                              = 0x0000,
    CMSG_SUMMON_BATTLEPET_COMPANION                     = 0x0000,
    CMSG_SUMMON_RESPONSE                                = 0x0000,
    CMSG_SUSPEND_TOKEN                                  = 0x0000,
    CMSG_SYNC_DANCE                                     = 0x0000,
    CMSG_TELEPORT_TO_UNIT                               = 0x0000,
    CMSG_TIME_ADJUSTMENT_RESPONSE                       = 0x0000,
    CMSG_TIME_SYNC_RESP_FAILED                          = 0x0000,
    CMSG_UNLEARN_SPECIALIZATION                         = 0x0000,
    CMSG_UNREGISTER_ALL_ADDON_PREFIXES                  = 0x0000,
    CMSG_UPDATE_MISSILE_TRAJECTORY                      = 0x0000,
    CMSG_UPGRADE_ITEM                                   = 0x0000,
    CMSG_USED_FOLLOW                                    = 0x0000,
    CMSG_VOICE_SESSION_ENABLE                           = 0x0000,
    CMSG_WARDEN_DATA                                    = 0x0000,
    CMSG_WARGAME_ACCEPT                                 = 0x0000,
    CMSG_WARGAME_START                                  = 0x0000,
    CMSG_WHOIS                                          = 0x0000,
    CMSG_WORLD_TELEPORT                                 = 0x0000,
    CMSG_WRAP_ITEM                                      = 0x0000,
    CMSG_ZONEUPDATE                                     = 0x0000,
    CMSG_ARENA_2v2_STATS_REQUEST                        = 0x0000,
    CMSG_ARENA_3v3_STATS_REQUEST                        = 0x0000,

    // SMSG
    SMSG_ACCOUNT_PROFILE                                = 0x0000,
    SMSG_ADJUST_SPLINE_DURATION                         = 0x0000,
    SMSG_ADD_BATTLENET_FRIEND_RESPONSE                  = 0x0000,
    SMSG_AREA_SHARE_MAPPINGS_RESPONSE                   = 0x0000,
    SMSG_AREA_SHARE_INFO_RESPONSE                       = 0x0000,
    SMSG_BEASTMASTER_FAILED                             = 0x0000,
    SMSG_BONUS_ROLL_EMPTY                               = 0x0000,
    SMSG_CANCEL_SCENE                                   = 0x0000,
    SMSG_CANCEL_ORPHAN_SPELL_VISUAL                     = 0x0000,
    SMSG_CANCEL_SPELL_VISUAL                            = 0x0000,
    SMSG_CHALLENGE_MODE_DELETE_LEADER_RESULT            = 0x0000,
    SMSG_CLEAR_ITEM_CHALLENGE_MODE_DATA                 = 0x0000,
    SMSG_CONSOLE_WRITE                                  = 0x0000,
    SMSG_DISPLAY_PROMOTION                              = 0x0000,
    SMSG_DISPLAY_PLAYER_CHOICE                          = 0x0000,
    SMSG_FORCE_OBJECT_RELINK                            = 0x0000,
    SMSG_GHOST                                          = 0x0000,
    SMSG_GM_CHARACTER_SAVE_FAILURE                      = 0x0000,
    SMSG_GM_FREEZE_FAILURE                              = 0x0000,
    SMSG_GM_NAMED_POINTS                                = 0x0000,
    SMSG_GM_RESURRECT_FAILURE                           = 0x0000,
    SMSG_GM_REVEAL_TO                                   = 0x0000,
    SMSG_GM_SILENCE                                     = 0x0000,
    SMSG_IMMIGRANT_HOST_SEARCH_LOG                      = 0x0000,
    SMSG_LIST_TARGETS                                   = 0x0000,
    SMSG_MOVE_CHARACTER_CHEAT_FAILURE                   = 0x0000,
    SMSG_MOVE_CHARACTER_CHEAT_SUCCESS                   = 0x0000,
    SMSG_PENDING_RAID_LOCK                              = 0x0000,
    SMSG_PET_BATTLE_CHAT_RESTRICTED                     = 0x0000,
    SMSG_PET_BATTLE_DEBUG_QUEUE_DUMP_RESPONSE           = 0x0000,
    SMSG_PET_BATTLE_FINAL_ROUND                         = 0x0000,
    SMSG_PET_BATTLE_FINISHED                            = 0x0000,
    SMSG_PET_BATTLE_FIRST_ROUND                         = 0x0000,
    SMSG_PET_BATTLE_QUEUE_PROPOSE_MATCH                 = 0x0000,
    SMSG_PET_BATTLE_QUEUE_STATUS                        = 0x0000,
    SMSG_PET_BATTLE_ROUND_RESULT                        = 0x0000,
    SMSG_PET_BATTLE_REPLACEMENTS_MADE                   = 0x0000,
    SMSG_PET_BATTLE_REQUEST_FAILED                      = 0x0000,
    SMSG_PET_BATTLE_SLOT_UPDATE                         = 0x0000,
    SMSG_PLAYER_NOT_FOUND_FAILURE                       = 0x0000,
    SMSG_PLAY_ORPHAN_SPELL_VISUAL                       = 0x0000,
    SMSG_PLAY_SCENE                                     = 0x0000,
    SMSG_REFRESH_COMPONENT                              = 0x0000,
    SMSG_RESET_WEEKLY_CURRENCY                          = 0x0000,
    SMSG_SCENE_OBJECT_EVENT                             = 0x0000,
    SMSG_SCENE_OBJECT_PET_BATTLE_FINISHED               = 0x0000,
    SMSG_SCENE_OBJECT_PET_BATTLE_FIRST_ROUND            = 0x0000,
    SMSG_SCENE_OBJECT_PET_BATTLE_FINAL_ROUND            = 0x0000,
    SMSG_SCENE_OBJECT_PET_BATTLE_ROUND_RESULT           = 0x0000,
    SMSG_SCENE_OBJECT_PET_BATTLE_REMPLACEMENTS_MADE     = 0x0000,
    SMSG_SERVER_INFO_QUERY_RESPONSE                     = 0x0000,
    SMSG_PROFILE_DATA_RESPONSE                          = 0x0000,
    SMSG_SET_ITEM_CHALLENGE_MODE_DATA                   = 0x0000,
    SMSG_SET_MELEE_ANIM_KIT                             = 0x0000,
    SMSG_SET_MOVEMENT_ANIM_KIT                          = 0x0000,
    SMSG_SET_PROMOTION_RESPONSE                         = 0x0000,
    SMSG_SET_SERVER_WOW_TIME                            = 0x0000,
    SMSG_SHOW_ZONES_CHEAT_RESULT                        = 0x0000,
    SMSG_UPDATE_EXPANSION_LEVEL                         = 0x0000,
    SMSG_ACCOUNT_INFO_RESPONSE                          = 0x0000,
    SMSG_AREA_TRIGGER_DENIED                            = 0x0000,
    SMSG_AREA_TRIGGER_MOVEMENT_UPDATE                   = 0x0000,
    SMSG_ARENA_ERROR                                    = 0x0000,
    SMSG_AVERAGE_ITEM_LEVEL_INFORM                      = 0x0000,
    SMSG_BATTLEGROUND_INFO_THROTTLED                    = 0x0000,
    SMSG_BATTLEPET_JOURNAL                              = 0x0000,
    SMSG_CAMERA_SHAKE                                   = 0x0000,
    SMSG_CHARACTER_LOGIN_FAILED                         = 0x0000,
    SMSG_CLEAR_BOSS_EMOTES                              = 0x0000,
    SMSG_COMBAT_EVENT_FAILED                            = 0x0000,
    SMSG_COMMENTATOR_MAP_INFO                           = 0x0000,
    SMSG_COMMENTATOR_PLAYER_INFO                        = 0x0000,
    SMSG_COMMENTATOR_STATE_CHANGED                      = 0x0000,
    SMSG_CUSTOM_LOAD_SCREEN                             = 0x0000,
    SMSG_DAMAGE_CALC_LOG                                = 0x0000,
    SMSG_DIFFERENT_INSTANCE_FROM_PARTY                  = 0x0000,
    SMSG_DISENCHANT_CREDIT                              = 0x0000,
    SMSG_DISPLAY_GAME_ERROR                             = 0x0000,
    SMSG_DONT_AUTO_PUSH_SPELLS_TO_ACTION_BAR            = 0x0000,
    SMSG_DUMP_RIDE_TICKETS_RESPONSE                     = 0x0000,
    SMSG_FAILED_PLAYER_CONDITION                        = 0x0000,
    SMSG_FLIGHT_SPLINE_SYNC                             = 0x0000,
    SMSG_FORCED_DEATH_UPDATE                            = 0x0000,
    SMSG_GAMEOBJECT_RESET_STATE                         = 0x0000,
    SMSG_GAME_SPEED_SET                                 = 0x0000,
    SMSG_GAME_TIME_SET                                  = 0x0000,
    SMSG_GAME_TIME_UPDATE                               = 0x0000,
    SMSG_GAME_EVENT_DEBUG_LOG                           = 0x0000,
    SMSG_GM_PLAYER_INFO                                 = 0x0000,
    SMSG_GOD_MODE                                       = 0x0000,
    SMSG_GROUP_ACTION_THROTTLED                         = 0x0000,
    SMSG_HEALTH_UPDATE                                  = 0x0000,
    SMSG_INVALIDATE_PLAYER                              = 0x0000,
    SMSG_INVALID_PROMOTION_CODE                         = 0x0000,
    SMSG_ITEM_ADD_PASSIVE                               = 0x0000,
    SMSG_ITEM_REFUND_INFO_RESPONSE                      = 0x0000,
    SMSG_REMOVE_ITEM_PASSIVE                            = 0x0000,
    SMSG_SEND_ITEM_PASSIVES                             = 0x0000,
    SMSG_MAP_OBJ_EVENTS                                 = 0x0000,
    SMSG_MESSAGE_BOX                                    = 0x0000,
    SMSG_MISSILE_CANCEL                                 = 0x0000,
    SMSG_NOTIFY_MONEY                                   = 0x0000,
    SMSG_MOVE_SET_COMPOUND_STATE                        = 0x0000,
    SMSG_MOVE_UPDATE_COLLISION_HEIGHT                   = 0x0000,
    SMSG_ABORT_NEW_WORLD                                = 0x0000,
    SMSG_OPEN_CONTAINER                                 = 0x0000,
    SMSG_OPEN_LFG_DUNGEON_FINDER                        = 0x0000,
    SMSG_PAUSE_MIRROR_TIMER                             = 0x0000,
    SMSG_CHANGE_PLAYER_DIFFICULTY_RESULT                = 0x0000,
    SMSG_PLAYER_SKINNED                                 = 0x0000,
    SMSG_PLAY_TIME_WARNING                              = 0x0000,
    SMSG_PROPOSE_LEVEL_GRANT                            = 0x0000,
    SMSG_SUMMON_RAID_MEMBER_VALIDATE_FAILED             = 0x0000,
    SMSG_GENERATE_RANDOM_CHARACTER_NAME_RESULT          = 0x0000,
    SMSG_REALM_SPLIT                                    = 0x0000,
    SMSG_REFER_A_FRIEND_EXPIRED                         = 0x0000,
    SMSG_REFER_A_FRIEND_FAILURE                         = 0x0000,
    SMSG_REPORT_PVP_PLAYER_AFK_RESULT                   = 0x0000,
    SMSG_SERVER_TIME                                    = 0x0000,
    SMSG_SERVER_INFO_RESPONSE                           = 0x0000,
    SMSG_SERVER_PERF                                    = 0x0000,
    SMSG_SET_DF_FAST_LAUNCH_RESULT                      = 0x0000,
    SMSG_SET_PLAY_HOVER_ANIM                            = 0x0000,
    SMSG_SHOW_RATINGS                                   = 0x0000,
    SMSG_SOR_START_EXPERIENCE_INCOMPLETE                = 0x0000,
    SMSG_STREAMING_MOVIES                               = 0x0000,
    SMSG_SUMMON_CANCEL                                  = 0x0000,
    SMSG_SUPPRESS_NPC_GREETINGS                         = 0x0000,
    SMSG_TALENTS_INVOLUNTARILY_RESET                    = 0x0000,
    SMSG_TIME_ADJUSTMENT                                = 0x0000,
    SMSG_UPDATE_SERVER_PLAYER_POSITION                  = 0x0000,
    SMSG_WAIT_QUEUE_FINISH                              = 0x0000,
    SMSG_WAIT_QUEUE_UPDATE                              = 0x0000,
    SMSG_WARGAME_REQUEST_SUCCESSFULLY_SENT_TO_OPPONENT  = 0x0000,
    SMSG_CHEAT_PLAYER_LOOKUP                            = 0x0000,
    SMSG_DBLOOKUP_RESULTS                               = 0x0000,
    SMSG_DEBUG_AISTATE                                  = 0x0000,
    SMSG_DYNAMIC_DROP_ROLL_RESULT                       = 0x0000,
    SMSG_FORCE_ACTION_SHOW_RESPONSE                     = 0x0000,
    SMSG_FORCE_ANIM                                     = 0x0000,
    SMSG_GHOSTEE_GONE                                   = 0x0000,
    SMSG_KICK_REASON                                    = 0x0000,
    SMSG_RESET_RANGED_COMBAT_TIMER                      = 0x0000,
    SMSG_SCRIPT_MESSAGE                                 = 0x0000,
    SMSG_SERVER_BUCK_DATA                               = 0x0000,
    SMSG_SERVER_BUCK_DATA_START                         = 0x0000,
    SMSG_SHOW_MAILBOX                                   = 0x0000,
};

/// Player state
enum SessionStatus
{
    STATUS_AUTHED = 0,                                          // Player authenticated (_player == NULL, m_playerRecentlyLogout = false or will be reset before handler call, m_GUID have garbage)
    STATUS_LOGGEDIN,                                            // Player in game (_player != NULL, m_GUID == _player->GetGUID(), inWorld())
    STATUS_TRANSFER,                                            // Player transferring to another map (_player != NULL, m_GUID == _player->GetGUID(), !inWorld())
    STATUS_LOGGEDIN_OR_RECENTLY_LOGGOUT,                        // _player != NULL or _player == NULL && m_playerRecentlyLogout && m_playerLogout, m_GUID store last _player guid)
    STATUS_NEVER,                                               // Opcode not accepted from client (deprecated or server side only)
    STATUS_UNHANDLED                                            // Opcode not handled yet
};

enum PacketProcessing
{
    PROCESS_INPLACE = 0,                                        // process packet whenever we receive it - mostly for non-handled or non-implemented packets
    PROCESS_THREADUNSAFE,                                       // packet is not thread-safe - process it in World::UpdateSessions()
    PROCESS_THREADSAFE                                          // packet is thread-safe - process it in Map::Update()
};

class WorldPacket;
class WorldSession;

typedef void(WorldSession::*g_OpcodeHandlerType)(WorldPacket& recvPacket);

struct OpcodeHandler
{
    OpcodeHandler() {}
    OpcodeHandler(char const* _name, SessionStatus _status, PacketProcessing _processing, g_OpcodeHandlerType _handler)
        : name(_name), status(_status), packetProcessing(_processing), handler(_handler) {}

    char const* name;
    SessionStatus status;
    PacketProcessing packetProcessing;
    g_OpcodeHandlerType handler;
};

extern OpcodeHandler* g_OpcodeTable[TRANSFER_DIRECTION_MAX][NUM_OPCODE_HANDLERS];
void InitOpcodes();

// Lookup opcode name for human understandable logging
inline std::string GetOpcodeNameForLogging(Opcodes id, int p_Direction)
{
    uint32 opcode = uint32(id);
    std::ostringstream ss;
    ss << '[';

    if (id < UNKNOWN_OPCODE)
    {
        OpcodeHandler* handler = g_OpcodeTable[p_Direction][uint32(id) & 0x7FFF];

        if (!handler)
            ss << "UNKNOWN OPCODE";
        else
            ss << handler->name;
    }
    else
        ss << "INVALID OPCODE";

    ss << " 0x" << std::hex << std::uppercase << opcode << std::nouppercase << " (" << std::dec << opcode << ")]";
    return ss.str();
}

#endif
/// @}
