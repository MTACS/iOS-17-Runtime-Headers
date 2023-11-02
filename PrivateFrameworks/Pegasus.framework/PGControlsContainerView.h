
@interface PGControlsContainerView : UIView <PGControlsViewModelDelegate, UIGestureRecognizerDelegate> {
    <PGCommandHandler> * _commandHandler;
    UIViewPropertyAnimator * _containerViewVisibilityAnimator;
    PGControlsView * _controlsView;
    UIViewPropertyAnimator * _controlsViewVisibilityAnimator;
    id /* block */  _coordinatedAnimationsForControlsVisibiity;
    UITapGestureRecognizer * _doubleDoubleTapGestureRecognizer;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    UIViewPropertyAnimator * _hidableControlsVisibilityAnimator;
    NSTimer * _hideControlsAfterDelayTimer;
    UIGestureRecognizer * _hoverGestureRecognizer;
    bool  _interactivelyResizing;
    UIView * _interruptionDimmingView;
    NSMutableSet * _preventAutoHideOfControlsAssertionIdentifiers;
    bool  _showingControlsForHoverActive;
    bool  _showsPictureInPictureUnavailableIndicator;
    UITapGestureRecognizer * _singleTapGestureRecognizer;
    PGControlsViewModel * _viewModel;
}

@property (nonatomic) <PGCommandHandler> *commandHandler;
@property (nonatomic, copy) id /* block */ coordinatedAnimationsForControlsVisibiity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteractivelyResizing, nonatomic) bool interactivelyResizing;
@property (getter=isShowingControlsForHoverActive, nonatomic) bool showingControlsForHoverActive;
@property (nonatomic) bool showsPictureInPictureUnavailableIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg1;
- (id)_acquirePreventAutoHideOfControlsAssertionWithReason:(id)arg1;
- (bool)_controlsShouldAutoHide;
- (void)_handleDoubleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleHoverGestureRecognizer:(id)arg1;
- (void)_handleSingleTapGestureRecognizer:(id)arg1;
- (void)_invalidateTimer;
- (id)_performVisibilityTransitionAnimated:(bool)arg1 existingAnimator:(id)arg2 animations:(id /* block */)arg3 success:(id /* block */)arg4;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setPrefersControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_updateHideControlsAfterDelayTimer;
- (id)_updateVisibilityOfView:(id)arg1 hidden:(bool)arg2 animated:(bool)arg3 existingAnimator:(id)arg4;
- (id)commandHandler;
- (void)controlsViewModel:(id)arg1 didIssueCommand:(id)arg2;
- (void)controlsViewModel:(id)arg1 valuesChangedFromOldValue:(id)arg2;
- (id /* block */)coordinatedAnimationsForControlsVisibiity;
- (void)didMoveToWindow;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewModel:(id)arg2;
- (bool)isInteractivelyResizing;
- (bool)isShowingControlsForHoverActive;
- (void)layoutSubviews;
- (void)setCommandHandler:(id)arg1;
- (void)setControlsContainerHidden:(bool)arg1 animated:(bool)arg2;
- (void)setCoordinatedAnimationsForControlsVisibiity:(id /* block */)arg1;
- (void)setHoverGestureDisbaled:(bool)arg1;
- (void)setInteractivelyResizing:(bool)arg1;
- (void)setShowingControlsForHoverActive:(bool)arg1;
- (void)setShowsPictureInPictureUnavailableIndicator:(bool)arg1;
- (bool)showsPictureInPictureUnavailableIndicator;
- (id)viewModel;

@end
