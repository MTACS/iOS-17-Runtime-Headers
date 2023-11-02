
@protocol NewsTransparencyViewControllerDelegate <NSObject>

@optional

- (void)newsTransparencyViewController:(NewsTransparencyViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)newsTransparencyViewControllerDidDismiss:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewControllerDidLinkOut:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewControllerDidLoad:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewControllerDidRenderView:(NewsTransparencyViewController *)arg1;

@end
