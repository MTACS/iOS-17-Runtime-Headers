
@interface NTKDateAlignmentEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long alignment;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithAlignment:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)alignment;

@end
