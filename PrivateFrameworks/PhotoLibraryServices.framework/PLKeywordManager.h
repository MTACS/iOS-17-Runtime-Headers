
@interface PLKeywordManager : NSObject {
    NSMutableDictionary * _keywordCache;
    PLPhotoLibraryPathManager * _pathManager;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

+ (id)_keywordsForAsset:(id)arg1;
+ (id)keywordsForAsset:(id)arg1;
+ (id)keywordsForAssetWithUUID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)keywordsForAssets:(id)arg1;

- (void).cxx_destruct;
- (id)_inq_keywordObjectsForKeywords:(id)arg1 managedObjectContext:(id)arg2;
- (void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:(id)arg1;
- (void)_invalidateKeywordCache;
- (bool)_setKeyword:(id)arg1 forAssets:(id)arg2 managedObjectContext:(id)arg3;
- (bool)_setKeywords:(id)arg1 forAsset:(id)arg2 managedObjectContext:(id)arg3;
- (id)createOrLookupKeywordForTitle:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)initWithPathManager:(id)arg1;
- (bool)setKeyword:(id)arg1 forAssets:(id)arg2 managedObjectContext:(id)arg3;
- (bool)setKeyword:(id)arg1 managedObjectContext:(id)arg2;
- (bool)setKeywords:(id)arg1 forAsset:(id)arg2;
- (bool)setKeywords:(id)arg1 forAssetUUID:(id)arg2 managedObjectContext:(id)arg3;

@end
