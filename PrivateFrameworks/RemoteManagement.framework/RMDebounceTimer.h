
@interface RMDebounceTimer : NSObject {
    <RMDebounceTimerDelegate> * _delegate;
    NSString * _identifier;
    NSString * _lastTimerID;
    NSObject * _lock;
    double  _maximumInterval;
    RMTimedDispatch * _maximumTimer;
    double  _minimumInterval;
    RMTimedDispatch * _minimumTimer;
}

@property <RMDebounceTimerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (copy) NSString *lastTimerID;
@property double maximumInterval;
@property (retain) RMTimedDispatch *maximumTimer;
@property double minimumInterval;
@property (retain) RMTimedDispatch *minimumTimer;

+ (id)debounceTimerWithMinimumInterval:(double)arg1 maximumInterval:(double)arg2 delegate:(id)arg3 identifier:(id)arg4;

- (void).cxx_destruct;
- (void)_timerDidFire;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)initWithMinimumInterval:(double)arg1 maximumInterval:(double)arg2 delegate:(id)arg3 identifier:(id)arg4;
- (id)lastTimerID;
- (double)maximumInterval;
- (id)maximumTimer;
- (double)minimumInterval;
- (id)minimumTimer;
- (void)setDelegate:(id)arg1;
- (void)setLastTimerID:(id)arg1;
- (void)setMaximumInterval:(double)arg1;
- (void)setMaximumTimer:(id)arg1;
- (void)setMinimumInterval:(double)arg1;
- (void)setMinimumTimer:(id)arg1;
- (void)trigger;

@end
