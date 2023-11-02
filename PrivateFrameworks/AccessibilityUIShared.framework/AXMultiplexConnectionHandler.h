
@interface AXMultiplexConnectionHandler : NSObject {
    NSObject<OS_xpc_object> * _connection;
    BSProcessHandle * _processHandle;
    BSServiceConnection * _serviceConnection;
    id /* block */  _xpc_handler;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) BSProcessHandle *processHandle;
@property (nonatomic, retain) BSServiceConnection *serviceConnection;
@property (nonatomic, copy) id /* block */ xpc_handler;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)connection;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)processHandle;
- (id)serviceConnection;
- (void)setConnection:(id)arg1;
- (void)setProcessHandle:(id)arg1;
- (void)setServiceConnection:(id)arg1;
- (void)setXpc_handler:(id /* block */)arg1;
- (id /* block */)xpc_handler;

@end
