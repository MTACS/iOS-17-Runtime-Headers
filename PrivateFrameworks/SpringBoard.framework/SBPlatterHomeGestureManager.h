
@interface SBPlatterHomeGestureManager : NSObject <SBPlatterHomeGestureContextDelegate> {
    <SBPlatterHomeGestureManagerDelegate> * _delegate;
    NSMapTable * _participantsToHomeGestureContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBPlatterHomeGestureManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allParticipants;
- (id)_homeGestureContextForParticipant:(id)arg1 creatingIfNecessary:(bool)arg2 withWindowScene:(id)arg3;
- (id)_participantForHomeGestureContext:(id)arg1;
- (void)_removeHomeGestureContextForParticipant:(id)arg1;
- (void)bannerManagerHomeGestureContext:(id)arg1 homeGestureOwnershipDidChange:(bool)arg2;
- (id)delegate;
- (id)gestureRecognizerPriorityAssertionForBannerManagerHomeGestureContext:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)keyboardHomeAffordanceAssertionForBannerManagerHomeGestureContext:(id)arg1;
- (id)registerParticipant:(id)arg1 windowScene:(id)arg2;
- (void)unregisterParticipant:(id)arg1;
- (void)wantsHomeGestureDidChangeForBannerManagerHomeGestureContext:(id)arg1;

@end
