
@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject {
    unsigned long long  _assetTypesToInclude;
    NSPredicate * _assetsFilterPredicate;
    PHCollectionList * _collectionList;
    unsigned long long  _collectionTypesToInclude;
    PHFetchResult * _collectionsFetchResult;
    bool  _includePeopleAlbum;
    long long  _pausedChangeDetailsBufferLength;
    bool  _separateSectionsForSmartAndUserCollections;
    bool  _shouldExcludePrivacySensitiveAlbums;
    bool  _shouldIgnoreLibraryChanges;
    bool  _simulateNonIncrementalChanges;
    bool  _skipAssetFetches;
    bool  _skipKeyAssetFetches;
    bool  _skipKeyAssetFetchesForSmartAlbums;
    bool  _skipSyndicatedAssetFetches;
    bool  _updateKeyAssetFetchesInBackground;
}

@property (nonatomic) unsigned long long assetTypesToInclude;
@property (nonatomic, retain) NSPredicate *assetsFilterPredicate;
@property (readonly) PHCollectionList *collectionList;
@property (nonatomic) unsigned long long collectionTypesToInclude;
@property (readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic) bool includePeopleAlbum;
@property (nonatomic) long long pausedChangeDetailsBufferLength;
@property (nonatomic) bool separateSectionsForSmartAndUserCollections;
@property (nonatomic) bool shouldExcludePrivacySensitiveAlbums;
@property bool shouldIgnoreLibraryChanges;
@property (nonatomic) bool simulateNonIncrementalChanges;
@property (nonatomic) bool skipAssetFetches;
@property (nonatomic) bool skipKeyAssetFetches;
@property (nonatomic) bool skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) bool skipSyndicatedAssetFetches;
@property (nonatomic) bool updateKeyAssetFetchesInBackground;

+ (id)_generatePredicateForAssetTypesToInclude:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_newConfigurationWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (bool)_shouldSupportSyndicatedAssetFetches:(id)arg1;
- (unsigned long long)assetTypesToInclude;
- (id)assetsFilterPredicate;
- (id)collectionList;
- (unsigned long long)collectionTypesToInclude;
- (id)collectionsFetchResult;
- (id)customFetchOptionsForCollection:(id)arg1;
- (bool)includePeopleAlbum;
- (id)init;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)initWithCollectionsFetchResult:(id)arg1;
- (bool)isRootFolder;
- (id)newConfigurationWithCollectionList:(id)arg1;
- (id)newConfigurationWithCollectionsFetchResult:(id)arg1;
- (long long)pausedChangeDetailsBufferLength;
- (bool)separateSectionsForSmartAndUserCollections;
- (void)setAssetTypesToInclude:(unsigned long long)arg1;
- (void)setAssetsFilterPredicate:(id)arg1;
- (void)setCollectionTypesToInclude:(unsigned long long)arg1;
- (void)setIncludePeopleAlbum:(bool)arg1;
- (void)setIsRootFolder:(bool)arg1;
- (void)setPausedChangeDetailsBufferLength:(long long)arg1;
- (void)setSeparateSectionsForSmartAndUserCollections:(bool)arg1;
- (void)setShouldExcludePrivacySensitiveAlbums:(bool)arg1;
- (void)setShouldIgnoreLibraryChanges:(bool)arg1;
- (void)setSimulateNonIncrementalChanges:(bool)arg1;
- (void)setSkipAssetFetches:(bool)arg1;
- (void)setSkipKeyAssetFetches:(bool)arg1;
- (void)setSkipKeyAssetFetchesForSmartAlbums:(bool)arg1;
- (void)setSkipSyndicatedAssetFetches:(bool)arg1;
- (void)setUpdateKeyAssetFetchesInBackground:(bool)arg1;
- (bool)shouldExcludePrivacySensitiveAlbums;
- (bool)shouldIgnoreLibraryChanges;
- (bool)simulateNonIncrementalChanges;
- (bool)skipAssetFetches;
- (bool)skipKeyAssetFetches;
- (bool)skipKeyAssetFetchesForSmartAlbums;
- (bool)skipSyndicatedAssetFetches;
- (bool)updateKeyAssetFetchesInBackground;

@end
