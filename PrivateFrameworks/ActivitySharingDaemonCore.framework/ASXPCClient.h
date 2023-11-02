
@interface ASXPCClient : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)launch;

@end
