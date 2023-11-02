
@interface CoreIDVUI.IdentityProofingTCViewController : UIViewController <RemoteUIControllerDelegate> {
    void activityIndicator;
    void agreeButtonName;
    void agreeClicked;
    void config;
    void disagreeButtonName;
    void onAppearance;
    void proofingFlowManager;
    void uiConfigFactory;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)viewDidAppear:(bool)arg1;

@end
