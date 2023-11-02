
@interface HDAuthorizationServer : NSObject {
    NSMutableArray * _authorizationRequestIdentifiers;
    HDHealthStoreClient * _client;
    _Atomic bool  _invalidated;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _sourceBundleIdentifier;
    NSUUID * _transactionSessionIdentifier;
}

@property (readonly, copy) NSString *sourceBundleIdentifier;

- (void).cxx_destruct;
- (void)authorizationStatusForType:(id)arg1 completion:(id /* block */)arg2;
- (id)authorizationStatusForType:(id)arg1 error:(id*)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)createRecalibrateEstimatesRequestRecordForSampleType:(id)arg1 effectiveDate:(id)arg2 handler:(id /* block */)arg3;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(id /* block */)arg3 requestCompletionHandler:(id /* block */)arg4;
- (void)enqueueObjectAuthorizationRequestWithContext:(id)arg1 promptIfNeeded:(bool)arg2 authorizationNeededHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* block */)arg2 requestCompletionHandler:(id /* block */)arg3;
- (void)handleAuthorizationRequestsWithPromptHandler:(id /* block */)arg1 requestCompletionHandler:(id /* block */)arg2;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2;
- (id)readAuthorizationWithTypes:(id)arg1 error:(id*)arg2;
- (id)sourceBundleIdentifier;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(id /* block */)arg1;

@end
