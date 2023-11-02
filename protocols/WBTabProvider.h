
@protocol WBTabProvider <NSObject>

@required

- (NSArray *)allNamedTabGroupsUnsorted;
- (NSArray *)devicesForProfile:(WBProfile *)arg1;
- (unsigned long long)maximumTabsPerGroup;
- (NSArray *)namedTabGroupsForProfileWithIdentifier:(NSString *)arg1;
- (NSArray *)namedTabGroupsInDefaultProfile;
- (int)pinnedTabsFolderID;
- (int)privatePinnedTabsFolderID;
- (void)setMaximumTabsPerGroup:(unsigned long long)arg1;
- (WBTabGroup *)tabGroupWithUUID:(NSString *)arg1;
- (WBTab *)tabWithUUID:(NSString *)arg1;
- (NSArray *)tabsForTabGroup:(WBTabGroup *)arg1;

@end
