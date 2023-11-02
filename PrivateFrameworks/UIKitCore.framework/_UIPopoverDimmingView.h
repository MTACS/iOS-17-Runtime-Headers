
@interface _UIPopoverDimmingView : UIDimmingView <_UIPassthroughScrollInteractionDelegate> {
    bool  _lastHitTestWasPassedThrough;
    _UIPassthroughScrollInteraction * _passthroughScrollInteraction;
    UIView * _transitionContainerView;
}

@property (nonatomic, readonly) _UIPassthroughScrollInteraction *_passthroughScrollInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPopoverDimmingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *transitionContainerView;

- (void).cxx_destruct;
- (bool)_delegateAllowsInteraction;
- (id)_passthroughScrollInteraction;
- (void)_sendDelegateDimmingViewWasTapped;
- (void)_setOverrideAllowsHitTestingOnTouchFallbackView:(bool)arg1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (void)setTransitionContainerView:(id)arg1;
- (id)transitionContainerView;
- (void)willMoveToWindow:(id)arg1;

@end
