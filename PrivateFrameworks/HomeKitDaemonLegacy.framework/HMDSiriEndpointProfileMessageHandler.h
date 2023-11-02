
@interface HMDSiriEndpointProfileMessageHandler : NSObject <HMFLogging> {
    <HMDSiriEndpointProfileMessageHandlerDataSource> * _dataSource;
    NSUUID * _homeUUID;
}

@property <HMDSiriEndpointProfileMessageHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourceHubAccessories;
- (id)dataSourceSiriEndpointOnboardingManager;
- (id)deleteHistoryForAccessoryUUID:(id)arg1 onHubAccessories:(id)arg2;
- (id)deleteHistoryForAccessoryUUID:(id)arg1 onHubAccessory:(id)arg2;
- (void)handleSiriEndpointApplyOnboardingSelectionsRequestMessage:(id)arg1;
- (void)handleSiriEndpointDeleteSiriHistoryRequestMessage:(id)arg1;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1;
- (id)logIdentifier;
- (void)setDataSource:(id)arg1;

@end
