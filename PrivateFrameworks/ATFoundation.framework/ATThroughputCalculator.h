
@interface ATThroughputCalculator : NSObject {
    ATMovingAverage * _average;
    double  _currentValue;
    double  _lastUpdate;
    double  _startTime;
    bool  _suspended;
}

@property (nonatomic, readonly) double throughput;

- (void).cxx_destruct;
- (id)init;
- (void)resume;
- (void)suspend;
- (double)throughput;
- (bool)update:(double)arg1;

@end
