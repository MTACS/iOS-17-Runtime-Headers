
@interface PKTextInputFloatingBackgroundView : UIView {
    UIVisualEffectView * __blurView;
    UIView * __textureView;
}

@property (nonatomic, readonly) UIVisualEffectView *_blurView;
@property (nonatomic, readonly) UIView *_textureView;

- (void).cxx_destruct;
- (id)_blurView;
- (id)_textureView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
