
@interface CKConversationListNewMessageCell : UITableViewCell <CKConversationListCellLayoutConfigurable> {
    CKAvatarView * _avatarView;
    CKConversationListCellLayout * _cellLayout;
    UIButton * _closeButton;
    CKConversation * _conversation;
    NSObject<CKConversationListCellDelegate> * _delegate;
}

@property (nonatomic, readonly) CKAvatarView *avatarView;
@property (nonatomic, retain) CKConversationListCellLayout *cellLayout;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (bool)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isCollapsed;
- (void)_updateLabelVisibility;
- (id)avatarView;
- (id)cellLayout;
- (id)closeButton;
- (id)conversation;
- (id)delegate;
- (void)deleteButtonTapped;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)leadingLayoutMargin;
- (void)setCellLayout:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (bool)showingEditControl;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateFontSize;
- (void)updateWithForwardedConfigurationState:(id)arg1;

@end
