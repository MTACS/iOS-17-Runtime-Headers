
@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate> {
    <HDTaskServerEndpointDelegate> * _delegate;
    HKHealthStoreConfiguration * _healthStoreConfiguration;
    NSUUID * _instanceUUID;
    HDXPCListener * _listener;
    HDProfile * _profile;
    HKTaskConfiguration * _taskConfiguration;
    <HDTaskServer> * _taskServer;
    Class  _taskServerClass;
    <HDTaskServerDelegate> * _taskServerDelegate;
    NSUUID * _taskUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDTaskServerEndpointDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKHealthStoreConfiguration *healthStoreConfiguration;
@property (nonatomic, readonly, copy) NSUUID *instanceUUID;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKTaskConfiguration *taskConfiguration;
@property (nonatomic, readonly) <HDTaskServer> *taskServer;
@property (nonatomic, readonly) Class taskServerClass;
@property (nonatomic) <HDTaskServerDelegate> *taskServerDelegate;
@property (nonatomic, readonly, copy) NSUUID *taskUUID;

- (void).cxx_destruct;
- (void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;
- (void)connectionInvalidatedForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)healthStoreConfiguration;
- (id)initWithTaskServerClass:(Class)arg1 taskConfiguration:(id)arg2 healthStoreConfiguration:(id)arg3 taskUUID:(id)arg4 instanceUUID:(id)arg5 profile:(id)arg6 connectionQueue:(id)arg7;
- (id)instanceUUID;
- (void)invalidate;
- (id)listenerEndpoint;
- (id)profile;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setTaskServerDelegate:(id)arg1;
- (id)taskConfiguration;
- (id)taskServer;
- (Class)taskServerClass;
- (id)taskServerDelegate;
- (id)taskUUID;

@end
