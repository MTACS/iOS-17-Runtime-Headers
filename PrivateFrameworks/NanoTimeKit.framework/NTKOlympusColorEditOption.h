
@interface NTKOlympusColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (nonatomic, readonly) unsigned long long color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)colorCodeForPigmentEditOption:(id)arg1 forDevice:(id)arg2;
+ (id)colorNameForColorValue:(unsigned long long)arg1;
+ (id)colorNameForColorValue:(unsigned long long)arg1 collectionName:(id*)arg2;
+ (id)optionWithOlympusColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)pigmentFaceDomain;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)color;
- (id)localizedName;
- (bool)optionExistsInDevice:(id)arg1;
- (id)pigmentEditOption;
- (long long)swatchStyle;

@end
