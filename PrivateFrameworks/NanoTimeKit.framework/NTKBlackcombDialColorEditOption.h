
@interface NTKBlackcombDialColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long blackcombDialColor;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithBlackcombDialColor:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)blackcombDialColor;
- (long long)swatchStyle;

@end
