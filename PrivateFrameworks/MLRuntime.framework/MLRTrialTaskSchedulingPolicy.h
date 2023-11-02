
@interface MLRTrialTaskSchedulingPolicy : NSObject {
    NSDate * _endAtDate;
    unsigned long long  _maxPerformCount;
    double  _minInterval;
    NSDate * _startAfterDate;
    NSString * _taskID;
}

@property (nonatomic, readonly) NSDate *endAtDate;
@property (nonatomic, readonly) unsigned long long maxPerformCount;
@property (nonatomic, readonly) double minInterval;
@property (nonatomic, readonly) NSDate *startAfterDate;
@property (nonatomic, readonly) NSString *taskID;

- (void).cxx_destruct;
- (id)description;
- (id)endAtDate;
- (id)initWithMaxEvaluations:(unsigned long long)arg1 periodicIntervalSeconds:(double)arg2 startAfterDate:(id)arg3 endAtDate:(id)arg4 taskID:(id)arg5;
- (id)initWithTRIMLRuntimeEvaluation:(id)arg1;
- (unsigned long long)maxPerformCount;
- (double)minInterval;
- (id)startAfterDate;
- (id)taskID;

@end
