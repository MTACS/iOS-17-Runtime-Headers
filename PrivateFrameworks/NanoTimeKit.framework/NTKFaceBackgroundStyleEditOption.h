
@interface NTKFaceBackgroundStyleEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long backgroundStyle;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithBackgroundStyle:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)backgroundStyle;
- (long long)swatchStyle;

@end
