
@protocol HMDMediaGroupsAggregateConsumerDataProvider <NSObject>

@required

- (NSArray *)allMediaSystemData;
- (HMMediaDestinationControllerData *)destinationControllerDataWithParentIdentifier:(NSUUID *)arg1;
- (HMMediaDestination *)destinationWithIdentifier:(NSUUID *)arg1;
- (HMMediaDestination *)destinationWithParentIdentifier:(NSUUID *)arg1;
- (HMMediaGroup *)groupWithIdentifier:(NSUUID *)arg1;
- (HMMediaSystemData *)mediaSystemDataWithIdentifier:(NSUUID *)arg1;

@end
