
@interface CNContactSuggestionsCollectionViewCell : UICollectionViewCell {
    UIImageView * _avatarView;
    UIImageView * _checkImageBackgroundView;
    UIImageView * _checkImageView;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) UIImageView *avatarView;
@property (nonatomic, retain) UIImageView *checkImageBackgroundView;
@property (nonatomic, retain) UIImageView *checkImageView;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UILabel *nameLabel;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)avatarView;
- (id)checkImageBackgroundView;
- (id)checkImageView;
- (id)displayString;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setAvatarView:(id)arg1;
- (void)setCheckImageBackgroundView:(id)arg1;
- (void)setCheckImageView:(id)arg1;
- (void)setCheckMarkHidden:(bool)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUpCheckMarkConstraints;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useAccessibleLayout;

@end
