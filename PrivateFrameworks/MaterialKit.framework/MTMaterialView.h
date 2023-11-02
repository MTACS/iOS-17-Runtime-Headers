
@interface MTMaterialView : UIView <MTVisualStylingProviding, NSCopying, SBReusableView, SBSpotlightBackgroundWeighting> {
    UIViewFloatAnimatableProperty * _backdropFloatAnimatableProperty;
    NSMutableDictionary * _cmVisualStyleCategoriesToProviders;
    NSString * _groupNameBase;
    UIView * _highlightView;
    bool  _highlighted;
    bool  _needsLayoutOnMoveToWindow;
    NSHashTable * _observers;
    long long  _recipe;
    NSBundle * _recipeBundle;
    bool  _recipeDynamic;
    NSDictionary * _recipeNamesByTraitCollection;
    bool  _shadowed;
    bool  _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
}

@property (getter=_backdropFloatAnimatableProperty, nonatomic, retain) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty;
@property (nonatomic, copy) id /* block */ backdropScaleAdjustment;
@property (getter=isBlurEnabled, nonatomic) bool blurEnabled;
@property (getter=isCaptureOnly, nonatomic) bool captureOnly;
@property (getter=isContentReplacedWithSnapshot, nonatomic) bool contentReplacedWithSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceCrossfadeIfNecessary;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupNameBase;
@property (nonatomic) bool hasInoperativeAppearance;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool ignoresScreenClip;
@property (getter=isInPlaceFilteringEnabled, nonatomic) bool inPlaceFilteringEnabled;
@property (getter=_materialLayer, nonatomic, readonly) MTMaterialLayer *materialLayer;
@property (nonatomic) long long recipe;
@property (getter=isRecipeDynamic, nonatomic) bool recipeDynamic;
@property (nonatomic, copy) NSString *recipeName;
@property (getter=isShadowed, nonatomic) bool shadowed;
@property (nonatomic) bool shouldCrossfade;
@property (nonatomic) bool shouldCrossfadeIfNecessary;
@property (nonatomic) double spotlightBackgroundWeighting;
@property (readonly) Class superclass;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
@property (nonatomic) double weighting;
@property (getter=isZoomEnabled, nonatomic) bool zoomEnabled;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

+ (id)_deprecatedControlCenterMaterialWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (bool)_isWorkaroundRequiredForRecipe:(long long)arg1;
+ (id)_recipeNameForTraitCollection:(id)arg1 withRecipeNamesByTraitCollection:(id)arg2;
+ (void)initialize;
+ (Class)layerClass;
+ (id)materialViewWithRecipe:(long long)arg1;
+ (id)materialViewWithRecipe:(long long)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4 compatibleWithTraitCollection:(id)arg5;
+ (id)materialViewWithRecipeNamed:(id)arg1;
+ (id)materialViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
+ (id)materialViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 options:(unsigned long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 compatibleWithTraitCollection:(id)arg2 bundle:(id)arg3 configuration:(long long)arg4 initialWeighting:(double)arg5 scaleAdjustment:(id /* block */)arg6;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 options:(unsigned long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5 compatibleWithTraitCollection:(id)arg6;
+ (id)materialViewWithVisualStyleFromRecipe:(long long)arg1 category:(long long)arg2 style:(long long)arg3 options:(unsigned long long)arg4 initialWeighting:(double)arg5 compatibleWithTraitCollection:(id)arg6;
+ (id)newDefaultHighlightAnimator;
+ (id)staticMaterialViewWithRecipe:(long long)arg1;
+ (id)staticMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (id)_backdropFloatAnimatableProperty;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)arg1;
- (id)_groupNameWithBase:(id)arg1;
- (id)_initWithCoreMaterialRecipe:(id)arg1 fromBundle:(id)arg2 options:(unsigned long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
- (id)_initWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4 compatibleWithTraitCollection:(id)arg5;
- (id)_initWithRecipeNamesByTraitCollection:(id)arg1 bundle:(id)arg2 options:(unsigned long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5 compatibleWithTraitCollection:(id)arg6;
- (void)_invalidateAlphaTransformer;
- (id)_materialLayer;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (unsigned long long)_options;
- (id)_recipeNameForCurrentTraitCollection;
- (void)_reduceMotionStatusDidChange;
- (void)_reduceTransparencyStatusDidChange;
- (void)_removeObserver:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setRecipeName:(id)arg1 withWeighting:(double)arg2;
- (void)_setupAlphaTransformer;
- (void)_setupOrInvalidateAlphaTransformer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateGroupNameIfNecessary;
- (void)_updateRecipeNameIfNeeded;
- (bool)addCompletionForCurrentAnimation:(id /* block */)arg1 forMaterialLayer:(id)arg2 reason:(out id*)arg3;
- (id /* block */)backdropScaleAdjustment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugIdentifier;
- (id)description;
- (void)didMoveToWindow;
- (bool)forceCrossfadeIfNecessary;
- (id)groupName;
- (id)groupNameBase;
- (bool)hasInoperativeAppearance;
- (bool)ignoresScreenClip;
- (id)init;
- (bool)isBlurEnabled;
- (bool)isCaptureOnly;
- (bool)isContentReplacedWithSnapshot;
- (bool)isHighlighted;
- (bool)isInPlaceFilteringEnabled;
- (bool)isManagingInterpolationForMaterialLayer:(id)arg1;
- (bool)isManagingOpacityForMaterialLayer:(id)arg1;
- (bool)isRecipeDynamic;
- (bool)isShadowed;
- (bool)isZoomEnabled;
- (void)layoutSubviews;
- (bool)managesWeightingForMaterialLayer:(id)arg1;
- (id)newShadowView;
- (id)newShadowViewWithCaptureOnlyMaterialView:(bool)arg1;
- (void)prune;
- (long long)recipe;
- (id)recipeName;
- (void)setBackdropFloatAnimatableProperty:(id)arg1;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setBlurEnabled:(bool)arg1;
- (void)setCaptureOnly:(bool)arg1;
- (void)setContentReplacedWithSnapshot:(bool)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setForceCrossfadeIfNecessary:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupNameBase:(id)arg1;
- (void)setHasInoperativeAppearance:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIgnoresScreenClip:(bool)arg1;
- (void)setInPlaceFilteringEnabled:(bool)arg1;
- (void)setRecipe:(long long)arg1;
- (void)setRecipeDynamic:(bool)arg1;
- (void)setRecipeName:(id)arg1;
- (void)setShadowed:(bool)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setShouldCrossfadeIfNecessary:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(bool)arg1;
- (void)setWeighting:(double)arg1;
- (void)setZoomEnabled:(bool)arg1;
- (bool)shouldCrossfade;
- (bool)shouldCrossfadeIfNecessary;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (double)weighting;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)tileCellToggleSizeButtonMaterialViewForTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_dockView;
+ (id)pbf_iconView;
+ (id)pbf_materialView;

- (void)pbf_scaleBlurRadiusByAmount:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoardUI.framework/PosterBoardUI

+ (id)prui_homeScreenLegibilityMaterialView;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)setSpotlightBackgroundWeighting:(double)arg1;
- (double)spotlightBackgroundWeighting;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (void)prepareForReuse;

@end
