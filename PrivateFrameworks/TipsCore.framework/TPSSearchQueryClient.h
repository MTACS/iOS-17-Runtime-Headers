
@interface TPSSearchQueryClient : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    TPSServiceConnection * _serviceProxy;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) TPSServiceConnection *serviceProxy;

- (void).cxx_destruct;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_performWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)cancelQueryWithIdentifier:(id)arg1;
- (id)clientQueue;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)performQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serviceProxy;
- (void)setClientQueue:(id)arg1;
- (void)setServiceProxy:(id)arg1;

@end
