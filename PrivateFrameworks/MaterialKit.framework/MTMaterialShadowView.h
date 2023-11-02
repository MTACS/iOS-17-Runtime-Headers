
@interface MTMaterialShadowView : UIView <MTMaterialViewObserving> {
    MTMaterialView * _captureOnlyMaterialView;
    bool  _captureOnlyMaterialViewSuppliedByClient;
    MTMaterialView * _materialView;
    UIView * _shadowView;
}

@property (getter=isCaptureOnlyMaterialViewSuppliedByClient, nonatomic) bool captureOnlyMaterialViewSuppliedByClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MTMaterialView *materialView;
@property (nonatomic, copy) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) bool shadowPathIsBounds;
@property (nonatomic) double shadowRadius;
@property (readonly) Class superclass;

+ (id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2;
+ (id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3;
+ (id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (id)materialShadowViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
+ (id)materialShadowViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_configureCaptureOnlyMaterialViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)groupNameDidChangeForMaterialView:(id)arg1;
- (id)initWithMaterialView:(id)arg1;
- (bool)isCaptureOnlyMaterialViewSuppliedByClient;
- (void)layoutSubviews;
- (id)materialView;
- (void)recipeNameDidChangeForMaterialView:(id)arg1;
- (void)setCaptureOnlyMaterialViewSuppliedByClient:(bool)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowPathIsBounds:(bool)arg1;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (bool)shadowPathIsBounds;
- (double)shadowRadius;
- (void)weightingDidChangeForMaterialView:(id)arg1;

@end
