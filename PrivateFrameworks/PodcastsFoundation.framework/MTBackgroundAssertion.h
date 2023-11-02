
@interface MTBackgroundAssertion : NSObject {
    BKSProcessAssertion * _assertion;
    id /* block */  _invalidationHandler;
    NSTimer * _invalidationTimer;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_cancelInvalidationTimer;
- (void)_createScheduledTimerWithInterval:(double)arg1;
- (void)_invalidate;
- (void)_invalidationTimerFired;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3;
- (void)invalidate;
- (void)invalidateAfterDelay:(double)arg1;
- (id /* block */)invalidationHandler;
- (bool)isValid;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
