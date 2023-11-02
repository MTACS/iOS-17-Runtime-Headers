
@interface BTSFitTestWelcomeController : UIViewController {
    BTSDevice * _currentDevice;
}

@property (nonatomic, retain) BTSDevice *currentDevice;

- (void).cxx_destruct;
- (void)cancelFitTest;
- (void)continueToFitTest;
- (id)currentDevice;
- (void)deviceDisconnectedHandler:(id)arg1;
- (id)init;
- (void)loadView;
- (void)powerChangedHandler:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)viewDidLoad;

@end
