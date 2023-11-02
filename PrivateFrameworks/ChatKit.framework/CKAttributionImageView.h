
@interface CKAttributionImageView : UICollectionReusableView {
    UIColor * _imageTintColor;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic, retain) UIImageView *imageView;

+ (struct CGSize { double x1; double x2; })preferredSizeForImage:(id)arg1;
+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (id)image;
- (id)imageTintColor;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 imageTintColor:(id)arg2;
- (void)setImageTintColor:(id)arg1;
- (void)setImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
