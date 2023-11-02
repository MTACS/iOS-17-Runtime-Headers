
@interface HMMDailyPartitionProvider : NSObject <HMMCounterDatePartitionProvider> {
    HMMDateProvider * _dateProvider;
}

@property (nonatomic, readonly, copy) NSDate *currentDatePartition;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)currentDatePartition;
- (id)datePartitionWithOffsetFromNow:(long long)arg1;
- (id)dateProvider;
- (id)initWithDateProvider:(id)arg1;

@end
