
@protocol PHPersonPropertySet <PHObjectPropertySet>

@required

+ (NSString *)propertySetName;

- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 person:(PHPerson *)arg2 prefetched:(bool)arg3;

@end
