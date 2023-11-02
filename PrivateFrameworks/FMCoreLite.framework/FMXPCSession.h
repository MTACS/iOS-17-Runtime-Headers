
@interface FMXPCSession : NSObject {
    id  __proxy;
    NSXPCConnection * _connection;
    NSUUID * _identifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
    FMXPCServiceDescription * _serviceDescription;
}

@property (nonatomic, retain) id _proxy;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) id proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;

- (void).cxx_destruct;
- (id)_proxy;
- (id)connection;
- (void)dealloc;
- (void)destroyXPCConnection;
- (id)identifier;
- (id)initWithServiceDescription:(id)arg1;
- (void)invalidate;
- (id)proxy;
- (void)resume;
- (id)serialQueue;
- (id)serviceDescription;
- (void)setConnection:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)set_proxy:(id)arg1;
- (void)suspend;
- (id)syncProxyWithErrorHandler:(id /* block */)arg1;

@end
