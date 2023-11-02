
@interface NTKDigitialUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKUtilityComplicationFactory * _complicationFactory;
    UIColor * _shadowColor;
    id /* block */  _shadowColorProviderBlock;
    NSArray * _supportedComplicationSlots;
    id /* block */  _timeTravelYAdjustmentProviderBlock;
    bool  _usesLegibility;
}

@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, copy) id /* block */ shadowColorProviderBlock;
@property (nonatomic, copy) NSArray *supportedComplicationSlots;
@property (nonatomic, copy) id /* block */ timeTravelYAdjustmentProviderBlock;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 attributes:(unsigned long long)arg3 faceView:(id)arg4;
- (long long)_photosUtilitySlotForSlot:(id)arg1;
- (double)_timeTravelYAdjustment;
- (void)applyComplicationContentSpecificAttributesAnimated:(bool)arg1 faceView:(id)arg2;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3;
- (bool)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3;
- (id)initForDevice:(id)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)prepareForEditingForFaceView:(id)arg1;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)setShadowColor:(id)arg1;
- (void)setShadowColor:(id)arg1 faceView:(id)arg2;
- (void)setShadowColorProviderBlock:(id /* block */)arg1;
- (void)setSupportedComplicationSlots:(id)arg1;
- (void)setTimeTravelYAdjustmentProviderBlock:(id /* block */)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (void)setUsesLegibility:(bool)arg1 faceView:(id)arg2;
- (id)shadowColor;
- (id /* block */)shadowColorProviderBlock;
- (id)supportedComplicationSlots;
- (id /* block */)timeTravelYAdjustmentProviderBlock;
- (bool)usesLegibility;

@end
