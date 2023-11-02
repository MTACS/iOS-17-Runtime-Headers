
@interface AVTPoseCollectionViewCell : UICollectionViewCell {
    NSUUID * _contextIdentifier;
    UIImage * _image;
    UIImageView * _imageView;
    UIViewPropertyAnimator * _scaleDownTransformAnimator;
    UIViewPropertyAnimator * _scaleUpWithBounceTransformAnimator;
    CAShapeLayer * _selectionLayer;
    UIImageView * _transitionImageView;
}

@property (nonatomic, retain) NSUUID *contextIdentifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIViewPropertyAnimator *scaleDownTransformAnimator;
@property (nonatomic, retain) UIViewPropertyAnimator *scaleUpWithBounceTransformAnimator;
@property (nonatomic, retain) CAShapeLayer *selectionLayer;
@property (nonatomic, retain) UIImageView *transitionImageView;

+ (struct CGPath { }*)selectionPathInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)cancelAnimations;
- (id)contextIdentifier;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)scaleDownTransformAnimator;
- (id)scaleUpWithBounceTransformAnimator;
- (id)selectionLayer;
- (void)setContextIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setScaleDownTransformAnimator:(id)arg1;
- (void)setScaleUpWithBounceTransformAnimator:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionLayer:(id)arg1;
- (void)setTransitionImageView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionImageView;
- (void)updateImage:(id)arg1 animated:(bool)arg2;

@end
