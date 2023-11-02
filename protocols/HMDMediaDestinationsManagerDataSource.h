
@protocol HMDMediaDestinationsManagerDataSource

@required

- (NSArray *)associatedDestinationManagersForMediaDestinationsManager:(HMDMediaDestinationsManager *)arg1;
- (HMDMediaDestinationController *)mediaDestinationsManager:(HMDMediaDestinationsManager *)arg1 destinationControllerWithIdentifier:(NSUUID *)arg2;
- (HMDMediaGroupsAggregatorMessenger *)mediaGroupsAggregatorMessengerForMediaDestinationsManager:(HMDMediaDestinationsManager *)arg1;
- (HMDAppleMediaAccessory *)targetAccessoryForMediaDestinationManager:(HMDMediaDestinationsManager *)arg1;

@end
