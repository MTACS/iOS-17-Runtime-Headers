
@interface PHAssetCollectionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _assetsHelper;
    PHRelationshipChangeRequestHelper * _customKeyAssetHelper;
    PHAssetCollection * _originalAssetCollection;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *assetsHelper;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *customKeyAssetHelper;
@property (nonatomic) bool customSortAscending;
@property (nonatomic) unsigned int customSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) PHAssetCollection *originalAssetCollection;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2;
+ (void)_deleteAssetCollections:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;
+ (id)changeRequestForAssetCollection:(id)arg1;
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;
+ (id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)arg1;
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;
+ (void)deleteAssetCollections:(id)arg1;
+ (void)expungeAssetCollections:(id)arg1;
+ (void)undeleteAssetCollections:(id)arg1;
+ (id)validateAssetCollectionTitle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_mutableAssetsObjectIDsAndUUIDs;
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalAssetCollection:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)addAssets:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)assetsHelper;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)customKeyAssetHelper;
- (bool)customSortAscending;
- (unsigned int)customSortKey;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (bool)isPinned;
- (id)managedEntityName;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)originalAssetCollection;
- (id)placeholderForCreatedAssetCollection;
- (void)removeAsset:(id)arg1;
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)setCustomKeyAsset:(id)arg1;
- (void)setCustomSortAscending:(bool)arg1;
- (void)setCustomSortKey:(unsigned int)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setOriginalAssetCollection:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
