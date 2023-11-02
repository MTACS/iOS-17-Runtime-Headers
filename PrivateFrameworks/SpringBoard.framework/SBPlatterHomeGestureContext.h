
@interface SBPlatterHomeGestureContext : NSObject <SBBarSwipeAffordanceControllingDelegate, SBBarSwipeAffordanceDelegate, SBPlatterHomeGestureViewProviding, SBUIPresentableHomeGestureContext> {
    SBBarSwipeAffordanceController * _barSwipeAffordanceController;
    <SBPlatterHomeGestureContextDelegate> * _delegate;
    <BSInvalidatable> * _gestureRecognizerPriorityAssertion;
    <SBUIPresentableHomeGestureParticipant> * _participant;
    bool  _wantsToBeActiveAffordance;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPlatterHomeGestureContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ownsHomeGesture;
@property (nonatomic, readonly) <SBUIPresentableHomeGestureParticipant> *participant;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsToBeActiveAffordance;

- (void).cxx_destruct;
- (void)_setOwnsHomeGesture:(bool)arg1;
- (unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)becomeActiveAffordanceIfPossible:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)hideAnimationSettingsForBarSwipeAffordanceView:(id)arg1;
- (id)initWithParticipant:(id)arg1 participantIdentifier:(long long)arg2 windowScene:(id)arg3;
- (id)keyboardHomeAffordanceAssertionForBarSwipeAffordanceControlling:(id)arg1;
- (bool)ownsHomeGesture;
- (id)participant;
- (id)platterBarSwipeAffordanceViewForParticipant:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWantsHomeGesture:(bool)arg1;
- (id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)arg1;
- (bool)wantsToBeActiveAffordance;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
