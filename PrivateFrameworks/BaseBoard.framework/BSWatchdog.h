
@interface BSWatchdog : NSObject {
    bool  _completed;
    id /* block */  _completion;
    <BSWatchdogDelegate> * _delegate;
    bool  _hasFired;
    bool  _invalidated;
    <BSWatchdogProviding> * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _startDate;
    double  _timeout;
    BSAbsoluteMachTimer * _timer;
}

@property (nonatomic, retain) <BSWatchdogDelegate> *delegate;
@property (getter=hasFired, nonatomic, readonly) bool fired;
@property (nonatomic, readonly) <BSWatchdogProviding> *provider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (void)_watchdogInvalidated;
- (void)_watchdogTimerFired;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)hasFired;
- (id)initWithProvider:(id)arg1 queue:(id)arg2;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)invalidate;
- (id)provider;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)startDate;
- (double)timeout;

@end
