
@interface PXPeoplePickerCollectionViewCell : UICollectionViewCell {
    UIImageView * _badgeView;
    bool  _disabled;
    bool  _favorite;
    UIImageView * _favoriteBadgeView;
    UIImageView * _imageView;
    UILabel * _nameLabel;
}

@property (getter=isDisabled, nonatomic) bool disabled;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *nameLabel;

- (void).cxx_destruct;
- (void)_updateContentAlpha;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (bool)isFavorite;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
