
@interface VSUserAccountServiceConnection : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)serviceWithErrorHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;

@end
