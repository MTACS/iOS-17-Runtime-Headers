
@interface HMDMediaDestinationsManager : HMFObject <HMDMediaDestinationManager, HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationsMessageHandlerDelegate, HMFLogging> {
    <HMDMediaDestinationsManagerDataSource> * _dataSource;
    <HMDMediaDestinationsManagerDelegate> * _delegate;
    HMMediaDestination * _destination;
    HMDMediaDestinationMessageHandler * _messageHandler;
}

@property (readonly) HMMediaDestination *committedDestination;
@property <HMDMediaDestinationsManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaDestinationsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) HMMediaDestination *destination;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler;
@property (readonly) Class superclass;

+ (id)deriveAudioGroupIdentifierFromDestinations:(id)arg1;
+ (unsigned long long)deriveSupportedOptionsFromDestinations:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)committedDestination;
- (void)configureWithHome:(id)arg1;
- (id)dataSource;
- (id)dataSourceAssociatedDestinationManagers;
- (id)dataSourceAssociatedDestinations;
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;
- (id)dataSourceTargetAccessory;
- (id)defaultDestination;
- (id)delegate;
- (id)deriveAudioDestination;
- (id)destination;
- (id)identifier;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;
- (void)legacyRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)logIdentifier;
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;
- (void)mediaDestinationsMessageHandler:(id)arg1 didReceiveDestinationUpdatedNotification:(id)arg2 destination:(id)arg3;
- (id)mediaGroupsAggregatorMessenger;
- (void)mergeDestination:(id)arg1;
- (id)messageHandler;
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;
- (bool)messageHandler:(id)arg1 isReadyForIncomingMessage:(id)arg2;
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;
- (id)privateDescription;
- (void)refreshDestination;
- (void)requestToUpdateAudioGroupIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg1;
- (id)sendRequestsToUpdateSupportOptions:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)stageAudioGroupIdentifier:(id)arg1;

@end
