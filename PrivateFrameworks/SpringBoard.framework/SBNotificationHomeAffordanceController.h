
@interface SBNotificationHomeAffordanceController : NSObject <SBFZStackParticipantDelegate> {
    NSMapTable * _clientsToZStackParticipants;
    SBHomeGesturePanGestureRecognizer * _screenEdgePanGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (nonatomic, readonly) <UIViewSpringAnimationBehaviorDescribing> *settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)hideHomeAffordanceAnimationSettings;
- (void)registerClient:(id)arg1 withZStackIdentifier:(long long)arg2;
- (id)screenEdgePanGesture;
- (id)settleHomeAffordanceAnimationBehaviorDescription;
- (id)unhideHomeAffordanceAnimationSettings;
- (void)unregisterClient:(id)arg1 withZStackIdentifier:(long long)arg2;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
