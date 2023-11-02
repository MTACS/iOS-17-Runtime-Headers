
@protocol CKChatControllerDelegate <NSObject, CKCoreChatControllerDelegate>

@required

- (void)chatController:(CKChatController *)arg1 forwardComposition:(CKComposition *)arg2;
- (void)chatControllerDidChangeDeferringSystemNavigationPopGestureForPlusButton:(CKChatController *)arg1;
- (void)prewarmCameraIfNecessaryForChatController:(CKChatController *)arg1;

@optional

- (void)chatController:(CKChatController *)arg1 didDetachDetailsNavigationController:(CKDetailsNavigationController *)arg2;
- (void)chatController:(CKChatController *)arg1 shouldComposeConversationWithRecipientAddresses:(NSArray *)arg2;
- (void)dismissAndReopenDetailsNavigationController;
- (void)dismissDetailsNavigationController;
- (void)dismissDetailsViewAndShowConversationList;
- (void)doneButtonPressedForChatController:(CKChatController *)arg1;
- (bool)hasDetailsNavigationController;
- (bool)hasRecentlyDeletedFilterSelected;
- (bool)isDetailsNavigationControllerDetached;
- (void)keyCommandDeleteConversation:(id)arg1;
- (void)keyCommandToggleDetails;
- (NSString *)navigationBarBackdropLayerGroupNameForChatController:(CKChatController *)arg1;
- (void)presentDetailsNavigationController:(CKDetailsNavigationController *)arg1;
- (void)screenTimeOKPressedForChatController:(CKChatController *)arg1;
- (bool)shouldConfigureChatControllerAsCollapsed;
- (void)stopForcingOrientation;
- (long long)unreadCountForCurrentFilterModeForChatController:(CKChatController *)arg1;
- (void)updateSupportedInterfaceOrientations:(unsigned long long)arg1;

@end
