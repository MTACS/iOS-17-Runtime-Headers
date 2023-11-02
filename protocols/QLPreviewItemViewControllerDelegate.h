
@protocol QLPreviewItemViewControllerDelegate <NSObject, UIGestureRecognizerDelegate>

@required

- (long long)dragDataOwnerForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)expandContentOfPreviewItemViewController:(QLItemViewController *)arg1 unarchivedItemsURL:(NSURL *)arg2;
- (NSString *)loadingTextForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)previewItemViewController:(QLItemViewController *)arg1 didEnableEditMode:(bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 hasUnsavedEdits:(bool)arg2;
- (void)previewItemViewController:(void *)arg1 requestsTemporaryEditDirectoryWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: QLItemViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, NSError *, void*
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsFullScreen:(bool)arg2;
- (void)previewItemViewController:(void *)arg1 wantsToForwardMessageToHost:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: QLItemViewController *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToOpenURL:(NSURL *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToSetRemoteEdgePanGestureWidth:(double)arg2;
- (void)previewItemViewController:(void *)arg1 wantsToShowShareSheetWithPopoverTracker:(void *)arg2 customSharedURL:(void *)arg3 dismissCompletion:(void *)arg4; // needs 4 arg types, found 8: QLItemViewController *, <QLRemotePopoverTracker> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToUpdatePreviewItemDisplayState:(NSDictionary *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToUpdateStateRestorationWithUserInfo:(NSDictionary *)arg2;
- (void)previewItemViewControllerDidAcquireLock:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidChangeCurrentPreviewController:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidEditCopyOfPreviewItem:(void *)arg1 editedCopy:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: QLItemViewController *, QLPreviewItemEditedCopy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)previewItemViewControllerDidHandOverLock:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToDismissQuickLook:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowShareSheet:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateOverlay:(QLItemViewController *)arg1 animated:(bool)arg2;
- (void)previewItemViewControllerWantsUpdatePrinter:(QLItemViewController *)arg1;

@end
