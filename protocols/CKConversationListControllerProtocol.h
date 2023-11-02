
@protocol CKConversationListControllerProtocol <NSObject>

@required

- (void)batchDeleteButtonTapped:(id)arg1;
- (void)beginHoldingConversationListUpdatesForPPTTests;
- (void)composeButtonClicked:(id)arg1;
- (void)compositionSent;
- (CKConversationList *)conversationList;
- (void)conversationWillBeMarkedRead:(CKConversation *)arg1;
- (NSString *)deferredSearchQuery;
- (<CKConversationListControllerDelegate> *)delegate;
- (void)deleteSelectedConversation;
- (void)endHoldingConversationListUpdatesForPPTTests;
- (unsigned long long)filterMode;
- (bool)isSearchActive;
- (bool)isSearchActiveAndDisplayingResultsForSearchText;
- (bool)isVisible;
- (void)performResumeDeferredSetup;
- (void)performSearch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)registerForCloudKitEventsImmediately;
- (void)reloadData;
- (void)removePendingConversationCell;
- (UISearchController *)searchController;
- (CKSearchViewController *)searchResultsController;
- (void)selectDefaultConversationAnimated:(bool)arg1;
- (void)selectDefaultConversationAnimated:(bool)arg1 removingPendingConversationCell:(bool)arg2;
- (void)selectFirstActiveConversation;
- (void)selectNextSequentialConversation:(bool)arg1;
- (void)selectPinnedConversationForItem:(long long)arg1;
- (void)setDeferredSearchQuery:(NSString *)arg1;
- (void)setDelegate:(id <CKConversationListControllerDelegate>)arg1;
- (void)setFilterMode:(unsigned long long)arg1;
- (void)showMeCardViewController;
- (void)significantTimeChange;
- (void)updateConversationList;
- (void)updateConversationListForMessageSentToConversation:(CKConversation *)arg1;
- (void)updateConversationSelection;
- (void)updateConversationSelectionToNewCompose;
- (void)updateNavigationItems;
- (void)updateSyncProgressIfNeeded;
- (void)userDeletedJunkConversationFromTranscript;
- (void)userRecoveredJunkConversationFromTranscript;

@end
