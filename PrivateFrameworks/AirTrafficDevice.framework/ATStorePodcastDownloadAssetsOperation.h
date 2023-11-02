
@interface ATStorePodcastDownloadAssetsOperation : ATStoreDownloadAssetsOperation {
    AVURLAsset * _hlsAsset;
    ICAVAssetDownloadURLSession * _hlsSession;
    PFSecureDownloadRenewalManager * _renewalManager;
    ICURLRequest * _request;
    ICURLSession * _session;
}

- (void).cxx_destruct;
- (void)_deleteHLSKey;
- (id)_downloadConfigurationWithSessionIdentifier:(id)arg1 isHLS:(bool)arg2;
- (void)_getContentKeyForAssetWithCompletionHandler:(id /* block */)arg1;
- (id)_icavUrlSession;
- (void)_moveAssetToPurchasesDirectoryFromTmpPath:(id)arg1 downloadError:(id)arg2 isHLSAsset:(bool)arg3;
- (id)_urlSession;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1 operationResult:(id)arg2;
- (id)secureDownloadRenewalManager;

@end
