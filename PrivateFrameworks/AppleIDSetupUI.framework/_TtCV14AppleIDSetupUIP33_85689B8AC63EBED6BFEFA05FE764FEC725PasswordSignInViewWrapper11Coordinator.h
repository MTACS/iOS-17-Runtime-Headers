
@interface _TtCV14AppleIDSetupUIP33_85689B8AC63EBED6BFEFA05FE764FEC725PasswordSignInViewWrapper11Coordinator : NSObject <AAUICDPSignInDelegate, AAUISignInControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _navigationPath;
    void childSetupController;
    void settings;
}

- (void).cxx_destruct;
- (id)init;
- (void)signInController:(id)arg1 didCompleteWithOperationsResults:(id)arg2;
- (void)signInControllerDidCancel:(id)arg1;
- (void)signInControllerDidSelectChildSignIn:(id)arg1;
- (void)signInControllerDidSkip:(id)arg1;

@end
