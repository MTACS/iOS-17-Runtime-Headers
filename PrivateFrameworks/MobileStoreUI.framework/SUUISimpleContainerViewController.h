
@interface SUUISimpleContainerViewController : UIViewController {
    UIViewController * _contentViewController;
}

@property (nonatomic, retain) UIViewController *contentViewController;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)contentViewController;
- (void)loadView;
- (void)setContentViewController:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
