
@interface AISAIDASignInViewController : NSObject <CDPUIDelegate> {
    void aidaOwnersManager;
    void cdpUIController;
    void navController;
}

- (void).cxx_destruct;
- (id)init;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;
- (void)uiController:(id)arg1 prepareAlertContext:(id /* block */)arg2;
- (void)uiController:(id)arg1 preparePresentationContext:(id /* block */)arg2;

@end
