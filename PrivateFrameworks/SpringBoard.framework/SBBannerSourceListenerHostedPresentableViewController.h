
@interface SBBannerSourceListenerHostedPresentableViewController : BNBannerSourceListenerHostedPresentableViewController <SBBannerLayoutCustomizing, SBBannerManagerPresentable, SBBannerPhysicalButtonTarget, SBBarSwipeAffordanceObserver, SBButtonEventsHandler, SBPresentableSystemDragCancelling, SBUIPresentableLocalHomeGestureParticipant> {
    SBBarSwipeAffordanceView * _barSwipeAffordanceView;
    NSMutableDictionary * _buttonEventsToActions;
    SBBannerCustomTransitioningDelegate * _customTransitioningDelegate;
    SBBannerGestureRecognizerPriorityAssertion * _gestureRecognizerPriorityAssertion;
    <SBUIPresentableHomeGestureContext> * _homeGestureContext;
    bool  _supportsCancellingSystemDragGesture;
    <SBPresentableSystemDragCancellationHandler> * _systemDragCancellationHandler;
    NSMutableArray * _wantsHomeAffordanceActionsAwaitingResponse;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bannerContentOutsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBUIPresentableHomeGestureContext> *homeGestureContext;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) <SBPresentableSystemDragCancellationHandler> *systemDragCancellationHandler;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_invalidateAllButtonEventActions;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (void)dealloc;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (bool)handleVoiceCommandButtonPress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (id)homeGestureContext;
- (void)homeGestureOwnershipDidChange:(bool)arg1;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setHomeGestureContext:(id)arg1;
- (void)setSystemDragCancellationHandler:(id)arg1;
- (bool)shouldDisableTouchCancellationForTouch:(id)arg1 event:(id)arg2;
- (bool)shouldDismissForReason:(id)arg1 outReason:(out id*)arg2;
- (id)systemDragCancellationHandler;
- (id)targetSceneForPhysicalButtonInteraction;
- (id)transitioningDelegate;

@end
