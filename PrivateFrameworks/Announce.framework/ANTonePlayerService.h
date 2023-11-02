
@interface ANTonePlayerService : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)playTone:(unsigned long long)arg1 audioSessionID:(unsigned int)arg2 endpointUUID:(id)arg3 completionHandler:(id /* block */)arg4;

@end
