
@interface CKEffectSelectionCollectionViewCell : UICollectionViewCell {
    UIImageView * _imageView;
    UILabel * _label;
    CAShapeLayer * _selectionLayer;
    UIView * _shadowView;
    UIVisualEffectView * _titleContainerView;
    UIVibrancyEffect * _titleVibrancyEffect;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) CAShapeLayer *selectionLayer;
@property (nonatomic, retain) UIView *shadowView;
@property (nonatomic, retain) UIVisualEffectView *titleContainerView;
@property (nonatomic, retain) UIVibrancyEffect *titleVibrancyEffect;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (void)configureForEffectIsDark:(bool)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (id)selectionLayer;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionLayer:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleContainerView:(id)arg1;
- (void)setTitleVibrancyEffect:(id)arg1;
- (id)shadowView;
- (id)titleContainerView;
- (id)titleVibrancyEffect;

@end
