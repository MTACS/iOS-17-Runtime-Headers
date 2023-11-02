
@protocol CKConversationSearchCellProtocol <NSObject>

@required

- (CKAvatarView *)avatarView;
- (void)configureWithQueryResult:(CKSpotlightQueryResult *)arg1 searchText:(NSString *)arg2;
- (<CKConversationSearchCellDelegate> *)delegate;
- (CKLabel *)fromLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setDelegate:(id <CKConversationSearchCellDelegate>)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
