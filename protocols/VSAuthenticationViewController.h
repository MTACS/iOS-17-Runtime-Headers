
@protocol VSAuthenticationViewController <NSObject>

@required

- (<VSAuthenticationViewControllerDelegate> *)delegate;
- (bool)isCancellationAllowed;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id <VSAuthenticationViewControllerDelegate>)arg1;
- (VSViewModel *)viewModel;

@optional

- (struct CGSize { double x1; double x2; })preferredLogoSize;

@end
