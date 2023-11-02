
@interface SBBarSwipeAffordanceViewController : UIViewController <SBBarSwipeAffordanceControlling> {
    SBBarSwipeAffordanceController * _barSwipeAffordanceController;
}

@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (nonatomic, readonly) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBBarSwipeAffordanceControllingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBHomeGrabberPointerClickDelegate> *pointerClickDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressAffordance;
@property (nonatomic, retain) SBBarSwipeAffordanceView *view;
@property (nonatomic) bool wantsToBeActiveAffordance;
@property (nonatomic, readonly) SBFZStackParticipant *zStackParticipant;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)activationPolicyForParticipantsBelow;
- (id)barSwipeAffordanceView;
- (id)delegate;
- (id)initWithZStackParticipantIdentifier:(long long)arg1 windowScene:(id)arg2;
- (void)loadView;
- (id)pointerClickDelegate;
- (void)setActivationPolicyForParticipantsBelow:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPointerClickDelegate:(id)arg1;
- (void)setSuppressAffordance:(bool)arg1;
- (void)setWantsToBeActiveAffordance:(bool)arg1;
- (bool)suppressAffordance;
- (bool)wantsToBeActiveAffordance;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
