
@interface WBTabGroupManager : NSObject <WBParticipantPresenceCoordinatorDelegate, WBSCRDTPositionGeneratorDelegate, WBSCloudTabDeviceProvider, WBSProfileProviding, WBStateProvider, WBTabGroupSyncAgentSyncObserver> {
    WBSPair * _activeTabGroupAndTabUUIDPair;
    NSCountedSet * _activeTabGroupUUIDs;
    NSMutableDictionary * _broadcastingTabGroupUUIDsToCKShare;
    NSHashTable * _cloudTabObservers;
    WBSPair * _currentShareAcceptancePair;
    NSMutableDictionary * _devicesByUUID;
    bool  _didFinishSetup;
    bool  _enableSharedTabGroupsFastSyncPresence;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isBroadcastingPresenceUpdates;
    NSString * _lastLocalDeviceNameSaved;
    NSMutableDictionary * _localTabGroupsByUUID;
    NSMutableDictionary * _localTabsByUUID;
    long long  _numberOfDevicePresenceReportingRequests;
    NSHashTable * _observers;
    NSMutableArray * _pendingShareAcceptancePairQueue;
    WBSCRDTPositionGenerator * _positionGenerator;
    WBParticipantPresenceCoordinator * _presenceCoordinator;
    NSMutableDictionary * _profilesByIdentifier;
    NSMutableSet * _recentlyAddedTabGroupsAwaitingFirstStartPage;
    NSMutableDictionary * _removedProfilesByIdentifier;
    NSMutableDictionary * _removedTabGroupsByUUID;
    NSMutableDictionary * _removedTabsByUUID;
    id /* block */  _setupCompletionHandler;
    <WBTabGroupSyncAgentProtocol> * _syncAgentProxy;
    NSMutableDictionary * _syncableTabGroupsByUUID;
    NSMutableDictionary * _syncableTabsByUUID;
    WBTabCollection * _tabCollection;
    NSDictionary * _tabGroupUUIDsToCKShares;
}

@property (nonatomic, readonly, copy) NSSet *allNamedProfileIdentifiers;
@property (nonatomic, readonly, copy) NSArray *allNamedTabGroupsUnsorted;
@property (nonatomic, readonly, copy) NSSet *allProfileIdentifiers;
@property (nonatomic, readonly) WBBrowserState *browserState;
@property (nonatomic, readonly) bool cloudTabsAreEnabled;
@property (getter=hasCompletedMigration, nonatomic, readonly) bool completedMigration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) WBProfile *defaultProfile;
@property (nonatomic, readonly, copy) NSString *defaultProfileIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enableSharedTabGroupsFastSyncPresence;
@property (nonatomic, readonly) bool hasMultipleProfiles;
@property (nonatomic, readonly) bool hasSharedTabGroups;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBroadcastingPresenceUpdates;
@property (nonatomic, readonly) WBBrowserState *lastSessionBrowserState;
@property (nonatomic) unsigned long long maximumTabsPerGroup;
@property (nonatomic, readonly, copy) NSArray *namedProfiles;
@property (nonatomic, readonly, copy) NSArray *namedTabGroupsInDefaultProfile;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (nonatomic, readonly) int pinnedTabsFolderID;
@property (nonatomic, readonly) int privatePinnedTabsFolderID;
@property (nonatomic, readonly, copy) NSArray *profiles;
@property (nonatomic, readonly, copy) NSSet *recentlyAddedTabGroupsAwaitingFirstStartPage;
@property (readonly) Class superclass;
@property (nonatomic, retain) <WBTabGroupSyncAgentProtocol> *syncAgentProxy;
@property (nonatomic, readonly) WBTabCollection *tabCollection;
@property (nonatomic, readonly, copy) NSArray *windowStates;
@property (nonatomic, readonly, copy) NSArray *windows;
@property (nonatomic, readonly) int windowsFolderSpecialID;

+ (id)ephemeralTabGroupManager;

- (void).cxx_destruct;
- (void)_addTab:(id)arg1 toParentIdentifierInTabsToParentIdentifiersDictionary:(id)arg2;
- (void)_addTabsInTabGroups:(id)arg1 toParentIdentifierInTabsToParentIdentifiersDictionary:(id)arg2;
- (id)_allTabGroupsUnsorted;
- (void)_beginDevicePresenceReportingIfNeeded;
- (void)_cacheProfile:(id)arg1;
- (void)_cacheTabGroup:(id)arg1;
- (void)_commonInit;
- (void)_dequeueNextAcceptCloudKitShareMetadataIfNeeded;
- (id)_devicesForProfileWithIdentifier:(id)arg1;
- (void)_didFlushDeletedTabs:(id)arg1 inTabGroup:(id)arg2;
- (void)_didModifyUnnamedTabGroup:(id)arg1;
- (void)_didModifyUnnamedTabGroupInDeviceWithUUID:(id)arg1;
- (void)_didReceiveShare:(id)arg1 forTabGroupUUID:(id)arg2;
- (void)_didRemoveProfiles:(id)arg1 updateProfiles:(id)arg2 previousProfiles:(id)arg3 removeTabGroups:(id)arg4 updateTabGroups:(id)arg5 previousTabGroups:(id)arg6;
- (void)_endDevicePresenceReportingIfNeeded;
- (void)_ensureProfileDirectoriesExistForProfile:(id)arg1;
- (id)_findLocalDeviceForProfileWithIdentifier:(id)arg1;
- (id)_findOrCreateLocalDeviceWithName:(id)arg1 forProfileWithIdentifier:(id)arg2;
- (id)_generatePositionAfterProfile:(id)arg1;
- (id)_generatePositionForDevice:(id)arg1 afterDevice:(id)arg2;
- (id)_generatePositionForTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (id)_insertDevice:(id)arg1 inProfile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_insertTabGroup:(id)arg1 afterTabGroup:(id)arg2 isMove:(bool)arg3;
- (id /* block */)_itemSyncPositionComparator;
- (id)_localTabGroups;
- (void)_mergeTabGroups:(id)arg1;
- (void)_movePresenceForParticipantToTabWithUUID:(id)arg1;
- (id)_namedProfiles;
- (long long)_nextInMemoryPositionChangeID;
- (void)_notifyScopedBookmarkChangesInFolderWithID:(int)arg1;
- (id)_performCRDTMergeAndMapTabsToParentIdentifiersWithProfilesByIdentifier:(id)arg1 devicesByUUID:(id)arg2 uninsertedSyncableTabsFromSyncableTabsByUUID:(id)arg3;
- (id)_profiles;
- (void)_reloadProfilesAndTabGroupsAndNotify:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_remoteDevicesForProfileWithIdentifier:(id)arg1;
- (void)_removeProfileDirectoriesForProfile:(id)arg1;
- (void)_reorderTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (void)_sendAcceptanceResult:(long long)arg1 forShareMetadata:(id)arg2 toHandler:(id)arg3;
- (id)_shareRecordIfNeededToBeginCollaborationForTabGroup:(id)arg1;
- (id)_shareRecordIfNeededToEndCollaborationForTabGroup:(id)arg1;
- (bool)_shouldBeginDevicePresenceReporting;
- (bool)_shouldEndDevicePresenceReporting;
- (id)_tabCacheForTabGroup:(id)arg1;
- (id)_tabGroupCacheForTabGroup:(id)arg1;
- (void)_tabGroupSyncDidFinish:(id)arg1;
- (id)_tabGroupWithUUID:(id)arg1;
- (id)_tabGroupsForProfileWithIdentifier:(id)arg1;
- (id)_tabWithUUID:(id)arg1;
- (void)_uncacheTab:(id)arg1;
- (void)_uncacheTabGroup:(id)arg1;
- (id)_unnamedTabGroupsForDeviceWithUUID:(id)arg1;
- (id)_unnamedTabGroupsForProfileWithIdentifier:(id)arg1;
- (void)_unsafeCreateDefaultProfileIfNecessary;
- (id)_unsafeMutableDefaultProfile;
- (id)_unsafeTabGroupUUIDsToCKShares;
- (void)_updateDeviceNameIfNeededWithName:(id)arg1;
- (void)_updatePositionsForTabsInTabGroup:(id)arg1;
- (void)_updateTabGroupShares:(id)arg1;
- (void)_updateTabsAndCacheTabGroup:(id)arg1 withTabsByParentIdentifiers:(id)arg2;
- (void)_userDidAcceptTabGroupShareWithMetadata:(id)arg1 inProfileWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_willFlushDeletedTabs:(id)arg1 inTabGroup:(id)arg2;
- (void)acceptTabGroupShareWithMetadata:(id)arg1 handler:(id)arg2;
- (void)activeParticipantsDidUpdateInTabGroupWithUUID:(id)arg1;
- (void)activeParticipantsDidUpdateInTabWithUUID:(id)arg1;
- (void)addCloudTabsObserver:(id)arg1;
- (void)addTabGroupObserver:(id)arg1;
- (id)allNamedProfileIdentifiers;
- (id)allNamedTabGroupsUnsorted;
- (id)allProfileIdentifiers;
- (void)appendProfile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginParticipantPresenceReportingForTabGroupWithUUID:(id)arg1;
- (void)beginSharingTabGroupWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)browserState;
- (void)closeAllTabsInProfilesWithIdentifiers:(id)arg1;
- (bool)closeTab:(id)arg1 onDevice:(id)arg2;
- (bool)cloudTabsAreEnabled;
- (id)defaultProfile;
- (id)defaultProfileIdentifier;
- (void)deleteScopedBookmarkWithUUID:(id)arg1;
- (void)deleteScopedBookmarkWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteWindowStates:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)deviceIdentifierForPositionGenerator:(id)arg1;
- (id)devicesForProfile:(id)arg1;
- (void)disableDevicePresenceReporting;
- (void)disableSuddenTerminationForPendingChanges;
- (void)enableDevicePresenceReporting;
- (bool)enableSharedTabGroupsFastSyncPresence;
- (void)endParticipantPresenceReportingForTabGroupWithUUID:(id)arg1;
- (void)flushDeletedTabsInTabGroup:(id)arg1;
- (void)getActiveParticipantsInTab:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getActiveParticipantsInTabGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCurrentConnectionStateWithCompletionHandler:(id /* block */)arg1;
- (void)getPresenceTabUUIDForParticipantIdentifier:(id)arg1 inTabGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasCompletedMigration;
- (bool)hasMultipleProfiles;
- (bool)hasSharedTabGroups;
- (id)initWithCollection:(id)arg1;
- (bool)insertItems:(id)arg1 inParentWithID:(unsigned int)arg2 afterItem:(id)arg3;
- (void)insertScopedBookmark:(id)arg1 inScopedBookmarkFolderWithID:(int)arg2 afterBookmarkWithUUID:(id)arg3;
- (id)insertTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (id)insertUnnamedTabGroup:(id)arg1 deviceName:(id)arg2;
- (bool)isBroadcastingPresenceUpdates;
- (bool)isPersistent;
- (id)lastSessionBrowserState;
- (unsigned long long)maximumTabsPerGroup;
- (void)movePresenceForParticipantToTabWithUUID:(id)arg1;
- (void)moveProfile:(id)arg1 afterProfile:(id)arg2;
- (void)moveTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (void)moveTabGroup:(id)arg1 toProfileWithIdentifier:(id)arg2 afterTabGroup:(id)arg3;
- (id)moveTabs:(id)arg1 toTabGroup:(id)arg2 afterTab:(id)arg3 withoutPersistingTabGroupsWithUUIDStrings:(id)arg4;
- (id)namedProfiles;
- (id)namedTabGroupsForProfileWithIdentifier:(id)arg1;
- (id)namedTabGroupsInDefaultProfile;
- (long long)nextChangeIDForPositionInPositionGenerator:(id)arg1;
- (void)participantPresenceCoordinator:(id)arg1 didUpdateActiveParticipants:(id)arg2 inTabGroupWithIdentifier:(id)arg3;
- (void)participantPresenceCoordinator:(id)arg1 didUpdateActiveParticipants:(id)arg2 inTabWithIdentifier:(id)arg3;
- (int)pinnedTabsFolderID;
- (id)positionGenerator:(id)arg1 positionForRecordName:(id)arg2;
- (id)positionGenerator:(id)arg1 recordNameOfBookmarksAfterRecordWithName:(id)arg2;
- (id)positionGenerator:(id)arg1 recordNameOfBookmarksBeforeRecordWithName:(id)arg2;
- (int)privatePinnedTabsFolderID;
- (id)profileWithIdentifier:(id)arg1;
- (id)profileWithServerID:(id)arg1;
- (id)profiles;
- (void)recentlyAddedTabGroupIsAwaitingFirstStartPage:(id)arg1;
- (id)recentlyAddedTabGroupsAwaitingFirstStartPage;
- (void)registerWindowState:(id)arg1;
- (void)reloadTabGroupsFromDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)removeProfile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTabGroup:(id)arg1;
- (void)removeTabGroupObserver:(id)arg1;
- (void)reorderScopedBookmarkWithUUID:(id)arg1 afterBookmarkWithUUID:(id)arg2 notify:(bool)arg3;
- (bool)saveBrowserState:(id)arg1;
- (void)saveBrowserState:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)saveWindowState:(id)arg1;
- (void)saveWindowState:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)scopedBookmarkListWithID:(int)arg1 filteredUsingString:(id)arg2;
- (void)setMaximumTabsPerGroup:(unsigned long long)arg1;
- (void)setSyncAgentProxy:(id)arg1;
- (void)shareDidUpdateForTabGroupWithUUID:(id)arg1;
- (id)shareRecordForTabGroup:(id)arg1;
- (void)shareRecordForTabGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)syncAgentProxy;
- (void)syncDidFinishWithResult:(long long)arg1;
- (id)syncedRemoteCloudTabDevicesForProfileWithIdentifier:(id)arg1;
- (id)tabCollection;
- (void)tabGroupHasDisplayedStartPage:(id)arg1;
- (id)tabGroupMatchingShare:(id)arg1;
- (id)tabGroupWithUUID:(id)arg1;
- (id)tabWithUUID:(id)arg1;
- (id)tabsForTabGroup:(id)arg1;
- (id)topScopedBookmarkListForTabGroup:(id)arg1;
- (id)unnamedTabGroupsForProfileWithIdentifier:(id)arg1;
- (id)updateProfileWithIdentifier:(id)arg1 persist:(bool)arg2 usingBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)updateScopedBookmarkWithUUID:(id)arg1 title:(id)arg2 address:(id)arg3;
- (id)updateTabGroupWithUUID:(id)arg1 persist:(bool)arg2 usingBlock:(id /* block */)arg3;
- (id)updateTabWithUUID:(id)arg1 persist:(bool)arg2 notify:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)updateTabsInTabGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)updateTabsInTabGroupWithUUID:(id)arg1 persist:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)waitForPendingChanges;
- (void)waitForSetupWithCompletionHandler:(id /* block */)arg1;
- (id)windowStateWithUUID:(id)arg1;
- (id)windowStates;
- (id)windowWithUUID:(id)arg1;
- (id)windows;
- (int)windowsFolderSpecialID;

@end
