
@interface AMSUIWebAppOverlayViewController : UIViewController <ASCLockupViewDelegate> {
    void appAdamID;
    void hostBundleIdentifier;
    void lockupView;
    void lockupViewPromise;
}

- (void).cxx_destruct;
- (id)initWithAppAdamID:(id)arg1 hostBundleIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)lockupView:(id)arg1 didFailRequestWithError:(id)arg2;
- (void)lockupViewDidBeginRequest:(id)arg1;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (id)preload;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
