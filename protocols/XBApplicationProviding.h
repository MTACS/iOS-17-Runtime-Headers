
@protocol XBApplicationProviding <NSObject>

@required

- (NSArray *)allInstalledApplications;
- (NSArray *)allSplashBoardApplications;
- (NSArray *)recentlyUsedBundleIDs;
- (NSArray *)splashBoardSystemApplications;

@end
