
@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase {
    unsigned long long  _maxCount;
    bool  _onlyFavorites;
}

@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) bool onlyFavorites;

- (unsigned long long)_extendedMaxCount;
- (id)_generateEntryFromMemories:(id)arg1;
- (void)_regenerateMemoriesWithChange:(id)arg1;
- (id)fetchOptions;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (unsigned long long)maxCount;
- (bool)onlyFavorites;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setOnlyFavorites:(bool)arg1;
- (void)startGeneratingMemories;

@end
