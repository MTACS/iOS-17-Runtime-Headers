
@interface PHCollectionListChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _collectionsHelper;
    bool  _isTopLevelUserCollection;
    PHCollectionList * _originalCollectionList;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *collectionsHelper;
@property (nonatomic) bool customSortAscending;
@property (nonatomic) unsigned int customSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic) bool isTopLevelUserCollection;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedCollectionList;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2;
+ (void)_deleteCollectionLists:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;
+ (id)changeRequestForCollectionList:(id)arg1;
+ (id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2;
+ (id)changeRequestForTopLevelCollectionListUserCollections:(id)arg1;
+ (id)creationRequestForCollectionListWithTitle:(id)arg1;
+ (void)deleteCollectionLists:(id)arg1;
+ (void)expungeCollectionLists:(id)arg1;
+ (void)undeleteCollectionLists:(id)arg1;

- (void).cxx_destruct;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalCollectionList:(id)arg1;
- (void)addChildCollection:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)collectionsHelper;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)customSortAscending;
- (unsigned int)customSortKey;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (bool)isTopLevelUserCollection;
- (id)managedEntityName;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)placeholderForCreatedCollectionList;
- (void)removeChildCollection:(id)arg1;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)removeChildCollections:(id)arg1;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)setCustomSortAscending:(bool)arg1;
- (void)setCustomSortKey:(unsigned int)arg1;
- (void)setIsTopLevelUserCollection:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
