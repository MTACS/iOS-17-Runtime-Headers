
@interface NTKDensityEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long density;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithDensity:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)density;
- (long long)swatchStyle;

@end
