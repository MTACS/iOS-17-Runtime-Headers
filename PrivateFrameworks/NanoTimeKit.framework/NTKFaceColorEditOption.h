
@interface NTKFaceColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long faceColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)__allOrderedColors;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_optionByValidatingValueOfInvalidOption:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_thirdPartyValues;
+ (id)optionByValidatingValueOfInvalidOption:(id)arg1;
+ (id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)pigmentFaceDomain;
+ (id)standardColorEditOptionsForDevice:(id)arg1;
+ (id)standardColorValuesForDevice:(id)arg1;
+ (id)standardColorsWithColorClass:(Class)arg1 forDevice:(id)arg2;
+ (bool)value:(long long)arg1 existsInDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)faceColor;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (bool)optionExistsInDevice:(id)arg1;
- (id)pigmentEditOption;
- (long long)swatchStyle;

@end
