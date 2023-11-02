
@interface NTKAstronomyVistaEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long astronomyVista;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithAstronomyVista:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)astronomyVista;
- (long long)swatchStyle;

@end
