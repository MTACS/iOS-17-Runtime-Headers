
@interface SBBarSwipeAffordanceView : UIView <SBFBarSwipeBehaviorDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, UIGestureRecognizerDelegate> {
    bool  _active;
    SBFBarSwipeBehavior * _barSwipeBehavior;
    <SBBarSwipeAffordanceDelegate> * _delegate;
    SBSystemGestureManager * _gestureManager;
    SBHomeGrabberView * _grabberView;
    bool  _homeAffordanceHidden;
    SBHomeGestureInteraction * _homeGestureInteraction;
    SBKeyboardHomeAffordanceAssertion * _keyboardHomeAffordanceAssertion;
    NSHashTable * _observers;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) long long colorBias;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBBarSwipeAffordanceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long feedbackType;
@property (nonatomic, readonly) SBHomeGrabberView *grabberView;
@property (readonly) unsigned long long hash;
@property (getter=isHomeAffordanceHidden, nonatomic) bool homeAffordanceHidden;
@property (nonatomic) bool ignoresLuminance;
@property (nonatomic, retain) SBKeyboardHomeAffordanceAssertion *keyboardHomeAffordanceAssertion;
@property (nonatomic) <SBHomeGrabberPointerClickDelegate> *pointerClickDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_deactivate;
- (long long)_effectiveOrientationAccountingForTransforms;
- (id)_hideHomeAffordanceAnimationSettings;
- (void)_runBlockOnObservers:(id /* block */)arg1;
- (id)_unhideHomeAffordanceAnimationSettings;
- (void)_updateHomeAffordanceVisibility;
- (void)addObserver:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (void)barSwipeBehavior:(id)arg1 didUpdateAdditionalEdgeSpacing:(double)arg2;
- (void)barSwipeBehaviorActionPerformed:(id)arg1;
- (long long)colorBias;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (long long)feedbackType;
- (id)grabberView;
- (unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)homeGestureInteractionBegan:(id)arg1;
- (void)homeGestureInteractionCancelled:(id)arg1;
- (void)homeGestureInteractionChanged:(id)arg1;
- (void)homeGestureInteractionEnded:(id)arg1;
- (bool)ignoresLuminance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 systemGestureManager:(id)arg2 enableGestures:(bool)arg3;
- (bool)isActive;
- (bool)isHomeAffordanceHidden;
- (bool)isTrackingHomeGestureOfType:(long long)arg1;
- (id)keyboardHomeAffordanceAssertion;
- (void)layoutSubviews;
- (id)pointerClickDelegate;
- (void)removeObserver:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setColorBias:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackType:(long long)arg1;
- (void)setHomeAffordanceHidden:(bool)arg1;
- (void)setIgnoresLuminance:(bool)arg1;
- (void)setKeyboardHomeAffordanceAssertion:(id)arg1;
- (void)setPointerClickDelegate:(id)arg1;
- (bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
