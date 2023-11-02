
@interface XBApplicationController : NSObject {
    <XBApplicationProviding> * _applicationProvider;
    <XBApplicationLaunchRequestProviding> * _launchRequestProvider;
    FBSDisplayConfiguration * _mainDisplayConfiguration;
    XBCacheDeleteRequestHandler * _snapshotCacheDeleteRequestHandler;
    long long  _statusBarOrientation;
}

@property (nonatomic, readonly) <XBApplicationProviding> *applicationProvider;

- (void).cxx_destruct;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2 completionWithCaptureInfo:(id /* block */)arg3;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2 createCaptureInfo:(bool)arg3 completionWithCaptureInfo:(id /* block */)arg4;
- (void)_configureCacheDelete;
- (void)_deleteLegacyCachesSnapshotPathsIfNeeded;
- (id)_launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)_removeAllGeneratedLaunchImagesAndSnapshots;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(bool)arg3;
- (void)_updateStatusBarOrientation;
- (id)applicationProvider;
- (void)captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteAllSnapshotsIfScreenSizeChanged;
- (id)findRecentlyUsedOfApplications:(id)arg1;
- (id)initWithMainDisplayConfiguration:(id)arg1 applicationProvider:(id)arg2 launchRequestProvider:(id)arg3;
- (id)initWithMainDisplayConfiguration:(id)arg1 applicationProvider:(id)arg2 launchRequestProvider:(id)arg3 configureCacheDelete:(bool)arg4;
- (void)performPostMigrationLaunchImageGeneration;
- (void)removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(bool)arg2;

@end
