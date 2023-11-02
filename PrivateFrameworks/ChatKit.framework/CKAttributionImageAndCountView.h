
@interface CKAttributionImageAndCountView : UICollectionReusableView {
    CKAttributionCountView * _countView;
    CKAttributionImageView * _imageView;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) CKAttributionCountView *countView;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIColor *imageTintColor;
@property (nonatomic, readonly) CKAttributionImageView *imageView;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (long long)count;
- (id)countView;
- (id)image;
- (id)imageTintColor;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 imageTintColor:(id)arg2 count:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
