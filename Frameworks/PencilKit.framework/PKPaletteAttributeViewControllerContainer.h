
@interface PKPaletteAttributeViewControllerContainer : PKPaletteAttributeViewController {
    UIViewController * _contentViewController;
}

@property (nonatomic, retain) UIViewController *contentViewController;

- (void).cxx_destruct;
- (id)contentViewController;
- (id)initWithContentViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setContentViewController:(id)arg1;
- (void)viewDidLoad;

@end
