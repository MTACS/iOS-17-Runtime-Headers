
@interface CKConversationListCollectionViewRecoverableConversationCell : CKConversationListCollectionViewConversationCell

+ (id)reuseIdentifier;
+ (id)reuseIdentifierForAXFontSize:(bool)arg1;
+ (id)reuseIdentifiers;

- (unsigned long long)_daysUntilDeletion:(id)arg1;
- (bool)shouldAlwaysHideAvatar;
- (bool)shouldAlwaysHideUnreadIndicatorForConversation:(id)arg1;
- (bool)shouldAppearAsRecoverableConversation;
- (void)updateDateLabel:(id)arg1 conversation:(id)arg2;

@end
