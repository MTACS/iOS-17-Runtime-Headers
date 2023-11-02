
@interface WBSHistoryActivityThrottler : NSObject {
    unsigned long long  _activityLimitPerSecond;
    NSMutableArray * _activityTimes;
}

@property (nonatomic) unsigned long long activityLimitPerSecond;

- (void).cxx_destruct;
- (unsigned long long)activityLimitPerSecond;
- (id)initWithLimitPerSecond:(unsigned long long)arg1;
- (void)setActivityLimitPerSecond:(unsigned long long)arg1;
- (bool)shouldRecordHistoryVisitAtTime:(double)arg1;

@end
