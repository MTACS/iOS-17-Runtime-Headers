
@interface HMDMediaDestinationControllerMessageHandler : HMDAppleMediaAccessoryMessageHandler <HMFLogging> {
    <HMDMediaDestinationControllerMessageHandlerDataSource> * _dataSource;
    <HMDMediaDestinationControllerMessageHandlerDelegate> * _delegate;
    HMDMediaDestinationControllerMetricsEventDispatcher * _metricsEventDispatcher;
}

@property <HMDMediaDestinationControllerMessageHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaDestinationControllerMessageHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (id)destinationIdentifierInMessage:(id)arg1 error:(id*)arg2;
- (void)handleHomeAccessoryRemovedNotification:(id)arg1;
- (void)handleMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg1;
- (void)handleMediaDestinationControllerUpdatedDestinationNotification:(id)arg1;
- (void)handleMediaDestinationUpdatedNotification:(id)arg1;
- (void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)arg1;
- (void)handleMediaSystemAddedNotification:(id)arg1;
- (void)handleMediaSystemRemovedNotification:(id)arg1;
- (void)handleNotificationAccessoryChangedRoom:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 metricsEventDispatcher:(id)arg4 targetDevice:(bool)arg5 dataSource:(id)arg6 delegate:(id)arg7;
- (id)logIdentifier;
- (id)metricsEventDispatcher;
- (void)notifyUpdatedDestinationWithIdentifier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsEventDispatcher:(id)arg1;
- (unsigned long long)upateOptionsInMessage:(id)arg1 error:(id*)arg2;

@end
