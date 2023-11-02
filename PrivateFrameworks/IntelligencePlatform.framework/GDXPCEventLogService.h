
@interface GDXPCEventLogService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (bool)logEndWithId:(long long)arg1 timestamp:(id)arg2 dependencies:(id)arg3 payloadType:(id)arg4 payloadVariant:(id)arg5 payload:(id)arg6 error:(id*)arg7;
- (bool)logInstantWithId:(long long)arg1 timestamp:(id)arg2 name:(id)arg3 parent:(long long)arg4 dependencies:(id)arg5 payloadType:(id)arg6 payloadVariant:(id)arg7 payload:(id)arg8 error:(id*)arg9;
- (bool)logStartWithId:(long long)arg1 timestamp:(id)arg2 name:(id)arg3 parent:(long long)arg4 error:(id*)arg5;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
