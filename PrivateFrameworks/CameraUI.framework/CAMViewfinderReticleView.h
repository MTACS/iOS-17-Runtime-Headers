
@interface CAMViewfinderReticleView : UIView {
    UIImageView * __bottomLeftCornerView;
    UIView * __bottomMaskingView;
    UIImageView * __bottomRightCornerView;
    UIImageView * __topLeftCornerView;
    UIView * __topMaskingView;
    UIImageView * __topRightCornerView;
    UIImageView * __viewportBorderView;
    bool  _cornersVisible;
    long long  _material;
    double  _viewportBottomInset;
    double  _viewportTopInset;
}

@property (nonatomic, readonly) UIImageView *_bottomLeftCornerView;
@property (nonatomic, readonly) UIView *_bottomMaskingView;
@property (nonatomic, readonly) UIImageView *_bottomRightCornerView;
@property (nonatomic, readonly) UIImageView *_topLeftCornerView;
@property (nonatomic, readonly) UIView *_topMaskingView;
@property (nonatomic, readonly) UIImageView *_topRightCornerView;
@property (nonatomic, readonly) UIImageView *_viewportBorderView;
@property (nonatomic) bool cornersVisible;
@property (nonatomic) long long material;
@property (nonatomic, readonly) double viewportBottomInset;
@property (nonatomic, readonly) double viewportTopInset;

- (void).cxx_destruct;
- (id)_bottomLeftCornerView;
- (id)_bottomMaskingView;
- (id)_bottomRightCornerView;
- (id)_newViewportCornerImage;
- (id)_newViewportTemplateImage;
- (id)_topLeftCornerView;
- (id)_topMaskingView;
- (id)_topRightCornerView;
- (void)_updateMaterialOpacityWithDuration:(double)arg1;
- (id)_viewportBorderView;
- (bool)cornersVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)material;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCornersVisible:(bool)arg1;
- (void)setCornersVisible:(bool)arg1 animated:(bool)arg2;
- (void)setMaterial:(long long)arg1;
- (void)setMaterial:(long long)arg1 withDuration:(double)arg2;
- (void)setViewportTopInset:(double)arg1 bottomInset:(double)arg2 animated:(bool)arg3;
- (double)viewportBottomInset;
- (double)viewportTopInset;

@end
