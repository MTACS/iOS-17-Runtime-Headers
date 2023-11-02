
@protocol QLItemViewControllerPresentingDelegate

@required

- (NSString *)hostApplicationBundleIdentifier;
- (QLItemPresenterViewController *)itemPresenterViewController;
- (NSString *)parentApplicationDisplayIdentifier;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;

@end
