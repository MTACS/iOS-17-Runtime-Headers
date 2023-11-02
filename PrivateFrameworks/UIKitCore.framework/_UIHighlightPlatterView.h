
@interface _UIHighlightPlatterView : UIView {
    double  _backgroundAlpha;
    UIView * _backgroundView;
    _UIPortalView * _portalView;
    double  _shadowAlpha;
    _UIPlatterSoftShadowView * _shadowView;
    UITargetedPreview * _targetedPreview;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic) double shadowAlpha;
@property (nonatomic, retain) _UIPlatterSoftShadowView *shadowView;
@property (nonatomic, retain) UITargetedPreview *targetedPreview;

- (void).cxx_destruct;
- (bool)_isEligibleForFocusOcclusion;
- (double)backgroundAlpha;
- (id)backgroundView;
- (id)initWithTargetedPreview:(id)arg1;
- (id)portalView;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setPortalView:(id)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTargetedPreview:(id)arg1;
- (double)shadowAlpha;
- (id)shadowView;
- (id)targetedPreview;

@end
