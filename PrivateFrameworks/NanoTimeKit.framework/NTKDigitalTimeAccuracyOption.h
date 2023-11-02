
@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long accuracy;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (long long)indexForAccuracy:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithAccuracy:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)accuracy;

@end
