
@protocol CKSendMenuViewControllerDelegate

@required

- (CKConversation *)conversationForSendMenu;
- (bool)isAppCardPresentationStyleExpanded;
- (void)sendMenuDidAppear:(CKSendMenuViewController *)arg1 presentationStyle:(long long)arg2;
- (void)sendMenuViewController:(CKSendMenuViewController *)arg1 didSelectExtensionIdentifier:(NSString *)arg2;
- (void)sendMenuViewControllerDidFinishDismissAnimation:(CKSendMenuViewController *)arg1;
- (void)sendMenuViewControllerRequestDismiss:(CKSendMenuViewController *)arg1;
- (void)sendMenuViewControllerWillPerformFullScreenDismissAnimation:(CKSendMenuViewController *)arg1;

@end
