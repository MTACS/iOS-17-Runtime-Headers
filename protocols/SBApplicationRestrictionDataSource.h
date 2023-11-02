
@protocol SBApplicationRestrictionDataSource <NSObject>

@required

- (NSArray *)allApplications;
- (NSArray *)allBundleIdentifiers;
- (NSArray *)alwaysAvailableApplicationBundleIdentifiers;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)arg1;
- (NSSet *)bundleIdentifiersWithVisibilityOverrideHidden;

@end
