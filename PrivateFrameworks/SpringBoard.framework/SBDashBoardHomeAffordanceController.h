
@interface SBDashBoardHomeAffordanceController : NSObject <CSHomeAffordanceControlling> {
    SBNotificationHomeAffordanceController * _notificationHomeAffordanceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) UIPanGestureRecognizer *screenEdgePanGesture;
@property (nonatomic, readonly) <UIViewSpringAnimationBehaviorDescribing> *settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;

- (void).cxx_destruct;
- (id)hideHomeAffordanceAnimationSettings;
- (id)init;
- (id)keyboardAssertionForGestureWindow:(id)arg1;
- (void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
- (id)screenEdgePanGesture;
- (id)settleHomeAffordanceAnimationBehaviorDescription;
- (id)unhideHomeAffordanceAnimationSettings;
- (void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;

@end
