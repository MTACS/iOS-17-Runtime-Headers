
@protocol QLPreviewControllerStateProtocol <NSObject>

@required

- (void)beginInteractiveTransition;
- (void)createTemporaryEditDirectoryForItemAtIndex:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, NSError *, void*
- (void)currentPreviewItemViewControllerHasUnsavedEdits:(bool)arg1 forItemUUID:(NSUUID *)arg2;
- (void)expandContentOfItemAtIndex:(unsigned long long)arg1 withUUID:(NSUUID *)arg2 unarchivedItemsURLWrapper:(FPSandboxingURLWrapper *)arg3;
- (void)forwardMessage:(void *)arg1 toItemAtIndex:(void *)arg2 withUUID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, unsigned long long, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getStateRestorationUserInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)handleKeyPressWithInput:(NSString *)arg1 modifierFlags:(long long)arg2;
- (void)openURLIfAllowed:(NSURL *)arg1;
- (void)presentAlertControllerForScenario:(long long)arg1;
- (void)previewCollectionUpdatePreviewItem:(long long)arg1;
- (id)previewItemDisplayStateForItem:(id <QLPreviewItem>)arg1;
- (void)setAccessoryViewVisible:(bool)arg1;
- (void)setCanChangeCurrentPage:(bool)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setFullscreenBackgroundColor:(UIColor *)arg1;
- (void)setNavBarCanBeVisible:(bool)arg1;
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;
- (void)setPrinter:(id <QLPrintingProtocol>)arg1;
- (void)setToolbarCanBeVisible:(bool)arg1;
- (void)showShareSheet;
- (void)showShareSheetWithPopoverTracker:(void *)arg1 customSharedURL:(void *)arg2 dismissCompletion:(void *)arg3; // needs 3 arg types, found 7: <QLRemotePopoverTracker> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)triggerQuickLookDismissal;
- (void)updateKeyCommands;
- (void)updateOverlayButtons:(bool)arg1;
- (void)updatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updatePreviewItemAtIndex:(void *)arg1 editedCopy:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, QLPreviewItemEditedCopy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateStateRestorationWithUserInfo:(NSDictionary *)arg1;
- (void)updateTitle:(NSString *)arg1;

@optional

- (void)setScreenEdgePanWidth:(double)arg1;

@end
