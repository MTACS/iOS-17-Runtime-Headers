
@protocol _UIKeyboardArbiterClient

@required

- (void)addWindowHostingPID:(int)arg1 callerID:(id <NSCopying>)arg2;
- (bool)allowedToEnableKeyboardWindow;
- (void)checkState;
- (UIInputWindowController *)existingInputWindowRootViewController;
- (void)finishWithHostedWindow;
- (bool)handlingRemoteEvent;
- (bool)hasAnyHostedViews;
- (bool)hasWindowHostingCallerID:(id <NSCopying>)arg1;
- (bool)hasWindowHostingPID:(int)arg1;
- (double)heightForRemoteIAVPlaceholderIfNecessary;
- (void)ignoreLayoutNotifications:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIInputWindowController *)inputWindowRootViewController;
- (bool)keyboardActive;
- (bool)keyboardVisible;
- (long long)lastEventSource;
- (void)peekApplicationEvent:(UIEvent *)arg1;
- (void)performOnControllers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIRemoteKeyboardViewSource> *, void*
- (void)performOnDistributedControllers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIRemoteKeyboardDistributedViewSource> *, void*
- (void)performOnExistingControllers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIRemoteKeyboardViewSource> *, void*
- (void)performOnLocalDistributedControllers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIRemoteKeyboardDistributedViewSource> *, void*
- (UIWindow *)prepareForHostedWindowWithScene:(UIWindowScene *)arg1;
- (void)registerController:(id <_UIRemoteKeyboardViewSource>)arg1;
- (bool)remoteKeyboardUndocked;
- (bool)remoteKeyboardUndocked:(bool)arg1;
- (void)removeWindowHostingPID:(int)arg1 callerID:(id <NSCopying>)arg2;
- (void)restorePreservedInputViewsIfNecessary;
- (void)sceneUpdated;
- (void)setDisableBecomeFirstResponder:(bool)arg1 forSuppressionAssertion:(bool)arg2;
- (void)setDisableBecomeFirstResponder:(bool)arg1 forSuppressionAssertion:(bool)arg2 updatePlacement:(bool)arg3;
- (void)setKeyboardSceneIdentifierEnteringForegroundForScene:(UIScene *)arg1;
- (void)setShouldFence:(bool)arg1;
- (void)setSnapshotting:(bool)arg1;
- (void)setSuppressingKeyboard:(bool)arg1 forScene:(UIWindowScene *)arg2;
- (bool)shouldAllowInputViewsRestoredForId:(id <NSCopying>)arg1;
- (bool)shouldFence;
- (bool)snapshotting;
- (void)unregisterController:(id <_UIRemoteKeyboardViewSource>)arg1;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2 responder:(UIResponder *)arg3;
- (bool)updatingHeight;
- (<_UIAssertion> *)vendKeyboardSuppressionAssertionForReason:(NSString *)arg1;
- (<_UIAssertion> *)vendKeyboardSuppressionAssertionForReason:(NSString *)arg1 type:(unsigned long long)arg2;
- (void)verifyPlacement;

@end
