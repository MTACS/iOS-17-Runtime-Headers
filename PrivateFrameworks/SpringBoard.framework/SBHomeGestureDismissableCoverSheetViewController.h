
@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBFZStackParticipantDelegate, SBSystemGestureRecognizerDelegate> {
    SBHomeGesturePanGestureRecognizer * _bottomEdgeRecognizer;
    bool  _wantsHomeGestureOwnership;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic, retain) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsHomeGestureOwnership;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;
@property (nonatomic, readonly) long long zStackParticipantIdentifier;

- (void).cxx_destruct;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_relinquishHomeGestureOwnership;
- (void)_requestHomeGestureOwnership;
- (id)bottomEdgeRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setBottomEdgeRecognizer:(id)arg1;
- (void)setWantsHomeGestureOwnership:(bool)arg1;
- (void)setZStackParticipant:(id)arg1;
- (bool)shouldDismissForHomeGestureRecognizer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsHomeGestureOwnership;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;
- (long long)zStackParticipantIdentifier;

@end
