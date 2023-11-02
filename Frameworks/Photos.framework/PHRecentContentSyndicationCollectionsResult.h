
@interface PHRecentContentSyndicationCollectionsResult : PHFetchResult {
    PHFetchOptions * _fetchOptions;
    NSString * _identifier;
    long long  _maxNumberOfAssetsPerStack;
    long long  _maxNumberOfStacks;
    NSArray * _objects;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly) NSString *identifier;
@property (readonly) NSArray *objects;

+ (id)pointerComparableIdentifiersFromIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasReachedGroupCapacity;
- (id)_transientCollectionForAssetOID:(id)arg1;
- (id)_transientCollectionForIdentifier:(id)arg1;
- (id)additionalChangedIdentifiersFromPreviousIdentifiers:(id)arg1 currentIdentifiers:(id)arg2 inFetchResultBeforeChanges:(id)arg3;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (id)copyWithOptions:(id)arg1;
- (id)description;
- (id)fetchRequest;
- (id)fetchSortDescriptors;
- (id)fetchedObjects;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3 maxNumberOfStacks:(long long)arg4 maxNumberOfAssetsPerStack:(long long)arg5 fetchType:(id)arg6 fetchPropertySets:(id)arg7 identifier:(id)arg8 registerIfNeeded:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objects;
- (id)photoLibrary;
- (unsigned long long)possibleChangesForChange:(id)arg1 propertiesFetchResult:(id)arg2;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
