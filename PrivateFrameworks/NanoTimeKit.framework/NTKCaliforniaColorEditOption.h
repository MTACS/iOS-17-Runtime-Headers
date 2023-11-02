
@interface NTKCaliforniaColorEditOption : NTKFaceColorEditOption

@property (nonatomic, readonly) unsigned long long californiaColor;

+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_curatedColorValuesForDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)colorNameForColor:(unsigned long long)arg1;
+ (id)optionWithCaliforniaColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)pigmentFaceDomain;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)californiaColor;
- (bool)isPrideOption;
- (bool)optionExistsInDevice:(id)arg1;
- (id)pigmentEditOption;
- (long long)swatchStyle;

@end
