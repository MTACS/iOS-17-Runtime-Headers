
@interface HMDPrimaryResidentMessageRouter : HMFObject <HMDMessageRouter, HMFLogging> {
    <HMDPrimaryResidentMessageRouterDataSource> * _dataSource;
    NSUUID * _homeUUID;
    HMFMessageDispatcher * _messageDispatcher;
    HMDPrimaryResidentMessageRouterMetricsDispatcher * _metricsDispatcher;
}

@property <HMDPrimaryResidentMessageRouterDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDPrimaryResidentMessageRouterMetricsDispatcher *metricsDispatcher;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourcePrimaryResidentDeviceWithMessage:(id)arg1;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1 messageDispatcher:(id)arg2 metricsDispatcher:(id)arg3;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)metricsDispatcher;
- (void)relayMessage:(id)arg1 device:(id)arg2;
- (void)routeMessage:(id)arg1 allowRemoteRelayFromPrimary:(bool)arg2 localHandler:(id /* block */)arg3;
- (void)routeMessage:(id)arg1 localHandler:(id /* block */)arg2;
- (void)setDataSource:(id)arg1;

@end
