
@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController <PKDeviceSharingCapabilitiesManagerObserver> {
    PKPeerPaymentAccount * _account;
    PKDeviceSharingCapabilities * _childAppleCashCapabilities;
    PKPeerPaymentSetupFlowController * _controller;
    <PKPeerPaymentAssociatedAccountSetupDelegate> * _delegate;
    PKFamilyMember * _familyMember;
    PKPeerPaymentIconEducationView * _iconEducationView;
    long long  _setupType;
    unsigned long long  _state;
    NSObject<OS_dispatch_source> * _timer;
    bool  _timerHasFired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_checkFamilyMemberAppleCashCapabilities;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (bool)_isAssociatedAccountPending;
- (unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(bool*)arg1;
- (void)_presentDisplayableError:(id)arg1;
- (void)_sendMoneyInMessages;
- (void)_setState:(unsigned long long)arg1;
- (void)_showSpinner:(bool)arg1;
- (void)_startTimerIfNeccessary;
- (void)_terminateAddAssociatedAccountFlowWithSucces:(bool)arg1 updatedAccount:(id)arg2;
- (void)dealloc;
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3;
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;
- (void)viewDidLoad;

@end
