
@protocol CKConversationListCollectionViewCellDelegate <NSObject>

@required

- (double)widthForDeterminingAvatarVisibility;

@optional

- (void)avatarHeaderWasTappedForConversation:(CKConversation *)arg1;
- (void)selectedDeleteButtonForConversation:(CKConversation *)arg1 inCell:(UICollectionViewCell *)arg2;

@end
