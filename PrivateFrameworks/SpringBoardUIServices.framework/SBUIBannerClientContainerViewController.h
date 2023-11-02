
@interface SBUIBannerClientContainerViewController : BNBannerClientContainerViewController <SBUIPresentableButtonEventsContext, SBUIPresentableCancelSystemDragGestureRecognizerDelegate, SBUIPresentableDismissalPreventionContext, SBUIPresentableGestureRecognizerPriorityContext, SBUIPresentableHomeGestureContext, SBUISystemApertureElementContextObserver> {
    NSMapTable * _buttonEventsToActions;
    _SBUIPresentableGestureRecognizerPriorityAssertion * _gestureRecognizerPriorityAssertion;
    bool  _ownsHomeGesture;
    _SBUIPresentableDismissalPreventionAssertion * _transitionDismissalPreventionAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ownsHomeGesture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonEventsActionForButtonEvent:(long long)arg1;
- (void)_handleCancelSystemBannerDragGestureRecognizer:(id)arg1;
- (void)_removeButtonEventsActionForButtonEvent:(long long)arg1;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (void)_setButtonEventAction:(id)arg1 forButtonEvent:(long long)arg2;
- (id)_transitionCoordinator;
- (id)acquireAssertionForButtonEvent:(long long)arg1 reason:(id)arg2;
- (id)acquireGestureRecognizerDefaultPriorityAssertionForReason:(id)arg1;
- (id)acquireTransitionDismissalPreventionAssertionForReason:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeginWithTouches:(id)arg2 event:(id)arg3;
- (id)initWithScene:(id)arg1 presentable:(id)arg2 context:(id)arg3;
- (bool)isAccessibilityIgnoringSmartInvertColors;
- (bool)ownsHomeGesture;
- (void)setWantsHomeGesture:(bool)arg1;
- (void)systemApertureElementContextPresentationDidBecomePossible:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
