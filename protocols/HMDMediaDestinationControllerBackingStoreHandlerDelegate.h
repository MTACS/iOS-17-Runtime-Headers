
@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate

@required

- (void)mediaDestinationControllerBackingStoreHandler:(HMDMediaDestinationControllerBackingStoreHandler *)arg1 didUpdateAvailableDestinationIdentifiers:(NSArray *)arg2;
- (void)mediaDestinationControllerBackingStoreHandler:(HMDMediaDestinationControllerBackingStoreHandler *)arg1 didUpdateDestinationIdentifier:(NSUUID *)arg2;
- (void)mediaDestinationControllerBackingStoreHandlerDidProcessUnexpectedModelAdd:(HMDMediaDestinationControllerBackingStoreHandler *)arg1;

@end
