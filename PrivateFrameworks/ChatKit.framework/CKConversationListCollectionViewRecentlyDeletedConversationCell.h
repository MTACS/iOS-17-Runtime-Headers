
@interface CKConversationListCollectionViewRecentlyDeletedConversationCell : CKConversationListCollectionViewRecoverableConversationCell

- (id)_attributedStringForRecoverableSummaryLabelWithText:(id)arg1;
- (unsigned long long)_daysUntilDeletion:(id)arg1;
- (bool)hasUnreadMessagesForConversation:(id)arg1;
- (bool)shouldAlwaysHideAvatar;
- (bool)shouldAlwaysHideUnreadIndicatorForConversation:(id)arg1;
- (void)updateSummaryLabel:(id)arg1 conversation:(id)arg2 fastPreview:(bool)arg3;

@end
