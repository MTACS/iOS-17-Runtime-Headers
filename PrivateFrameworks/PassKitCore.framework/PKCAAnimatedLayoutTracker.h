
@interface PKCAAnimatedLayoutTracker : NSObject {
    NSMutableArray * _completions;
    PKCAAnimatedLayoutTracker * _effectiveTracker;
    unsigned long long  _finished;
    unsigned long long  _interrupted;
    unsigned long long  _started;
    unsigned long long  _suspended;
}

- (void).cxx_destruct;
- (void)addAbsoluteCompletion:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id /* block */)beginTrackingAbsoluteAnimation;
- (id /* block */)beginTrackingAnimation;
- (void)dealloc;
- (id)init;
- (void)performAbsoluteTransactionWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performIsolatedAbsoluteTransactionWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performIsolatedTransactionWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performTransactionWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)trackAnimation:(id)arg1;

@end
