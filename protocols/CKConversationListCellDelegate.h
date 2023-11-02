
@protocol CKConversationListCellDelegate <NSObject>

@required

- (double)widthForDeterminingAvatarVisibility;

@optional

- (void)avatarHeaderWasTappedForConversation:(CKConversation *)arg1 inCell:(CKConversationListCell *)arg2;
- (bool)hasUnreadMessagesForConversation:(CKConversation *)arg1;
- (void)selectedDeleteButtonForConversation:(CKConversation *)arg1 inCell:(UITableViewCell *)arg2;
- (bool)shouldAlwaysHideAvatar;
- (bool)shouldAlwaysHideUnreadIndicatorForConversation:(CKConversation *)arg1;
- (bool)shouldAppearAsRecoverableConversation;
- (void)updateDateLabel:(CKDateLabel *)arg1 conversation:(CKConversation *)arg2;
- (void)updateSummaryLabel:(UILabel *)arg1 conversation:(CKConversation *)arg2 fastPreview:(bool)arg3;

@end
