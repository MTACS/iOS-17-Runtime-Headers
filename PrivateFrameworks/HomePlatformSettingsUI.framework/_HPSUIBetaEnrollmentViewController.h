
@interface _HPSUIBetaEnrollmentViewController : HomePlatformSettingsUI.BaseExtensionViewController <HomePlatformSettingsUI.BetaEnrollmentClientInterface, HomePlatformSettingsUI.BetaEnrollmentXPCClientInterface> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  homeID;
}

+ (void)shouldShowBetaEnrollmentButtonForHomeID:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHomeID:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
