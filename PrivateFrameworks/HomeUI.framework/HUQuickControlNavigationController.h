
@interface HUQuickControlNavigationController : UINavigationController <HUViewControllerCustomDismissing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_canShowWhileLocked;
- (id)hu_prepareForDismissalAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)viewDidLoad;

@end
