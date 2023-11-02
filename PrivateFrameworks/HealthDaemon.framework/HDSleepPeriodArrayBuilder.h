
@interface HDSleepPeriodArrayBuilder : NSObject {
    NSDate * _maxDate;
    NSDate * _minDate;
    NSMutableArray * _periods;
    NSMutableArray * _segments;
}

- (void).cxx_destruct;
- (void)addOrderedSegment:(id)arg1;
- (id)finish;
- (id)init;

@end
