
@interface HDHealthServicesServer : HDStandardTaskServer <HKHealthServicesServerInterface> {
    HDIdentifierTable * _healthDeviceSessionServerIDs;
    NSMutableSet * _healthServiceClosedSessionClientIDs;
    NSMutableSet * _healthServiceClosedSessionServerIDs;
    NSMutableDictionary * _healthServiceDiscoveryClientIDs;
    HDIdentifierTable * _healthServiceDiscoveryServerIDs;
    HDHealthServiceManager * _healthServiceManager;
    NSMutableDictionary * _healthServiceSessionClientIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_addPairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)remote_beginBluetoothStatusUpdates:(id /* block */)arg1;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)remote_endHealthServiceSession:(unsigned long long)arg1;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(id /* block */)arg1;
- (void)remote_getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_getHealthPeripheralsWithFilter:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)remote_getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)remote_getSupportedPropertyNamesWithHandler:(id /* block */)arg1;
- (void)remote_performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_removePairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_removePeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_setEnabledStatus:(bool)arg1 forPeripheral:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_startHealthServiceDiscovery:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_startHealthServiceSession:(id)arg1 withCompletion:(id /* block */)arg2;

@end
