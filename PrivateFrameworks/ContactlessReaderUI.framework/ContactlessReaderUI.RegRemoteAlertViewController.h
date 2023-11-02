
@interface ContactlessReaderUI.RegRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    void regViewController;
    void suppressible;
    void viewDisappearListener;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
