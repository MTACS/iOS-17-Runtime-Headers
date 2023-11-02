
@interface HFColorControlItem : HFControlItem

@property (nonatomic, readonly) <HFColorProfile> *colorProfile;
@property (nonatomic) bool naturalLightingEnabled;
@property (nonatomic, readonly) bool supportsNaturalLighting;
@property (nonatomic, readonly) bool supportsRGBColor;

+ (id)colorCharacteristicTypes;
+ (id)na_identity;
+ (Class)valueClass;

- (void)_logForNaturalLightUserStudy:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)colorProfile;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (bool)naturalLightingEnabled;
- (id)normalizedValueForValue:(id)arg1;
- (void)setNaturalLightingEnabled:(bool)arg1;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (bool)supportsNaturalLighting;
- (bool)supportsRGBColor;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;

@end
