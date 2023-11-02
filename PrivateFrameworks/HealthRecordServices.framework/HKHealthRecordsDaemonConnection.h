
@interface HKHealthRecordsDaemonConnection : NSObject <HKProxyProviderSource, _HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSString *daemonLaunchDarwinNotificationName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)connectionInvalidated;
- (id)daemonLaunchDarwinNotificationName;
- (void)dealloc;
- (id)endpointForServiceIdentifier:(id)arg1 error:(id*)arg2;
- (id)exportedInterface;
- (void)fetchEndpointForServiceIdentifier:(id)arg1 endpointHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)remoteInterface;

@end
