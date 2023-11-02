
@interface VUIMediaItemEntityTypesFetchController : VUIMediaLibraryFetchController {
    <VUIMediaItemEntityTypesFetchControllerDelegate> * _delegate;
    VUIMediaItemEntityTypesFetchResponse * _response;
}

@property (nonatomic) <VUIMediaItemEntityTypesFetchControllerDelegate> *delegate;
@property (nonatomic, retain) VUIMediaItemEntityTypesFetchResponse *response;

- (void).cxx_destruct;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_notifyDelegateWithBlock:(id /* block */)arg1;
- (void)_notifyFetchDidCompleteWithResult:(id)arg1;
- (void)_notifyFetchDidFailWithError:(id)arg1;
- (bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(bool)arg2;
- (void)cancelFetch;
- (id)delegate;
- (id)initWithMediaLibrary:(id)arg1;
- (id)response;
- (void)setDelegate:(id)arg1;
- (void)setResponse:(id)arg1;

@end
