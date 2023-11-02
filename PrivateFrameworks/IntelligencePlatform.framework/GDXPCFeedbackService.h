
@interface GDXPCFeedbackService : NSObject <GDFeedbackServiceProtocol> {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (bool)logWithFeedbackData:(id)arg1 type:(id)arg2 variant:(id)arg3 eventId:(long long)arg4 withTimestamp:(id)arg5 shouldProcessImmediately:(bool)arg6 error:(id*)arg7;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
