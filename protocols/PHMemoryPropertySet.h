
@protocol PHMemoryPropertySet <PHObjectPropertySet>

@required

+ (NSString *)propertySetName;

- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 memory:(PHMemory *)arg2 prefetched:(bool)arg3;

@end
