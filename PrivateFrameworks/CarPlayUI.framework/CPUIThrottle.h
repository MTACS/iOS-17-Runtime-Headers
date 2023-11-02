
@interface CPUIThrottle : NSObject {
    unsigned long long  _attempts;
    double  _base;
    double  _factor;
    double  _max;
    NSDate * _throttleDate;
    NSDate * _unthrottleDate;
}

@property (nonatomic, readonly) unsigned long long attempts;
@property (nonatomic, readonly) double base;
@property (nonatomic, readonly) double factor;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) NSDate *throttleDate;
@property (getter=isThrottled, nonatomic, readonly) bool throttled;
@property (nonatomic, readonly) NSDate *unthrottleDate;

- (void).cxx_destruct;
- (unsigned long long)attempts;
- (double)base;
- (double)factor;
- (bool)incrementAttempts;
- (id)initWithBase:(double)arg1;
- (id)initWithBase:(double)arg1 factor:(double)arg2 max:(double)arg3;
- (bool)isThrottled;
- (double)max;
- (id)throttleDate;
- (void)unthrottle;
- (id)unthrottleDate;

@end
