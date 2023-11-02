
@interface PPInternalRequestHandler : NSObject <PPInternalServerProtocol>

- (void)abGroupInfoWithCompletion:(id /* block */)arg1;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(id /* block */)arg1;
- (void)assetVersionsWithCompletion:(id /* block */)arg1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(id /* block */)arg1;
- (void)downloadAssetMetadataWithCompletion:(id /* block */)arg1;
- (void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(id /* block */)arg2;
- (void)setTrialUseDefaultFiles:(bool)arg1 completion:(id /* block */)arg2;
- (void)sysdiagnoseInformationWithCompletion:(id /* block */)arg1;
- (void)trialOverridePath:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 completion:(id /* block */)arg4;

@end
