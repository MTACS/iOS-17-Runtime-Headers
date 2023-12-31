
@protocol SFSafariViewControllerDelegate <NSObject>

@optional

- (NSArray *)safariViewController:(SFSafariViewController *)arg1 activityItemsForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)safariViewController:(SFSafariViewController *)arg1 didCompleteInitialLoad:(bool)arg2;
- (NSArray *)safariViewController:(SFSafariViewController *)arg1 excludedActivityTypesForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)safariViewController:(SFSafariViewController *)arg1 initialLoadDidRedirectToURL:(NSURL *)arg2;
- (void)safariViewControllerDidFinish:(SFSafariViewController *)arg1;
- (void)safariViewControllerWillOpenInBrowser:(SFSafariViewController *)arg1;

@end
