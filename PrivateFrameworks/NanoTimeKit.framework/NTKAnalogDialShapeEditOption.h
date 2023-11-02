
@interface NTKAnalogDialShapeEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long dialShape;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithShape:(unsigned long long)arg1 forDevice:(id)arg2;

- (unsigned long long)_value;
- (id)_valueToFaceBundleStringDict;
- (unsigned long long)dialShape;
- (long long)swatchStyle;

@end
