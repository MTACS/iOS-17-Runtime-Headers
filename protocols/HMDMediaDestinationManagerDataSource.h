
@protocol HMDMediaDestinationManagerDataSource

@required

- (HMDMediaDestinationController *)mediaDestinationManager:(HMDMediaDestinationManager *)arg1 destinationControllerWithIdentifier:(NSUUID *)arg2;
- (HMDMediaGroupParticipantLocalDataStorage *)mediaGroupParticipantLocalDataStorageForMediaDestinationManager:(HMDMediaDestinationManager *)arg1;
- (<HMDMediaDestinationManager> *)rootDestinationManagerForMediaDestinationManager:(HMDMediaDestinationManager *)arg1;
- (HMDAppleMediaAccessory *)targetAccessoryForMediaDestinationManager:(HMDMediaDestinationManager *)arg1;

@end
