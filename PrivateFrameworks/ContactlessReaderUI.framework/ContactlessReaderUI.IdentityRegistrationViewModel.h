
@interface ContactlessReaderUI.IdentityRegistrationViewModel : _TtCs12_SwiftObject <ProximityReader.IdentityRegistrationUI> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _disableCancel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _dismissUI;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _screenState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showRegistrationFailedAlert;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showTermsAndConditions;
    void connection;
    void dismissalHandler;
    void registrationDelayedExecution;
    void remoteProxy;
    void termsAndConditionsAcceptanceRequired;
}

- (void)closeIndentityRegUI;

@end
