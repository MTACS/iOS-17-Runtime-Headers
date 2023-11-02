
@interface VTUISiriDataSharingOptInViewController : OBWelcomeController {
    <VTUISiriDataSharingOptInViewControllerDelegate> * _delegate;
}

@property (nonatomic) <VTUISiriDataSharingOptInViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (id)initWithViewStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
