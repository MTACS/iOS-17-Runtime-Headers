
@interface UIPointerStyle : UIHoverStyle <NSCopying, _UIContentEffectDescriptor> {
    NSArray * _accessories;
    unsigned long long  _constrainedAxes;
    bool  _determineScaleAutomatically;
    unsigned long long  _options;
    UIPointerEffect * _pointerEffect;
    UIPointerShape * _pointerShape;
    bool  _suppressesMirroring;
    long long  _type;
}

@property (nonatomic) bool _suppressesMirroring;
@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic, readonly) NSArray *compatibleDescriptors;
@property (nonatomic) unsigned long long constrainedAxes;
@property (nonatomic, readonly) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) UIPointerEffect *pointerEffect;
@property (nonatomic, readonly) bool pointerMergesWithContent;
@property (nonatomic, retain) UIPointerShape *pointerShape;
@property (nonatomic, readonly) bool pointerUnderlapsContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITargetedPreview *targetedPreview;
@property (nonatomic) long long type;

+ (id)_systemPointerStyle;
+ (id)hiddenPointerStyle;
+ (id)styleWithEffect:(id)arg1 shape:(id)arg2;
+ (id)styleWithShape:(id)arg1 constrainedAxes:(unsigned long long)arg2;
+ (id)systemPointerStyle;

- (void).cxx_destruct;
- (void)_adaptForNonSystemEffectSupportingEnvironment;
- (struct CGPoint { double x1; double x2; })_contentSlipFactor;
- (struct CGPoint { double x1; double x2; })_contentSlipMappedToRegionSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_pointerIntensityForMaterialLuminance:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_pointerSlipFactor;
- (struct CGPoint { double x1; double x2; })_pointerSlipMappedToRegionSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_suppressesMirroring;
- (id)accessories;
- (bool)canTransitionInPlaceToEffectWithDescriptor:(id)arg1;
- (id)compatibleDescriptors;
- (unsigned long long)constrainedAxes;
- (double)contentScale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effect;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (id)pointerEffect;
- (bool)pointerMergesWithContent;
- (id)pointerShape;
- (bool)pointerUnderlapsContent;
- (void)setAccessories:(id)arg1;
- (void)setConstrainedAxes:(unsigned long long)arg1;
- (void)setEffect:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPointerEffect:(id)arg1;
- (void)setPointerShape:(id)arg1;
- (void)setType:(long long)arg1;
- (void)set_suppressesMirroring:(bool)arg1;
- (id)targetedPreview;
- (long long)type;

@end
