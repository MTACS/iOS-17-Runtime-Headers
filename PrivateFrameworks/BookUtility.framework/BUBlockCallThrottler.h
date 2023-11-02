
@interface BUBlockCallThrottler : NSObject {
    NSDate * _lastBlockCallDate;
    double  _minimumTimeBetweenCalls;
    bool  _running;
}

@property (nonatomic, retain) NSDate *lastBlockCallDate;
@property (nonatomic) double minimumTimeBetweenCalls;
@property (nonatomic) bool running;

- (void).cxx_destruct;
- (bool)_runBlock:(id /* block */)arg1 throttle:(bool)arg2;
- (id)init;
- (id)lastBlockCallDate;
- (double)minimumTimeBetweenCalls;
- (void)runBlock:(id /* block */)arg1;
- (bool)runBlockThrottled:(id /* block */)arg1;
- (bool)running;
- (void)setLastBlockCallDate:(id)arg1;
- (void)setMinimumTimeBetweenCalls:(double)arg1;
- (void)setRunning:(bool)arg1;

@end
