
@interface ConversationKit.InCallControlsStatusCell : UICollectionViewListCell {
    void $__lazy_storage_$_conversationStatusDetailsVStack;
    void $__lazy_storage_$_conversationStatusHStack;
    void $__lazy_storage_$_iconImageView;
    void $__lazy_storage_$_subtitleLabel;
    void $__lazy_storage_$_titleLabel;
    void actionButton;
    void faceTimeSymbolImage;
    void menuHostViewController;
    void sharePlaySymbolImage;
    void viewModel;
}

@property (nonatomic, retain) UIControl *actionButton;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)actionButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActionButton:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
