
@interface VUIMediaEntitiesFetchController : VUIMediaLibraryFetchController {
    <VUIMediaEntitiesFetchControllerDelegate> * _delegate;
    NSArray * _requests;
    VUIMediaEntityFetchResponse * _response;
    NSArray * _responses;
}

@property (nonatomic) <VUIMediaEntitiesFetchControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, readonly) VUIMediaEntityFetchResponse *response;
@property (nonatomic, copy) NSArray *responses;

- (void).cxx_destruct;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg1;
- (void)_handleManualFetchControllerOperationDidComplete:(id)arg1;
- (void)_notifyDelegateWithBlock:(id /* block */)arg1;
- (void)_notifyFetchRequests:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_notifyFetchRequests:(id)arg1 didFailWithError:(id)arg2;
- (bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(bool)arg2;
- (void)cancelFetch;
- (id)delegate;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2;
- (id)requests;
- (id)response;
- (id)responses;
- (void)setDelegate:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResponses:(id)arg1;

@end
