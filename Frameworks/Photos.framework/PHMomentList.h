
@interface PHMomentList : PHCollectionList

+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (Class)changeRequestClass;
- (bool)collectionHasFixedOrder;
- (long long)collectionListType;
- (id)description;
- (bool)hasLocalizedTitle;
- (bool)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedLocationNames;
- (id)localizedTitle;

@end
