
@interface PLLimitedLibraryFetchFilter : PLManagedObject {
    NSMutableOrderedSet * _assetUUIDs;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *designatedRequirement;
@property (nonatomic, retain) NSData *fetchFilterData;

+ (id)_assetUUIDStringsFromFetchFilterData:(id)arg1;
+ (id)_decodeFetchFilterData:(id)arg1 withUUIDHandler:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
+ (id)_fetchFiltersMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (id)debugDescriptionOfCurrentLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1;
+ (void)deleteAllLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1;
+ (void)deleteLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)disallowedAlbumKinds;
+ (id)entityName;
+ (id)entityNameToPredicateMapFromFetchFilterData:(id)arg1 withApplicationIdentifier:(id)arg2;
+ (id)entityNameToPredicateMapWithApplicationIdentifier:(id)arg1;
+ (id)fetchFilterIdentifierForApplicationIdentifier:(id)arg1;
+ (id)fetchLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchOrCreateLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 inManagedObjectContext:(id)arg3;
+ (id)insertIntoManagedObjectContext:(id)arg1 forApplicationIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_loadAssetUUIDs;
- (void)addAssetsWithUUIDs:(id)arg1;
- (id)assetUUIDs;
- (bool)containsAssetWithUUID:(id)arg1;
- (id)debugDescription;
- (id)predicateForEntityName:(id)arg1;
- (void)removeAllAssets;

@end
