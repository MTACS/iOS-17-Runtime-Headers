
@interface CKConversationListCollectionViewConversationCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCell, CKConversationListCellDelegate> {
    _CKCollectionViewTapGestureRecognizer * _avatarViewTapGestureRecognizer;
    NSObject<CKConversationListCollectionViewCellDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
}

@property (nonatomic, retain) _CKCollectionViewTapGestureRecognizer *avatarViewTapGestureRecognizer;
@property (nonatomic, retain) CKConversationListCellLayout *cellLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKConversationListCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) bool shouldHidePreviewSummary;
@property (readonly) Class superclass;

+ (double)cellHeightForDisplayScale:(double)arg1;
+ (Class)conversationCellClassForCurrentSizeCategory;
+ (Class)embeddedTableViewCellClass;
+ (id)identifierForConversation:(id)arg1;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2;
- (id)avatarView;
- (bool)avatarView:(id)arg1 shouldShowContact:(id)arg2;
- (id)avatarViewTapGestureRecognizer;
- (id)delegate;
- (void)didHoverOverCell:(id)arg1;
- (id)embeddedConversationTableViewCell;
- (void)forceUnreadIndicatorVisibility:(bool)arg1 forConversation:(id)arg2 animated:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2;
- (void)setAvatarViewTapGestureRecognizer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingMode:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldHidePreviewSummary:(bool)arg1;
- (bool)shouldHidePreviewSummary;
- (id)summaryLabelTextColor;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(bool)arg2;
- (double)widthForDeterminingAvatarVisibility;

@end
