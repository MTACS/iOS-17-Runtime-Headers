
@interface AppleIDSetupUI.SignInOptionChildSetupController : NSObject <AISChildSetupPresenterDelegate> {
    void aidaOwnersManager;
    void aidaSignInController;
    void cdpUIController;
    void childFlowPresenter;
    void navController;
    void signInSettings;
}

- (void).cxx_destruct;
- (void)childSetupPresenter:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)childSetupPresenter:(id)arg1 didFail:(id)arg2;
- (id)init;
- (void)setupLocationServicesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setupPasscodeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setupPerformAIDASignInWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 17: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, int, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
