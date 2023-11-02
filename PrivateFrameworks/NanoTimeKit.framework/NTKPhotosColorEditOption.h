
@interface NTKPhotosColorEditOption : NTKFaceColorEditOption

@property (nonatomic, readonly) unsigned long long color;

+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)originalColorName;
+ (id)pigmentFaceDomain;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)color;
- (id)pigmentEditOption;

@end
