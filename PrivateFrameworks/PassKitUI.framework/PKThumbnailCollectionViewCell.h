
@interface PKThumbnailCollectionViewCell : PKDashboardCollectionViewCell {
    CNAvatarView * _avatarView;
    NSString * _identifier;
    UIImage * _image;
    UIImageView * _imageView;
    UILabel * _labelTitle;
    bool  _strokeImage;
    NSString * _title;
}

@property (nonatomic, readonly) CNAvatarView *avatarView;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_resetFonts;
- (void)_setupImageView:(id)arg1;
- (id)avatarView;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setStrokeImage:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)showAvatarView:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
