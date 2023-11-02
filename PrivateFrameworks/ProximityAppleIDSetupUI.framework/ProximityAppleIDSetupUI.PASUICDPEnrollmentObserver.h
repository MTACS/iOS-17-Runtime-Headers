
@interface ProximityAppleIDSetupUI.PASUICDPEnrollmentObserver : NSObject <CDPUIDelegate> {
    void delegate;
    void lastStatus;
    void notificationCenter;
    void observers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;
- (void)uiController:(id)arg1 prepareAlertContext:(id /* block */)arg2;
- (void)uiController:(id)arg1 preparePresentationContext:(id /* block */)arg2;

@end
