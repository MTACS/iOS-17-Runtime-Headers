
@interface UIKeyboardPopoverController : UIViewController {
    UIView * _contentView;
}

@property (nonatomic, retain) UIView *contentView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_setupContentView;
- (void)configurePopoverPresentationController:(id)arg1;
- (id)contentView;
- (bool)handleHardwareKeyboardEvent:(id)arg1;
- (id)init;
- (bool)isPresented;
- (long long)overrideUserInterfaceStyle;
- (void)setContentView:(id)arg1;
- (void)viewDidLoad;
- (bool)wantsDimmingView;

@end
