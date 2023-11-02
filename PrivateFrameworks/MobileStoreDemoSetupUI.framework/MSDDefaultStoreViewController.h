
@interface MSDDefaultStoreViewController : UIViewController {
    OBWelcomeController * _contentViewController;
}

@property (nonatomic, retain) OBWelcomeController *contentViewController;

- (void).cxx_destruct;
- (void)_completeSetupTapped:(id)arg1;
- (id)contentViewController;
- (id)init;
- (void)setContentViewController:(id)arg1;
- (void)viewDidLoad;

@end
