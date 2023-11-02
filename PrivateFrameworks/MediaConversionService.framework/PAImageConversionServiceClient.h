
@interface PAImageConversionServiceClient : NSObject {
    NSXPCConnection * _serviceConnection;
}

@property (retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)init;
- (void)requestStatusWithCompletionHandler:(id /* block */)arg1;
- (void)sendRequestWithOptions:(id)arg1 sourceURLCollection:(id)arg2 destinationURLCollection:(id)arg3 jobIdentifier:(id)arg4 attemptCount:(long long)arg5 completionHandler:(id /* block */)arg6;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;
- (void)setupServiceConnection;

@end
