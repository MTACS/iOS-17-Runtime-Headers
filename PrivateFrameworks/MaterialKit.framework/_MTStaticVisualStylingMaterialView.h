
@interface _MTStaticVisualStylingMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving, MTVisualStylingRequiring> {
    MTCoreMaterialVisualStylingProvider * _contentVisualStylingProvider;
    NSString * _recipeName;
    NSMutableDictionary * _visualStyleCategoriesToCoreMaterialProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_initWithCoreMaterialRecipe:(id)arg1 fromBundle:(id)arg2 options:(unsigned long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
- (void)_invalidateContentVisualStyling;
- (id)_materialLayer;
- (void)_setCoreMaterialVisualStylingProvider:(id)arg1 ForCategory:(id)arg2;
- (void)_updateContentVisualStylingIfNecessary;
- (void)_updateContentVisualStylingWithProvider:(id)arg1;
- (void)_updateCoreMaterialVisualStylingProviders;
- (id /* block */)backdropScaleAdjustment;
- (void)didMoveToSuperview;
- (bool)ignoresScreenClip;
- (bool)isBlurEnabled;
- (bool)isCaptureOnly;
- (bool)isContentReplacedWithSnapshot;
- (bool)isZoomEnabled;
- (void)layoutSubviews;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (id)recipeName;
- (id)requiredVisualStyleCategories;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setBlurEnabled:(bool)arg1;
- (void)setCaptureOnly:(bool)arg1;
- (void)setContentReplacedWithSnapshot:(bool)arg1;
- (void)setIgnoresScreenClip:(bool)arg1;
- (void)setRecipe:(long long)arg1;
- (void)setRecipeName:(id)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)setZoomEnabled:(bool)arg1;
- (bool)shouldCrossfade;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;

@end
