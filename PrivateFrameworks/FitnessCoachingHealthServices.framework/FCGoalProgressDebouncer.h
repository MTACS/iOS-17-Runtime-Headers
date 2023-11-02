
@interface FCGoalProgressDebouncer : NSObject {
    <FCGoalProgressDebouncerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic) <FCGoalProgressDebouncerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleTimerFired;
- (void)debounce;
- (id)delegate;
- (bool)inProgress;
- (id)initWithServiceQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
