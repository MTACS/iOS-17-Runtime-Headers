
@interface PXNavigationListDataSectionConfiguration : NSObject {
    NSPredicate * _assetsFilterPredicate;
    PHCollectionList * _collectionList;
    PHFetchResult * _collectionsFetchResult;
    bool  _emptyCollectionsHidden;
    bool  _hideHiddenAlbum;
    bool  _includeKeyAssetFetches;
    bool  _includeUserSmartAlbums;
    long long  _pausedChangeDetailsBufferLength;
    bool  _showSyncedFromMacAlbums;
    bool  _simulateNonIncrementalChanges;
    bool  _skipAssetCountFetches;
    bool  _skipAssetFetches;
    bool  _skipKeyAssetFetchesForSmartAlbums;
    bool  _skipSyndicatedAssetFetches;
}

@property (nonatomic, copy) NSPredicate *assetsFilterPredicate;
@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic) bool emptyCollectionsHidden;
@property (nonatomic) bool hideHiddenAlbum;
@property (nonatomic) bool includeKeyAssetFetches;
@property (nonatomic) bool includeUserSmartAlbums;
@property (nonatomic) long long pausedChangeDetailsBufferLength;
@property (nonatomic) bool showSyncedFromMacAlbums;
@property (nonatomic) bool simulateNonIncrementalChanges;
@property (nonatomic) bool skipAssetCountFetches;
@property (nonatomic) bool skipAssetFetches;
@property (nonatomic) bool skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) bool skipSyndicatedAssetFetches;

+ (id)configurationWithCollectionList:(id)arg1;
+ (id)configurationWithCollectionsFetchResult:(id)arg1;

- (void).cxx_destruct;
- (id)assetsFilterPredicate;
- (id)collectionList;
- (id)collectionsFetchResult;
- (id)description;
- (bool)emptyCollectionsHidden;
- (bool)hideHiddenAlbum;
- (bool)includeKeyAssetFetches;
- (bool)includeUserSmartAlbums;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithCollectionsFetchResult:(id)arg1;
- (long long)pausedChangeDetailsBufferLength;
- (void)setAssetsFilterPredicate:(id)arg1;
- (void)setEmptyCollectionsHidden:(bool)arg1;
- (void)setHideHiddenAlbum:(bool)arg1;
- (void)setIncludeKeyAssetFetches:(bool)arg1;
- (void)setIncludeUserSmartAlbums:(bool)arg1;
- (void)setPausedChangeDetailsBufferLength:(long long)arg1;
- (void)setShowSyncedFromMacAlbums:(bool)arg1;
- (void)setSimulateNonIncrementalChanges:(bool)arg1;
- (void)setSkipAssetCountFetches:(bool)arg1;
- (void)setSkipAssetFetches:(bool)arg1;
- (void)setSkipKeyAssetFetchesForSmartAlbums:(bool)arg1;
- (void)setSkipSyndicatedAssetFetches:(bool)arg1;
- (bool)showSyncedFromMacAlbums;
- (bool)simulateNonIncrementalChanges;
- (bool)skipAssetCountFetches;
- (bool)skipAssetFetches;
- (bool)skipKeyAssetFetchesForSmartAlbums;
- (bool)skipSyndicatedAssetFetches;

@end
