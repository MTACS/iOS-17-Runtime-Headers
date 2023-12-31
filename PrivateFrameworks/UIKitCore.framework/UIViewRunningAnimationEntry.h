
@interface UIViewRunningAnimationEntry : NSObject {
    <UIIntervalAnimating> * _animation;
    UIViewAnimationState * _animationState;
    id /* block */  _completionCallback;
    <UIViewAnimationComposing> * _composer;
    bool  _invalidated;
    bool  _running;
    NSObject<OS_dispatch_queue> * _transactionQueue;
}

@property (nonatomic) UIViewAnimationState *animationState;
@property (nonatomic, retain) <UIViewAnimationComposing> *composer;
@property (nonatomic) bool invalidated;
@property (nonatomic) bool running;

- (void).cxx_destruct;
- (id)animationState;
- (id)composer;
- (id)initWithAnimation:(id)arg1 completion:(id /* block */)arg2 composer:(id)arg3;
- (bool)invalidated;
- (void)performCompletionCallbackFinished:(bool)arg1;
- (void)performWithLock:(id /* block */)arg1;
- (void)performWithoutLock:(id /* block */)arg1;
- (bool)running;
- (void)setAnimationState:(id)arg1;
- (void)setCompletionCallback:(id /* block */)arg1;
- (void)setComposer:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setRunning:(bool)arg1;

@end
