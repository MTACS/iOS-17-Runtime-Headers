
@protocol HMMCounterDatePartitionProvider <NSObject>

@required

- (NSDate *)currentDatePartition;
- (NSDate *)datePartitionWithOffsetFromNow:(long long)arg1;

@end
