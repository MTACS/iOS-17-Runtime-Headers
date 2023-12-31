
@protocol PHAssetPropertySet <PHObjectPropertySet>

@required

+ (NSString *)propertySetName;

- (PHAsset *)asset;
- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 asset:(PHAsset *)arg2 prefetched:(bool)arg3;

@end
