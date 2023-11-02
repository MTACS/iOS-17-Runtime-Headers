
@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) short duplicateType;
@property (nonatomic, retain) NSSet *metadataMatchingAssets;
@property (nonatomic, retain) NSSet *perceptualMatchingAssets;
@property (nonatomic) long long processingVersion;

+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)arg1;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)arg1 predicate:(id)arg2;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)arg1 type:(short)arg2;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1;

- (void)addAssets:(id)arg1 type:(short)arg2;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)awakeFromInsert;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (id)duplicateAssetsFromCollection;
- (bool)hasDuplicateAssetVisibilityStateVisibleAssets:(id)arg1;
- (id)mutableMetadataMatchingAssets;
- (id)mutablePerceptualMatchingAssets;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeInternalAssets:(id)arg1;
- (void)sortAssets;
- (bool)supportsAssetOrderKeys;
- (void)updateAlbumType;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)arg1 duplicateAssetVisibilityState:(short)arg2;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)arg1;

@end
