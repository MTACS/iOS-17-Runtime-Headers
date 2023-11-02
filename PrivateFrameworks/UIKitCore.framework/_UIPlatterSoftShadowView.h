
@interface _UIPlatterSoftShadowView : UIView {
    UIView * _backgroundView;
    _UIPlatterShadowView * _diffuseShadowView;
    bool  _needsPunchOut;
    _UIPlatterShadowView * _rimShadowView;
    UIBezierPath * _shadowPath;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) _UIPlatterShadowView *diffuseShadowView;
@property (nonatomic) bool needsPunchOut;
@property (nonatomic, readonly) _UIPlatterShadowView *rimShadowView;
@property (nonatomic, copy) UIBezierPath *shadowPath;

- (void).cxx_destruct;
- (void)_updateForShadowPath;
- (id)backgroundView;
- (id)diffuseShadowView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shadowPath:(id)arg2;
- (bool)needsPunchOut;
- (id)rimShadowView;
- (void)setNeedsPunchOut:(bool)arg1;
- (void)setShadowPath:(id)arg1;
- (id)shadowPath;

@end
