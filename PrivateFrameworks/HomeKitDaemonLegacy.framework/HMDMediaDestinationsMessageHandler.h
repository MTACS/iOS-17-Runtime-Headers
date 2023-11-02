
@interface HMDMediaDestinationsMessageHandler : HMDMediaDestinationMessageHandler {
    <HMDMediaDestinationsMessageHandlerDataSource> * _dataSource;
    <HMDMediaDestinationsMessageHandlerDelegate> * _delegate;
}

@property <HMDMediaDestinationsMessageHandlerDataSource> *dataSource;
@property <HMDMediaDestinationsMessageHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (void)handleMediaDestinationUpdatedNotification:(id)arg1;
- (void)handleUpdatedDestination:(id)arg1;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
