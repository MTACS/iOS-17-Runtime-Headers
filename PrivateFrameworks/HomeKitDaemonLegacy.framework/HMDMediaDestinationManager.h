
@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate, HMFLogging, HMFStagedValueDelegate> {
    HMDMediaDestinationBackingStoreHandler * _backingStoreHandler;
    <HMDMediaDestinationManagerDataSource> * _dataSource;
    <HMDMediaDestinationManagerDelegate> * _delegate;
    NSUUID * _identifier;
    NSObject<OS_os_log> * _logger;
    HMDMediaDestinationMessageHandler * _messageHandler;
    HMDMediaDestinationManagerMetricsDispatcher * _metricsDispatcher;
    HMFStagedValue * _stagedAudioGroupIdentifier;
    bool  _targetDevice;
}

@property (readonly) HMDMediaDestinationBackingStoreHandler *backingStoreHandler;
@property (readonly) HMMediaDestination *committedDestination;
@property <HMDMediaDestinationManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaDestinationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMMediaDestination *destination;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler;
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher;
@property (readonly) HMFStagedValue *stagedAudioGroupIdentifier;
@property (readonly) Class superclass;
@property (getter=isTargetDevice, readonly) bool targetDevice;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)backingStoreHandler;
- (id)committedDestination;
- (void)configureWithHome:(id)arg1 currentAccessory:(bool)arg2;
- (id)dataSource;
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;
- (id)dataSourceRootDestinationManager;
- (id)dataSourceTargetAccessory;
- (id)delegate;
- (id)destination;
- (id)identifier;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 backingStore:(id)arg4 targetDevice:(bool)arg5 dataSource:(id)arg6 delegate:(id)arg7;
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 backingStoreHandler:(id)arg3 metricsDispatcher:(id)arg4 targetDevice:(bool)arg5 dataSource:(id)arg6 delegate:(id)arg7;
- (bool)isTargetDevice;
- (id)legacyUpdateAudioGroupIdentifier:(id)arg1;
- (id)legacyUpdateSupportedOptions:(unsigned long long)arg1;
- (id)logIdentifier;
- (void)mediaDestinationBackingStoreHandler:(id)arg1 didUpdateDestination:(id)arg2;
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;
- (id)mediaGroupParticipantLocalDataStorage;
- (void)mergeDestination:(id)arg1;
- (id)messageHandler;
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;
- (id)metricsDispatcher;
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyDelegateDidUpdateStagedValues;
- (id)privateDescription;
- (void)requestToUpdateAudioGroupIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stageAudioGroupIdentifier:(id)arg1;
- (id)stagedAudioGroupIdentifier;
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;
- (void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;
- (id)updateAudioGroupIdentifier:(id)arg1;
- (id)updateSupportedOptions:(unsigned long long)arg1;

@end
