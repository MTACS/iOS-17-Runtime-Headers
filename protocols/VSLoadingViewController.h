
@protocol VSLoadingViewController <NSObject>

@required

- (<VSLoadingViewControllerDelegate> *)delegate;
- (bool)isCancellationAllowed;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id <VSLoadingViewControllerDelegate>)arg1;

@end
