
@protocol CKConversationListControllerDelegate <NSObject, CKMessagesNavigationProviding>

@required

- (void)catalystFiltersNavigationBackButtonTapped:(id)arg1;
- (id)composeChatController;
- (void)conversationListControllerTappedDeleteNewMessage:(UIViewController<CKConversationListControllerProtocol> *)arg1;
- (void)conversationListControllerWillDismissSearchResultsController;
- (void)conversationListControllerWillPresentSearchResultsController;
- (void)conversationListDidBeginMultipleSelectionWithInitialSelectedCount:(long long)arg1;
- (void)conversationListFailedToSelectShownConversation;
- (void)conversationListIsDeletingConversations:(NSArray *)arg1;
- (void)conversationListUpdatedSelectedIndexPathCount:(long long)arg1;
- (void)conversationListWillBeginEditing:(bool)arg1;
- (CKConversation *)currentConversation;
- (CKConversation *)currentlyShownConversation;
- (void)dismissConversationListAnimated:(bool)arg1;
- (void)dismissKeyboardIfVisible;
- (bool)hasDetailsNavigationController;
- (bool)isAnimatingMessageSend;
- (bool)isCollapsed;
- (bool)isDetailsNavigationControllerDetached;
- (bool)isShowingChatController;
- (bool)isShowingComposeChatController;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)showConversation:(CKConversation *)arg1 animate:(bool)arg2;
- (void)showConversation:(CKConversation *)arg1 animate:(bool)arg2 userInitiated:(bool)arg3;
- (void)showConversationAndMessageForChatGUID:(NSString *)arg1 messageGUID:(NSString *)arg2 animate:(bool)arg3;
- (void)showConversationInNewWindow:(CKConversation *)arg1;
- (void)updateCompositionInEntryViewWithComposition:(CKComposition *)arg1;
- (void)updateForNoConversationSelected;
- (void)updatedFilterMode:(unsigned long long)arg1 previousFilterMode:(unsigned long long)arg2;

@end
