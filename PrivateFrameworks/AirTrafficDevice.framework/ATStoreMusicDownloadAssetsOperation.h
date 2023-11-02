
@interface ATStoreMusicDownloadAssetsOperation : ATStoreDownloadAssetsOperation {
    ICMediaAssetDownloadRequest * _assetDownloadRequest;
}

- (void).cxx_destruct;
- (void)_getStorageSpaceAvailableForMediaResponseItem:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_maximumSampleRateForResolutionPreference:(long long)arg1;
- (unsigned long long)_minimumBitrateForResolutionPreference:(long long)arg1;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1 operationResult:(id)arg2;

@end
