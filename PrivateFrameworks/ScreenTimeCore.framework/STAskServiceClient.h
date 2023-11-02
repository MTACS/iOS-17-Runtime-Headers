
@interface STAskServiceClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (bool)approveExceptionForRequest:(id)arg1 error:(id*)arg2;
- (id)connection;
- (void)dealloc;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)sendAskForTimeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;

@end
