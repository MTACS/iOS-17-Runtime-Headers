
@protocol HMDMediaDestinationsMessageHandlerDelegate <HMDMediaDestinationMessageHandlerDelegate>

@required

- (void)mediaDestinationsMessageHandler:(HMDMediaDestinationsMessageHandler *)arg1 didReceiveDestinationUpdatedNotification:(NSNotification *)arg2 destination:(HMMediaDestination *)arg3;

@end
