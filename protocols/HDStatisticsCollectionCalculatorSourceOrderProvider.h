
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider <NSObject>

@required

- (NSArray *)orderedSourceIDsWithUnorderedIDs:(NSArray *)arg1;
- (HKSource *)sourceForSourceID:(long long)arg1;

@end
