
@interface CKAvatarShadowClippingCollectionReusableView : UICollectionReusableView {
    UIImageView * _imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;

+ (id)decorationViewKind;
+ (struct CGSize { double x1; double x2; })shadowSize;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
