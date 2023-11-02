
@interface ATStoreMusicDownloadProcessAssetsOperation : ATStoreDownloadProcessAssetsOperation {
    ICSongDownloadDoneRequest * _downloadDoneRequest;
}

- (void).cxx_destruct;
- (void)_removeDRMFromDownloadedAssetWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1 operationResult:(id)arg2;

@end
