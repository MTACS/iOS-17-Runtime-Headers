
@protocol UIDocumentBrowserViewControllerPrivateDelegate <UIDocumentBrowserViewControllerDelegate>

@optional

- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickImportedURLs:(NSArray *)arg2;
- (bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldHandleLocation:(DOCConcreteLocation *)arg2;
- (bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 barButtonItem:(UIBarButtonItem *)arg3 popoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg4;
- (bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 popoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg3 isContentManaged:(bool)arg4 additionalActivities:(NSArray *)arg5 activityProxy:(id <DOCItemActivityPerformer>)arg6;
- (void)documentBrowserDidUpdateAdditionalNavigationBarButtonItems:(UIDocumentBrowserViewController *)arg1;
- (void)documentManagerWasCancelled:(UIDocumentBrowserViewController *)arg1;

@end
