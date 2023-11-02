
@protocol HMDMediaDestinationControllerLocalDataStorageHandler

@required

- (void)updateDestinationControllerAvailableDestinationIdentifiers:(NSArray *)arg1;
- (void)updateDestinationControllerData:(HMMediaDestinationControllerData *)arg1;
- (void)updateDestinationControllerDestinationIdentifier:(NSUUID *)arg1;

@end
