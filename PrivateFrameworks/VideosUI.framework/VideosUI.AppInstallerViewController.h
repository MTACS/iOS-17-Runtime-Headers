
@interface VideosUI.AppInstallerViewController : UIViewController <ASCLockupViewDelegate, ASCLockupViewDelegate_PreprocessOffer> {
    void $__lazy_storage_$_subtitleLabel;
    void appInfo;
    void contentTitle;
    void federatedInstallHelper;
    void navigationViewController;
    void onFlowComplete;
    void previousState;
}

- (void).cxx_destruct;
- (void)handleCancel;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (void)lockupView:(id)arg1 preprocessOffer:(id)arg2 inState:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)viewDidLoad;

@end
