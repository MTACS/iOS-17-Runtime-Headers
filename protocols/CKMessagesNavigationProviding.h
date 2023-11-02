
@protocol CKMessagesNavigationProviding

@required

- (void)cancelNewMessageCompositionAnimated:(bool)arg1;
- (CKCoreChatController *)chatController;
- (UIViewController<CKConversationListControllerProtocol> *)conversationListController;
- (CKConversation *)conversationMatchingGUID:(NSString *)arg1;
- (bool)currentCompositionHasContent;
- (id /* block */)deferredHandleURLBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)deleteConversation:(CKConversation *)arg1;
- (void)dismissChatControllerIfVisibleAnimated:(bool)arg1;
- (void)dismissDetailsControllerAnimated:(bool)arg1;
- (void)dismissViewControllerAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (CKConversation *)firstConversationExactlyMatchingDisplayName:(NSString *)arg1;
- (bool)isComposingMessage;
- (void)performSearchForQuery:(NSString *)arg1;
- (void)presentDetailsViewControllerAnimated:(bool)arg1;
- (UIViewController *)presentedViewController;
- (bool)resumeToConversation:(CKConversation *)arg1;
- (void)setDeferredHandleURLBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)shouldRestoreToConversationListForState:(CKSceneDelegateState *)arg1;
- (void)showBusinessChatNotSupportedAlert;
- (void)showConversation:(CKConversation *)arg1 animate:(bool)arg2;
- (void)showConversation:(CKConversation *)arg1 animate:(bool)arg2 keepAllCurrentlyLoadedMessages:(bool)arg3;
- (void)showConversation:(CKConversation *)arg1 animate:(bool)arg2 userInitiated:(bool)arg3;
- (void)showConversationAndMessageForChatGUID:(NSString *)arg1 messageGUID:(NSString *)arg2 animate:(bool)arg3;
- (void)showConversationAndMessageForChatGUID:(NSString *)arg1 messageGUID:(NSString *)arg2 withInlineReplyOverlay:(bool)arg3 animate:(bool)arg4;
- (void)showConversationInNewWindow:(CKConversation *)arg1;
- (void)showConversationListWithAnimation:(bool)arg1;
- (void)showInboxViewControllerAnimated:(bool)arg1;
- (void)showLockdownAlertForBusinessChat;
- (void)showNewMessageCompositionPanel;
- (void)showNewMessageCompositionPanelAppendingToExistingDraft:(CKComposition *)arg1 animated:(bool)arg2;
- (void)showNewMessageCompositionPanelWithRecipients:(NSArray *)arg1 composition:(CKComposition *)arg2 animated:(bool)arg3;
- (void)showNewMessageCompositionPanelWithRecipients:(NSArray *)arg1 composition:(CKComposition *)arg2 suggestedReplies:(NSArray *)arg3 animated:(bool)arg4;
- (void)showNewMessageCompositionPanelWithRecipients:(void *)arg1 composition:(void *)arg2 suggestedReplies:(void *)arg3 animated:(void *)arg4 bizIntent:(void *)arg5 launchPluginWithBundleID:(void *)arg6 pluginLaunchPayload:(void *)arg7 sendMessageHandler:(void *)arg8; // needs 8 arg types, found 12: NSArray *, CKComposition *, NSArray *, bool, NSDictionary *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showNewMessageCompositionPanelWithRecipients:(void *)arg1 composition:(void *)arg2 suggestedReplies:(void *)arg3 animated:(void *)arg4 bizIntent:(void *)arg5 launchPluginWithBundleID:(void *)arg6 pluginLaunchPayload:(void *)arg7 simID:(void *)arg8 sendMessageHandler:(void *)arg9; // needs 9 arg types, found 13: NSArray *, CKComposition *, NSArray *, bool, NSDictionary *, NSString *, NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showNewMessageCompositionPanelWithRecipients:(void *)arg1 composition:(void *)arg2 suggestedReplies:(void *)arg3 animated:(void *)arg4 sendMessageHandler:(void *)arg5; // needs 5 arg types, found 9: NSArray *, CKComposition *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showStoreForURL:(NSURL *)arg1 fromSourceApplication:(NSString *)arg2;
- (void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(NSString *)arg2;
- (bool)showUnreadConversationsWithLastConversation:(CKConversation *)arg1 ignoringMessages:(NSArray *)arg2;

@end
