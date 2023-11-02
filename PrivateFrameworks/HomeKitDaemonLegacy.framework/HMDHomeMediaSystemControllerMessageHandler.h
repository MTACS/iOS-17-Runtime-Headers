
@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFLogging, HMFMessageReceiver> {
    <HMDHomeMediaSystemControllerMessageHandlerDelegate> * _delegate;
    <HMDFeaturesDataSource> * _featuresDataSource;
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDHomeMediaSystemControllerMessageHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) <HMDFeaturesDataSource> *featuresDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_legacyHandleAddMediaSystem:(id)arg1;
- (void)_legacyHandleAddMediaSystemWithPreProcessedMessage:(id)arg1;
- (void)_legacyHandleRemoveMediaSystem:(id)arg1;
- (void)_legacyHandleUpdateMediaSystem:(id)arg1;
- (void)_registerForMessages;
- (id)delegate;
- (id)featuresDataSource;
- (id)home;
- (id)homeUUID;
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4;
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4 featuresDataSource:(id)arg5;
- (void)locallyAddMediaSystemUsingRequestMessage:(id)arg1;
- (void)locallyRemoveMediaSystemUsingRemoveRequestMessage:(id)arg1;
- (void)locallyUpdateMediaSystemUsingRequestMessage:(id)arg1;
- (id)logIdentifier;
- (id)mediaGroupsAggregator;
- (id)mediaSystemNameFromRoomWithAccessoryUUIDs:(id)arg1;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageRouter;
- (id)messageTargetUUID;
- (id)preProcessMediaSystemMessage:(id)arg1;
- (id)preferredAssociatedGroupIdentifierForMediaSystemBuilderPayload:(id)arg1;
- (id)queue;
- (void)queueOnboardingForUnconfiguredParticipantWithAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (void)routeAddMediaSystem:(id)arg1;
- (void)routeRemoveMediaSystem:(id)arg1;
- (void)routeUpdateMediaSystem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)stagingMediaSystemDataFromData:(id)arg1 accessoryUUIDs:(id)arg2;
- (id)unconfiguredParticipantOnboardingManager;
- (id /* block */)updateMediaSystemCompletionBlockWithMessage:(id)arg1 data:(id)arg2 accessoryUUIDs:(id)arg3;
- (id)updateParticipantWithAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (void)updateParticipantWithDestinationIdentifier:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (void)updateParticipantWithDestinationIdentifiers:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (id)updateParticipantWithDestinationManager:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (id)validateConfiguredName:(id)arg1;
- (id)validatePayload:(id)arg1;

@end
