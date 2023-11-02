
@interface SBUIFullscreenAnimationView : UIView {
    bool  _animating;
    <SBUIFullscreenAnimationViewDelegate> * _delegate;
}

@property (nonatomic, readonly) bool animating;
@property (nonatomic) <SBUIFullscreenAnimationViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_animationBegan;
- (void)_animationEnded;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2;
- (void)_notifyDelegateThatAnimationIsDone;
- (bool)animating;
- (void)beginTransition;
- (id)delegate;
- (void)endTransition;
- (void)setDelegate:(id)arg1;
- (void)setFromView:(id)arg1;
- (void)setToView:(id)arg1;

@end
