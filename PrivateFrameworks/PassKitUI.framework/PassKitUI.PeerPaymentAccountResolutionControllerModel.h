
@interface PassKitUI.PeerPaymentAccountResolutionControllerModel : NSObject <PKPeerPaymentAccountResolutionControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _loading;
    void account;
    void resolutionController;
    void updateAccountAction;
    void verificationContext;
    void webService;
}

- (void).cxx_destruct;
- (id)init;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;

@end
