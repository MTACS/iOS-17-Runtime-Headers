
@protocol CKConversationListEmbeddedTableViewCellProtocol <NSObject>

@required

- (CKAvatarView *)avatarView;
- (bool)avatarView:(CKAvatarView *)arg1 shouldShowContact:(CNContact *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (NSObject<CKConversationListCellDelegate> *)delegate;
- (void)didHoverOverCell:(UIHoverGestureRecognizer *)arg1;
- (void)forceUnreadIndicatorVisibility:(bool)arg1 forConversation:(CKConversation *)arg2 animated:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(NSObject<CKConversationListCellDelegate> *)arg1;
- (void)setEditingPins:(bool)arg1 animated:(bool)arg2;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldHidePreviewSummary:(bool)arg1;
- (bool)shouldHidePreviewSummary;
- (UIColor *)summaryLabelTextColor;
- (void)updateContentsForConversation:(CKConversation *)arg1;
- (void)updateContentsForConversation:(CKConversation *)arg1 fastPreview:(bool)arg2;

@end
