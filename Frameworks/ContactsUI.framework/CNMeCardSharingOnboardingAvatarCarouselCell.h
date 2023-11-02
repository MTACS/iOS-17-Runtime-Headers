
@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell {
    NSUUID * _displaySessionUUID;
    double  _imageInsetPercentage;
    UIImageView * _imageView;
    UILabel * _label;
}

@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double imageInsetPercentage;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, copy) NSString *title;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)displaySessionUUID;
- (id)image;
- (double)imageInsetPercentage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsetPercentage:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
