
@protocol WBTabProvider_Internal <NSObject, WBTabProvider>

@required

- (NSArray *)allMutableNamedTabGroupsUnsorted;
- (NSArray *)mutableNamedTabGroupsInDefaultProfile;
- (WBMutableTabGroup *)mutableTabGroupWithUUID:(NSString *)arg1;
- (WBMutableTab *)mutableTabWithUUID:(NSString *)arg1;
- (NSArray *)mutableTabsForTabGroup:(WBTabGroup *)arg1;

@end
