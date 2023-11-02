
@interface PKPaymentSetupDismissibleNavigationController : PKNavigationController {
    bool  _configureRootViewController;
    long long  _context;
    <PKUIFlowManagerRendererDelegate> * _flowDelegate;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic) <PKUIFlowManagerRendererDelegate> *flowDelegate;

- (void).cxx_destruct;
- (void)_configureRootViewController;
- (void)cancelButtonPressed:(id)arg1;
- (long long)context;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)flowDelegate;
- (id)init;
- (id)initWithContext:(long long)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)setFlowDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)useStandardPlatformPresentationStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
