
@protocol HMDMediaGroupsAggregatorDataSource <NSObject>

@required

- (NSString *)aggregateDataTopicForMediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg1;
- (NSArray *)appleMediaAccessoriesForMediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg1;
- (<HMDMediaDestinationManager> *)destinationManagerWithIdentifier:(NSUUID *)arg1 mediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg2;
- (NSString *)eventSourceForMediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg1;
- (NSString *)participantDataTopicForAccessory:(HMDAppleMediaAccessory *)arg1 mediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg2;
- (HMDRoom *)roomForAllDestinationParentIdentifiers:(NSArray *)arg1 mediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg2;
- (NSArray *)roomsForMediaGroupsAggregator:(HMDMediaGroupsAggregator *)arg1;

@end
