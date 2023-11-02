
@interface SBNotificationPresentableViewController : NCNotificationPresentableViewController <SBBannerManagerPresentable, SBBarSwipeAffordanceObserver, SBButtonEventsHandler, SBUIPresentableLocalHomeGestureParticipant> {
    <SBUIPresentableHomeGestureContext> * _homeGestureContext;
}

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
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (bool)handleVoiceCommandButtonPress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (id)homeGestureContext;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)setHomeGestureContext:(id)arg1;
- (bool)shouldAcquireWindowLevelAssertion;
- (bool)shouldDismissForReason:(id)arg1 outReason:(out id*)arg2;

@end
