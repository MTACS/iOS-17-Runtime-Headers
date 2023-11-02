
@interface PLSwipeInteraction : NSObject <MTMaterialGrouping, UIGestureRecognizerDelegate, UIInteraction> {
    PLActionButtonsPresentingView * _actionButtonsPresentingView;
    id /* block */  _animationCompletion;
    unsigned long long  _animationCount;
    <PLSwipeInteractionDelegate> * _delegate;
    NSString * _materialGroupNameBase;
    UIPanGestureRecognizer * _panGestureRecognizer;
    double  _panGestureStartingPosition;
    id /* block */  _performWithoutRetargetingAnimationCompletion;
    bool  _performingSwipeHinting;
    id /* block */  _swipeHintingHideAnimationBlock;
    UIViewFloatAnimatableProperty * _targetPositionAnimatableProperty;
    UIView * _view;
    UIView * _viewToMove;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PLSwipeInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (getter=isPerformingSwipeHinting, nonatomic) bool performingSwipeHinting;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;
@property (nonatomic) UIView *viewToMove;

- (void).cxx_destruct;
- (double)_actionButtonTriggerDistanceForView:(id)arg1;
- (void)_addActionButtonViewsAtLayoutLocation:(unsigned long long)arg1 interfaceEdge:(unsigned long long)arg2;
- (void)_addActionButtonsAndRevealAnimated:(bool)arg1 fastAnimation:(bool)arg2 layoutLocation:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_handlePanGesture:(id)arg1;
- (void)_hideAnimated:(bool)arg1 fastAnimation:(bool)arg2 velocity:(double)arg3 completion:(id /* block */)arg4;
- (unsigned long long)_interfaceEdgeForLayoutLocation:(unsigned long long)arg1;
- (unsigned long long)_interfaceEdgeToPresentOnForAbsoluteTranslation:(double)arg1;
- (unsigned long long)_interfaceEdgeToPresentOnForComparisonValue:(double)arg1;
- (unsigned long long)_interfaceEdgeToPresentOnForInitialPanTranslation:(double)arg1 andInitialPanVelocity:(double)arg2;
- (unsigned long long)_layoutLocationForInterfaceEdge:(unsigned long long)arg1;
- (double)_panHorizontalTranslation;
- (double)_panHorizontalVelocity;
- (void)_performSwipeHintingForLayoutLocation:(unsigned long long)arg1;
- (void)_removeActionButtons;
- (void)_revealToPosition:(double)arg1 animated:(bool)arg2 fastAnimation:(bool)arg3 velocity:(double)arg4 completion:(id /* block */)arg5;
- (void)_setViewPosition:(double)arg1 withVelocity:(double)arg2 usingNonInteractiveSpring:(bool)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)_setViewPositionHelper:(double)arg1 withVelocity:(double)arg2 usingNonInteractiveSpring:(bool)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)_setupContentOffsetFloatAnimatableProperty;
- (bool)_shouldContinuePresentingActionButtons;
- (void)_updateActionButtonRevealPercentageForTargetPosition:(double)arg1;
- (double)_updateActionRevealStateForTargetPosition:(double)arg1 currentPosition:(double)arg2 velocity:(double)arg3;
- (void)_updatePosition:(double)arg1;
- (void)_updateRevealPercentage:(double)arg1;
- (void)_updateTargetPosition:(double)arg1;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideActionsAnimated:(bool)arg1 fastAnimation:(bool)arg2 completion:(id /* block */)arg3;
- (void)hintActionsForLayoutLocation:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isPerformingSwipeHinting;
- (id)materialGroupNameBase;
- (void)revealActionsForLayoutLocation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)senderForActionWithIdentifier:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setPerformingSwipeHinting:(bool)arg1;
- (void)setView:(id)arg1;
- (void)setViewToMove:(id)arg1;
- (id)view;
- (id)viewToMove;
- (void)willMoveToView:(id)arg1;

@end
