
@interface ContactlessReaderUI.RegistrationViewModel : _TtCs12_SwiftObject <ProximityReader.RegUI> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _accountID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _dismissUI;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showTermsofService;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void analyticsAppleIdUsed;
    void dismissalHandler;
    void partnerToken;
    void relink;
    void remoteProxy;
    void retrieveHostController;
    void userCancelled;
}

- (void)closeRegUI;
- (void)closeRegUIImmediate;
- (void)notifyRegUIResultWithResult:(id)arg1;

@end
