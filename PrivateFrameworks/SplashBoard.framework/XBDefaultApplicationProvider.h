
@interface XBDefaultApplicationProvider : NSObject <XBApplicationProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_allApplicationsFilteredBySystem:(bool)arg1 bySplashBoard:(bool)arg2;
- (id)allInstalledApplications;
- (id)allSplashBoardApplications;
- (id)recentlyUsedBundleIDs;
- (id)splashBoardSystemApplications;

@end
