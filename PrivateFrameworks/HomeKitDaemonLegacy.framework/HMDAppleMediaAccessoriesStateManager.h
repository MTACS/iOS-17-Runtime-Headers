
@interface HMDAppleMediaAccessoriesStateManager : HMFObject <HMDAppleMediaAccessoriesStateMessengerDelegate, HMFLogging> {
    <HMDAppleMediaAccessoriesStateManagerDataSource> * _dataSource;
    NSUUID * _identifier;
    HMDAppleMediaAccessoriesStateMessenger * _messenger;
    HMDAppleMediaAccessoriesStateManagerMetricsDispatcher * _metricsDispatcher;
}

@property <HMDAppleMediaAccessoriesStateManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDAppleMediaAccessoriesStateMessenger *messenger;
@property (readonly) HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *metricsDispatcher;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_correctStateForMatchingIdentifier:(id)arg1 appleMediaAccessories:(id)arg2 sendList:(id)arg3;
- (void)appleMediaAccessoriesStateMessenger:(id)arg1 didReceiveModelIdentifierRequestMessage:(id)arg2 withAccessoryIdentifier:(id)arg3;
- (void)correctStateForMatchingAppleMediaAccessories:(id)arg1 modelIdentifier:(id)arg2;
- (void)correctStateForMatchingIdentifier:(id)arg1 appleMediaAccessories:(id)arg2;
- (id)dataSource;
- (id)dataSourceAppleMediaAccessories;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 messenger:(id)arg2 metricsDispatcher:(id)arg3;
- (id)logIdentifier;
- (id)messenger;
- (id)metricsDispatcher;
- (id)remoteAppleMediaAccessories;
- (id)remoteAppleMediaAccessoriesByIdentifier;
- (void)run;
- (void)runMultipleIdentifierCorrectionSequence;
- (id)sendModelIdentifierRequestMessageForAppleMediaAccessory:(id)arg1 accessoryIdentifier:(id)arg2;
- (void)setDataSource:(id)arg1;

@end
