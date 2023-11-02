
@protocol PHObjectFetchPropertySets

@required

+ (void)extendPropertiesToFetch:(NSMutableArray *)arg1 withPropertySetClass:(Class)arg2;
+ (NSArray *)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(NSSet *)arg1;
+ (NSDictionary *)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(NSString *)arg1;
+ (NSSet *)propertySetsForPropertyFetchHints:(unsigned long long)arg1;

- (void)assertRequiredFetchPropertyHints:(unsigned long long)arg1;
- (void)fetchPropertySetsIfNeeded;
- (bool)hasLoadedPropertySet:(NSString *)arg1;

@end
