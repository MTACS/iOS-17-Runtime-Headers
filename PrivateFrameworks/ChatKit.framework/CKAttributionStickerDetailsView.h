
@interface CKAttributionStickerDetailsView : UIView {
    CKAvatarView * _avatarView;
    <CKAttributionStickerDetailsViewDelegate> * _delegate;
    UIButton * _deleteActionButton;
    UIButton * _downloadActionButton;
    CKAttributionImageView * _imageView;
    NSLayoutConstraint * _nameTrailingConstraint;
    UILabel * _senderNameLabel;
    UIButton * _showInStoreActionButton;
    CKAssociatedStickerChatItem * _stickerChatItem;
    UILabel * _stickerPackNameLabel;
}

@property (nonatomic, readonly) CKAvatarView *avatarView;
@property (nonatomic) <CKAttributionStickerDetailsViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *deleteActionButton;
@property (nonatomic, readonly) UIButton *downloadActionButton;
@property (nonatomic, readonly) CKAttributionImageView *imageView;
@property (nonatomic, retain) NSLayoutConstraint *nameTrailingConstraint;
@property (nonatomic, readonly) UILabel *senderNameLabel;
@property (nonatomic, readonly) UIButton *showInStoreActionButton;
@property (nonatomic, retain) CKAssociatedStickerChatItem *stickerChatItem;
@property (nonatomic, readonly) UILabel *stickerPackNameLabel;
@property (nonatomic, readonly, copy) NSArray *viewsToAnimate;

- (void).cxx_destruct;
- (id)_buttonWithImage:(id)arg1 tintColor:(id)arg2;
- (id)avatarView;
- (id)delegate;
- (id)deleteActionButton;
- (void)deleteButtonWasPressed:(id)arg1;
- (id)downloadActionButton;
- (void)downloadButtonWasPressed:(id)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nameTrailingConstraint;
- (void)prepareForReuse;
- (id)senderNameLabel;
- (void)setDelegate:(id)arg1;
- (void)setNameTrailingConstraint:(id)arg1;
- (void)setStickerChatItem:(id)arg1;
- (void)showInAppStoreButtonWasPressed:(id)arg1;
- (id)showInStoreActionButton;
- (id)stickerChatItem;
- (id)stickerPackNameLabel;
- (id)viewsToAnimate;

@end
