
@interface STUIStatusBarDataAggregatorUpdateDelayToken : NSObject <BSInvalidatable, STUIStatusBarDataAggregatorUpdateDelayToken> {
    NSSet * _delayedKeys;
    bool  _invalidated;
    NSTimer * _timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *delayedKeys;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimer *timeoutTimer;

- (void).cxx_destruct;
- (id)delayedKeys;
- (id)initWithEntryKeys:(id)arg1 timeout:(double)arg2 timeoutBlock:(id /* block */)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (id)timeoutTimer;

@end
