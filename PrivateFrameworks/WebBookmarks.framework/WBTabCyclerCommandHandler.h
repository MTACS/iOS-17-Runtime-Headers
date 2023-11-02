
@interface WBTabCyclerCommandHandler : NSObject <WBSCyclerTestTarget> {
    NSTimer * _clearLocalTabGroupsRetryTimer;
    WBSDistributedNotificationObserver * _syncAgentNotificationObserver;
    WBTabCollection * _tabCollection;
    WBTabGroupManager * _tabGroupManager;
    _WBTabCyclerTabGroupUpdateObserver * _tabGroupUpdateObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBTabGroupManager *tabGroupManager;

- (void).cxx_destruct;
- (void)_clearLocalProfilesWithCompletionHandler:(id /* block */)arg1;
- (void)_clearLocalTabGroupsWithCompletionHandler:(id /* block */)arg1;
- (void)_clearLocalTabGroupsWithCompletionHandler:(id /* block */)arg1 retryCooldown:(double)arg2;
- (void)_clearRemoteProfilesWithCompletionHandler:(id /* block */)arg1;
- (void)_clearRemoteTabGroupsWithCompletionHandler:(id /* block */)arg1;
- (id)_cyclerRepresentationOfProfile:(id)arg1;
- (id)_cyclerRepresentationOfTab:(id)arg1;
- (id)_cyclerRepresentationOfTabGroup:(id)arg1;
- (void)_deleteProfile:(id)arg1 reply:(id /* block */)arg2;
- (void)_deleteTab:(id)arg1 reply:(id /* block */)arg2;
- (void)_deleteTabGroup:(id)arg1 reply:(id /* block */)arg2;
- (void)_moveTabGroup:(id)arg1 toProfileWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (id)_mutableTabBeforeIndex:(unsigned long long)arg1 inGroup:(id)arg2;
- (id)_profileWithIdentifier:(id)arg1;
- (void)_setSymbolImageName:(id)arg1 forProfileWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)_setTitle:(id)arg1 forProfileWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)_setTitle:(id)arg1 forTabGroupWithUUID:(id)arg2 reply:(id /* block */)arg3;
- (void)_setTitle:(id)arg1 forTabWithUUID:(id)arg2 reply:(id /* block */)arg3;
- (void)_startMonitoringSyncStatusWithCompletionHandler:(id /* block */)arg1;
- (void)_startMonitoringTabGroupUpdateExpectingMigration:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)_tabBeforeIndex:(unsigned long long)arg1 inGroup:(id)arg2;
- (id)_tabGroupBeforeIndex:(unsigned long long)arg1 inProfileWithIdentifier:(id)arg2;
- (id)_tabGroupWithIdentifier:(id)arg1;
- (id)_tabWithIdentifier:(id)arg1;
- (void)_triggerTabGroupSync;
- (void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)createBookmarkListWithTitle:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)createBookmarkWithTitle:(id)arg1 url:(id)arg2 inListWithIdentifier:(id)arg3 atIndex:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)createProfileWithTitle:(id)arg1 symbolName:(id)arg2 inListWithIdentifier:(id)arg3 reply:(id /* block */)arg4;
- (void)dealloc;
- (void)deleteBookmarkWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)deviceIdentifier;
- (void)fetchTopLevelBookmarkList:(id /* block */)arg1;
- (id)initWithTabGroupManager:(id)arg1;
- (void)moveBookmarkWithIdentifier:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setSymbolImageName:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)setTitle:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)setURL:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)syncBookmarksWithCompletionHandler:(id /* block */)arg1;
- (id)tabGroupManager;
- (id)tabGroups;

@end
