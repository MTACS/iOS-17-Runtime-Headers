
@protocol WBTabGroupManagerObserver <NSObject>

@optional

- (void)tabGroupManager:(WBTabGroupManager *)arg1 didInsertProfileWithIdentifier:(NSString *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didPerformBlockUpdatesForTabGroupWithUUID:(NSString *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didRemoveProfileWithIdentifier:(NSString *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didRemoveTabGroupWithUUID:(NSString *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpadateActiveParticipants:(NSSet *)arg2 inTabGroupWithUUID:(NSString *)arg3;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpadateActiveParticipants:(NSSet *)arg2 inTabWithUUID:(NSString *)arg3;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateProfileWithIdentifier:(NSString *)arg2 difference:(WBProfileDifference *)arg3;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateScopedBookmarkList:(WebBookmarkList *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateTabGroupWithUUID:(NSString *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateTabWithUUID:(NSString *)arg2 userDriven:(bool)arg3;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateTabsInTabGroupWithUUID:(NSString *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 willPerformBlockUpdatesForTabGroupWithUUID:(NSString *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 willReplaceTabWithUUID:(NSString *)arg2 withTabWithUUID:(NSString *)arg3;
- (void)tabGroupManagerDidFinishSetup:(WBTabGroupManager *)arg1;
- (void)tabGroupManagerDidUpdateProfiles:(WBTabGroupManager *)arg1;
- (void)tabGroupManagerDidUpdateSyncableContent:(WBTabGroupManager *)arg1;
- (void)tabGroupManagerDidUpdateTabGroups:(WBTabGroupManager *)arg1;

@end
