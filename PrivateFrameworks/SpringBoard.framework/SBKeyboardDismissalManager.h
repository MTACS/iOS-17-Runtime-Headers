
@interface SBKeyboardDismissalManager : NSObject <BKSTouchDeliveryObserving, SBFailureNotifyingTapGestureRecognizerDelegate> {
    UIGestureRecognizer * _dismissGestureRecognizer;
    SBWorkspaceKeyboardFocusController * _focusController;
    __UIKeyboardArbiterManager * _keyboardArbiterManager;
    BSCompoundAssertion * _participantsAssertion;
    SBSystemGestureManager * _systemGestureManager;
    BSAbsoluteMachTimer * _touchExpiryTimer;
    BKSTouchDeliveryObservationService * _touchService;
    unsigned int  _trackedTouchIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)_reset;
- (bool)_shouldPreventDismissalForTouch:(id)arg1;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureRecognizerTransitionedToFailed:(id)arg1;
- (id)initWithTouchDeliveryService:(id)arg1 systemGestureManager:(id)arg2 keyboardArbiterManager:(id)arg3 focusController:(id)arg4;
- (id)registerKeyboardDismissalParticipant:(id)arg1;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
