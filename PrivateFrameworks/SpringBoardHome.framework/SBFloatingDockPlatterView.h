
@interface SBFloatingDockPlatterView : UIView {
    UIView * _backgroundView;
    bool  _hasShadow;
    double  _maximumContinuousCornerRadius;
    _SBFloatingDockPlatterMetrics * _metrics;
    double  _referenceHeight;
    NSMutableDictionary * _shadowImages;
    UIImageView * _shadowView;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, copy) NSString *backdropGroupNamespace;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) double currentContinuousCornerRadius;
@property (nonatomic) bool hasShadow;
@property (nonatomic) double maximumContinuousCornerRadius;
@property (nonatomic, retain) _SBFloatingDockPlatterMetrics *metrics;
@property (nonatomic) double referenceHeight;
@property (nonatomic, readonly) NSMutableDictionary *shadowImages;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } shadowOutsets;
@property (nonatomic, retain) UIImageView *shadowView;

+ (id)borderColorForUserInterfaceStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)_maxShadowViewAlpha;
- (id)_metricsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_shadowImageForMetrics:(id)arg1 previousMetrics:(id)arg2;
- (id)_shadowImageViewForMetrics:(id)arg1 previousMetrics:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsetsForMetrics:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowOutsetsForMetrics:(id)arg1;
- (id)backdropGroupName;
- (id)backdropGroupNamespace;
- (id)backgroundView;
- (double)currentContinuousCornerRadius;
- (bool)hasShadow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maximumContinuousCornerRadius;
- (id)metrics;
- (double)referenceHeight;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackdropGroupNamespace:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setMaximumContinuousCornerRadius:(double)arg1;
- (void)setMetrics:(id)arg1;
- (void)setReferenceHeight:(double)arg1;
- (void)setShadowView:(id)arg1;
- (id)shadowImages;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowOutsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowOutsetsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)shadowView;
- (void)updateBorderVisualStyling;

@end
