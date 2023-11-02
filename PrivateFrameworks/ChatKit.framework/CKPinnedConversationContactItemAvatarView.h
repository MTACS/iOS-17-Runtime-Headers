
@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView> {
    <CKPinnedConversationContactItem> * _pinnedConversationContactItem;
}

@property (nonatomic, retain) <CKPinnedConversationContactItem> *pinnedConversationContactItem;

- (void).cxx_destruct;
- (void)_updateContactItemViewShadows;
- (id)init;
- (id)pinnedConversationContactItem;
- (void)setPinnedConversationContactItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
