
@interface CNAutocompleteSuggestionsCell : UICollectionViewCell {
    UIImageView * _avatarView;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) UIImageView *avatarView;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UILabel *nameLabel;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)avatarView;
- (id)displayString;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nameLabel;
- (void)setAvatarView:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setupConstraints;
- (bool)useAccessibleLayout;

@end
