
@interface WBReadonlyTabCollection : NSObject <WBStateProvider> {
    WBTabCollection * _collection;
}

@property (nonatomic, readonly, copy) NSArray *allNamedTabGroupsUnsorted;
@property (nonatomic, readonly) WBBrowserState *browserState;
@property (getter=hasCompletedMigration, nonatomic, readonly) bool completedMigration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBBrowserState *lastSessionBrowserState;
@property (nonatomic) unsigned long long maximumTabsPerGroup;
@property (nonatomic, readonly, copy) NSArray *namedTabGroupsInDefaultProfile;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (nonatomic, readonly) int pinnedTabsFolderID;
@property (nonatomic, readonly) int privatePinnedTabsFolderID;
@property (nonatomic, readonly, copy) NSArray *profiles;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *windowStates;
@property (nonatomic, readonly, copy) NSArray *windows;
@property (nonatomic, readonly) int windowsFolderSpecialID;

- (void).cxx_destruct;
- (id)allNamedTabGroupsUnsorted;
- (id)browserState;
- (id)devicesForProfile:(id)arg1;
- (void)disableSuddenTerminationForPendingChanges;
- (bool)hasCompletedMigration;
- (id)init;
- (bool)isPersistent;
- (id)lastSessionBrowserState;
- (unsigned long long)maximumTabsPerGroup;
- (id)namedTabGroupsForProfileWithIdentifier:(id)arg1;
- (id)namedTabGroupsInDefaultProfile;
- (int)pinnedTabsFolderID;
- (int)privatePinnedTabsFolderID;
- (id)profiles;
- (void)setMaximumTabsPerGroup:(unsigned long long)arg1;
- (id)tabGroupWithUUID:(id)arg1;
- (id)tabWithUUID:(id)arg1;
- (id)tabsForTabGroup:(id)arg1;
- (void)waitForPendingChanges;
- (id)windowStateWithUUID:(id)arg1;
- (id)windowStates;
- (id)windowWithUUID:(id)arg1;
- (id)windows;
- (int)windowsFolderSpecialID;

@end
