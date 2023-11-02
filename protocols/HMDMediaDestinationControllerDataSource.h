
@protocol HMDMediaDestinationControllerDataSource <HMDMediaDestinationControllerMetricsEventDispatcherDataSource>

@required

- (NSArray *)availableDestinationIdentifiersForMediaDestinationController:(HMDMediaDestinationController *)arg1;
- (<HMDMediaDestinationManager> *)mediaDestinationController:(HMDMediaDestinationController *)arg1 destinationManagerWithIdentifier:(NSUUID *)arg2;
- (HMMediaDestination *)mediaDestinationController:(HMDMediaDestinationController *)arg1 destinationWithParentIdentifier:(NSUUID *)arg2;
- (HMMediaDestination *)mediaDestinationController:(HMDMediaDestinationController *)arg1 rootDestinationWithDecendantIdentifier:(NSUUID *)arg2;
- (HMDMediaGroupParticipantLocalDataStorage *)mediaGroupLocalDataStorageForMediaDestinationController:(HMDMediaDestinationController *)arg1;
- (HMDAppleMediaAccessory *)targetAccessoryForMediaDestinationController:(HMDMediaDestinationController *)arg1;

@end
