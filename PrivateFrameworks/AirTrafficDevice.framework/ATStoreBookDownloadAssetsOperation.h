
@interface ATStoreBookDownloadAssetsOperation : ATStoreDownloadAssetsOperation <BLDownloadQueueNonUIObserving> {
    NSString * _bookDownloadID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
- (void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)execute;
- (void)finishWithError:(id)arg1 operationResult:(id)arg2;

@end
