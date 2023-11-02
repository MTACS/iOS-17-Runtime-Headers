
@interface PLPlatterView : UIView <MTMaterialGrouping, MTVisualStylingProviding, MTVisualStylingRequiring, PLPlatter, PLPlatterInternal> {
    bool  _backgroundBlurred;
    UIView * _backgroundView;
    NSMutableDictionary * _categoriesToProviders;
    double  _cornerRadius;
    UIView * _customContentView;
    NSString * _materialGroupNameBase;
    long long  _materialRecipe;
    NSBundle * _recipeBundle;
    bool  _recipeDynamic;
    NSDictionary * _recipeNamesByTraitCollection;
    struct { 
        float opacity; 
        struct CGSize { 
            double width; 
            double height; 
        } offset; 
        double radius; 
    }  _shadowAttributes;
    MTShadowView * _shadowView;
    bool  _usesBackgroundView;
}

@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, readonly) MTMaterialShadowView *backgroundMaterialShadowView;
@property (nonatomic, readonly) MTMaterialView *backgroundMaterialView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasShadow;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic) long long materialRecipe;
@property (getter=isRecipeDynamic, nonatomic) bool recipeDynamic;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic) struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; } shadowAttributes;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } shadowOutsets;
@property (readonly) Class superclass;
@property (nonatomic) bool usesBackgroundView;

+ (id)platterViewWithBlurEffectStyle:(long long)arg1;
+ (id)platterViewWithStyle:(id)arg1;
+ (id)platterViewWithStyle:(id)arg1 inBundle:(id)arg2;

- (void).cxx_destruct;
- (void)_configureBackgroundView:(id)arg1;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureCustomContentView;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (double)_continuousCornerRadius;
- (id)_initWithBlurEffectStyle:(long long)arg1;
- (id)_initWithCarPlayBannerStyle;
- (id)_initWithNavigationBannerStyle;
- (id)_initWithNotificationsBannerStyle;
- (id)_initWithRecipe:(long long)arg1 orRecipeNamesByTraitCollection:(id)arg2 inBundle:(id)arg3;
- (void)_invalidateShadowView;
- (bool)_isMaterialViewSufficientlySpecified;
- (void)_layoutShadowView;
- (id)_newCarPlayBannerStrokeView;
- (id)_newDefaultBackgroundView;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_willRemoveCustomContent:(id)arg1;
- (id)backgroundMaterialShadowView;
- (id)backgroundMaterialView;
- (id)backgroundView;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)cornerRadius;
- (double)cornerRadius;
- (id)customContentView;
- (bool)hasShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRecipe:(long long)arg1;
- (id)initWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2;
- (bool)isBackgroundBlurred;
- (bool)isHighlighted;
- (bool)isRecipeDynamic;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (long long)materialRecipe;
- (id)requiredVisualStyleCategories;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setMaterialRecipe:(long long)arg1;
- (void)setRecipeDynamic:(bool)arg1;
- (void)setShadowAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1;
- (void)setUsesBackgroundView:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })shadowAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowOutsets;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesBackgroundView;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
