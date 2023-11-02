
@interface WBSFluidProgressController : NSObject {
    <WBSFluidProgressControllerDelegate> * _delegate;
    NSHashTable * _observers;
    <WBSFluidProgressControllerWindowDelegate> * _windowDelegate;
}

@property (nonatomic) <WBSFluidProgressControllerDelegate> *delegate;
@property <WBSFluidProgressControllerWindowDelegate> *windowDelegate;

- (void).cxx_destruct;
- (void)_sendUpdateFluidProgressToObservers:(id)arg1 progressState:(id)arg2 source:(id)arg3 updateAnimationPhase:(bool)arg4;
- (void)_updateFluidProgressWithProgressStateSource:(id)arg1;
- (void)animationStepCompleted:(id)arg1;
- (void)cancelFluidProgressWithProgressStateSource:(id)arg1;
- (id)delegate;
- (void)finishFluidProgressWithProgressStateSource:(id)arg1;
- (void)frontmostTabDidChange;
- (id)init;
- (void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(bool)arg2;
- (void)registerObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressAnimationSuppressed:(bool)arg1 forProgressStateSource:(id)arg2 animated:(bool)arg3;
- (void)setWindowDelegate:(id)arg1;
- (void)startFluidProgressWithProgressStateSource:(id)arg1;
- (void)startRocketEffectWithProgressStateSource:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateFluidProgressWithProgressStateSource:(id)arg1;
- (id)windowDelegate;

@end
