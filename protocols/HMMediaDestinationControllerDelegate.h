
@protocol HMMediaDestinationControllerDelegate <NSObject>

@optional

- (void)mediaDestinationController:(HMMediaDestinationController *)arg1 didUpdateDestination:(id <HMMediaDestination>)arg2;
- (void)mediaDestinationControllerDidUpdateAvailableDestinations:(HMMediaDestinationController *)arg1;

@end
