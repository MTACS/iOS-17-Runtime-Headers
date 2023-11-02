
@interface SBBarSwipeAffordanceController : NSObject <SBBarSwipeAffordanceControlling> {
    long long  _activationPolicyForParticipantsBelow;
    SBBarSwipeAffordanceView * _barSwipeAffordanceView;
    <SBBarSwipeAffordanceControllingDelegate> * _delegate;
    <SBHomeGrabberPointerClickDelegate> * _pointerClickDelegate;
    bool  _suppressAffordance;
    bool  _wantsToBeActiveAffordance;
    SBWindowScene * _windowScene;
    SBFZStackParticipant * _zStackParticipant;
    long long  _zStackParticipantIdentifier;
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
@property (nonatomic) bool wantsToBeActiveAffordance;
@property (nonatomic) SBWindowScene *windowScene;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

- (void).cxx_destruct;
- (void)_beginTryingToBecomeActiveAffordance;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_setKeyboardHomeAffordanceVisible:(bool)arg1;
- (void)_stopTryingToBecomeActiveAffordance;
- (void)_updateActiveState;
- (long long)activationPolicyForParticipantsBelow;
- (id)barSwipeAffordanceView;
- (void)dealloc;
- (id)delegate;
- (id)initWithZStackParticipantIdentifier:(long long)arg1 windowScene:(id)arg2;
- (id)pointerClickDelegate;
- (void)setActivationPolicyForParticipantsBelow:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPointerClickDelegate:(id)arg1;
- (void)setSuppressAffordance:(bool)arg1;
- (void)setWantsToBeActiveAffordance:(bool)arg1;
- (void)setWindowScene:(id)arg1;
- (void)setZStackParticipant:(id)arg1;
- (bool)suppressAffordance;
- (bool)wantsToBeActiveAffordance;
- (id)windowScene;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
