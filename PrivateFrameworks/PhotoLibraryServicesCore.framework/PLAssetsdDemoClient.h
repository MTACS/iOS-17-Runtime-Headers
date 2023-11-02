
@interface PLAssetsdDemoClient : PLAssetsdBaseClient

- (bool)cleanupForStoreDemoMode:(id*)arg1;
- (void)cleanupForStoreDemoModeWithCompletion:(id /* block */)arg1;
- (bool)hasCompletedMomentAnalysis:(bool*)arg1 error:(id*)arg2;
- (bool)hasCompletedRestorePostProcessing:(bool*)arg1 error:(id*)arg2;

@end
