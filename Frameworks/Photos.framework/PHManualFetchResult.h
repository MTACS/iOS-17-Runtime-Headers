
@interface PHManualFetchResult : PHFetchResult {
    NSString * _identifier;
    NSOrderedSet * _objectIDs;
    NSArray * _objects;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly) NSString *identifier;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSArray *objects;

+ (id)emptyFetchResultWithPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)calculateMediaTypeCounts;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (id)copyWithOptions:(id)arg1;
- (id)description;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchSortDescriptors;
- (id)fetchUpdatedObjects;
- (id)fetchedObjectIDs;
- (id)fetchedObjectIDsSet;
- (id)fetchedObjects;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(bool)arg6;
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(bool)arg6;
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(bool)arg6 photosCount:(unsigned long long)arg7 videosCount:(unsigned long long)arg8 audiosCount:(unsigned long long)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isFullyBackedByObjectIDs;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectIDs;
- (id)objects;
- (id)photoLibrary;
- (unsigned long long)possibleChangesForChange:(id)arg1 propertiesFetchResult:(id)arg2;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
