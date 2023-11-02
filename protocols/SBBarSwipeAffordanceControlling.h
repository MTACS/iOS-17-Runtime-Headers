
@protocol SBBarSwipeAffordanceControlling <SBFZStackParticipantDelegate>

@required

- (long long)activationPolicyForParticipantsBelow;
- (SBBarSwipeAffordanceView *)barSwipeAffordanceView;
- (<SBBarSwipeAffordanceControllingDelegate> *)delegate;
- (<SBHomeGrabberPointerClickDelegate> *)pointerClickDelegate;
- (void)setActivationPolicyForParticipantsBelow:(long long)arg1;
- (void)setDelegate:(id <SBBarSwipeAffordanceControllingDelegate>)arg1;
- (void)setPointerClickDelegate:(id <SBHomeGrabberPointerClickDelegate>)arg1;
- (void)setSuppressAffordance:(bool)arg1;
- (void)setWantsToBeActiveAffordance:(bool)arg1;
- (bool)suppressAffordance;
- (bool)wantsToBeActiveAffordance;
- (SBFZStackParticipant *)zStackParticipant;

@end
