
@interface STAskForTimeClient : NSObject <STAskForTimeInterface> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_asynchronousProxyWithHandler:(id /* block */)arg1;
- (void)_synchronousProxyWithHandler:(id /* block */)arg1;
- (void)approveExceptionForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)sendAskForTimeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
