
@interface NTKKaleidoscopeAssetOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long asset;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithAsset:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)asset;
- (bool)optionExistsInDevice:(id)arg1;
- (long long)swatchStyle;

@end
