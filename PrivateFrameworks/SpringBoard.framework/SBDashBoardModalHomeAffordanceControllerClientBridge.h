
@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <SBFZStackParticipantDelegate, SBHomeGrabberDelegate> {
    <CSModalHomeGestureParticipating> * _coverSheetModalHomeGestureParticipant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (id)initWithCoverSheetModalHomeGestureParticipant:(id)arg1;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
