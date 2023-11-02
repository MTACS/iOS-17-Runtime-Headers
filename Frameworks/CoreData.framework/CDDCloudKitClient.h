
@interface CDDCloudKitClient : NSObject {
    NSXPCConnection * _connection;
    bool  _interrupted;
    bool  _invalidated;
}

- (bool)_valid;
- (void)dealloc;
- (void)handleMessage:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithMachServiceName:(id)arg1;

@end
