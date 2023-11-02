
@interface HDHealthRecordsLegacyIngestionServiceClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_objectReturnOnClientQueue:(id /* block */)arg1;
- (void)_performWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (void)foo;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)performDownloadRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)pingWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;

@end
