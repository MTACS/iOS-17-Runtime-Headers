
@interface NTKFaceViewComplicationFactory : NSObject {
    double  _alpha;
    id /* block */  _alphaProviderBlock;
    double  _contentSpecificAnimationDuration;
    CLKDevice * _device;
    UIColor * _foregroundColor;
    id /* block */  _foregroundColorProviderBlock;
    UIColor * _platterColor;
    id /* block */  _platterColorProviderBlock;
}

@property (nonatomic) double alpha;
@property (nonatomic, copy) id /* block */ alphaProviderBlock;
@property (nonatomic) double contentSpecificAnimationDuration;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, copy) id /* block */ foregroundColorProviderBlock;
@property (nonatomic, retain) UIColor *platterColor;
@property (nonatomic, copy) id /* block */ platterColorProviderBlock;

+ (id)_genericComplicationAnimationWithDuration:(double)arg1 applier:(id /* block */)arg2;

- (void).cxx_destruct;
- (double)alpha;
- (id /* block */)alphaProviderBlock;
- (void)applyComplicationContentSpecificAttributesAnimated:(bool)arg1 attributes:(unsigned long long)arg2 faceView:(id)arg3;
- (void)applyComplicationContentSpecificAttributesAnimated:(bool)arg1 faceView:(id)arg2;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (double)contentSpecificAnimationDuration;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3;
- (id)detachedComplicationDisplaysForFaceView:(id)arg1;
- (id)device;
- (bool)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3;
- (id)foregroundColor;
- (id /* block */)foregroundColorProviderBlock;
- (id)initForDevice:(id)arg1;
- (double)keylineCornerRadiusForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 faceView:(id)arg3;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (double)minimumBreathingScaleForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (id)platterColor;
- (id /* block */)platterColorProviderBlock;
- (void)prepareForEditingForFaceView:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (void)setAlphaProviderBlock:(id /* block */)arg1;
- (void)setContentSpecificAnimationDuration:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)setForegroundColorProviderBlock:(id /* block */)arg1;
- (void)setPlatterColor:(id)arg1;
- (void)setPlatterColor:(id)arg1 faceView:(id)arg2;
- (void)setPlatterColorProviderBlock:(id /* block */)arg1;

@end
