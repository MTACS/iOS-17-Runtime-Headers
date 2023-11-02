
@interface CDPServiceViewController : UIViewController <CDPServiceInterface> {
    UIViewController * _contentViewController;
    bool  _inlineMode;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)offsetForCurrentKeyboard:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end