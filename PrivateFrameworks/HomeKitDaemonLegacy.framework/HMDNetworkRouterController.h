
@interface HMDNetworkRouterController : NSObject <HMFLogging> {
    HMDHAPAccessory * _accessory;
    HMDService * _routerService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDHAPAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDService *routerService;
@property (readonly) Class superclass;
@property (readonly) NSString *wiFiSSID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_writeClientConfigurationControlRequest:(id)arg1 operationName:(id)arg2 completion:(id /* block */)arg3;
- (void)_writeTLVWithValueInResponse:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(id /* block */)arg4;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completion:(id /* block */)arg3;
- (void)_writeValueIfDifferent:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(id /* block */)arg4;
- (id)accessory;
- (void)addClientConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)getAccessViolationList:(id /* block */)arg1;
- (void)getClientStatusWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getClientStatusWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)readClientConfigurationWithClientIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeClientConfigurationWithClientIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAccessViolationForClientIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)routerService;
- (void)setAccessory:(id)arg1;
- (void)setRouterService:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)updateClientConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)wiFiSSID;
- (id)workQueue;
- (void)writeManagedNetworkEnable:(bool)arg1 completion:(id /* block */)arg2;

@end
