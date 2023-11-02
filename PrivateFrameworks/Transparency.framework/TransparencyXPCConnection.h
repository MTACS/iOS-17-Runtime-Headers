
@interface TransparencyXPCConnection : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _interface;
    NSString * _machName;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCInterface *interface;
@property (retain) NSString *machName;

+ (id)cachedConnection:(id)arg1 interface:(Class)arg2;
+ (id)idsInstance;
+ (void)invokeAccountsSupportWithBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
+ (void)invokeXPCWithBlock:(id /* block */)arg1 synchronous:(bool)arg2 errorHandler:(id /* block */)arg3;
+ (id)mainInstance;
+ (void)setupTestConnection:(id)arg1 forMachName:(id)arg2;
+ (id)transparencyAccountsInstance;
+ (id)transparencySupportInstance;

- (void).cxx_destruct;
- (id)connection;
- (id)createConnection;
- (void)dealloc;
- (id)initWithMachName:(id)arg1 interface:(id)arg2;
- (id)interface;
- (id)machName;
- (void)setConnection:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setMachName:(id)arg1;
- (void)setTestEndpoint:(id)arg1;

@end
