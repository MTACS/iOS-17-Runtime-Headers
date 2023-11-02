
@interface MKArtworkImageView : UIImageView {
    UIImageView * _cachedBadgeView;
    <MKArtworkImageSource> * _imageSource;
    UIColor * _primaryTintColor;
    UIColor * _secondaryTintColor;
}

@property (nonatomic, readonly) UIImageView *badgeView;
@property (nonatomic, retain) <MKArtworkImageSource> *imageSource;
@property (nonatomic, retain) UIColor *primaryTintColor;
@property (nonatomic, retain) UIColor *secondaryTintColor;

- (void).cxx_destruct;
- (void)_updateImageView;
- (id)badgeView;
- (id)imageSource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryTintColor;
- (id)secondaryTintColor;
- (void)setImage:(id)arg1;
- (void)setImageSource:(id)arg1;
- (void)setPrimaryTintColor:(id)arg1;
- (void)setSecondaryTintColor:(id)arg1;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;

@end
