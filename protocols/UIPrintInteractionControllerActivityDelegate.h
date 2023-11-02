
@protocol UIPrintInteractionControllerActivityDelegate <NSObject>

@optional

- (UIViewController *)printInteractionControllerParentViewController:(UIPrintInteractionController *)arg1;
- (UIWindow *)printInteractionControllerWindowForPresentation:(UIPrintInteractionController *)arg1;
- (bool)shouldDismissParentViewController:(UIPrintInteractionController *)arg1;

@end
