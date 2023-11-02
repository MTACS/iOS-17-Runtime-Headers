
@protocol WFWebSheetViewControllerDelegate <NSObject>

@optional

- (void)webSheetViewController:(WFWebSheetViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)webSheetViewControllerContentDidFinishLoading:(WFWebSheetViewController *)arg1;
- (void)webSheetViewControllerContentDidStartLoading:(WFWebSheetViewController *)arg1;
- (void)webSheetViewControllerContentReadyForPresentation:(WFWebSheetViewController *)arg1;

@end
