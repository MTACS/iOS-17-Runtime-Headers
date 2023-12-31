
@protocol PHFacePropertySet <PHObjectPropertySet>

@required

+ (NSString *)propertySetName;

- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 face:(PHFace *)arg2 prefetched:(bool)arg3;

@end
