
@interface RMStoreXPCConnection : NSObject {
    NSXPCConnection * _connection;
}

@property (readonly) NSXPCConnection *connection;

+ (id)storeXPCConnection:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;

@end
