
@interface ATStoreMusicDownloadPrepareOperation : ATStoreDownloadPrepareOperation {
    ICMediaRedownloadRequest * _redownloadRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1 operationResult:(id)arg2;

@end
