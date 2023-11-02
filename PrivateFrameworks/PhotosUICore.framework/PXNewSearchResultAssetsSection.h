
@interface PXNewSearchResultAssetsSection : PXNewSearchResultsSection {
    NSArray * _allAssetResultUUIDs;
    NSArray * _allAssetResults;
    PHFetchResult * _curatedAssetFetchResult;
}

@property (nonatomic, copy) NSArray *allAssetResultUUIDs;
@property (nonatomic, readonly, copy) NSArray *allAssetResults;
@property (nonatomic, copy) PHFetchResult *curatedAssetFetchResult;

- (void).cxx_destruct;
- (id)allAssetResultUUIDs;
- (id)allAssetResults;
- (id)assetForSearchResultIdentifier:(id)arg1;
- (id)curatedAssetFetchResult;
- (id)initWithCuratedAssetSearchResults:(id)arg1 curatedAssetSearchResultsFetchResult:(id)arg2 allAssetSearchResults:(id)arg3;
- (id)searchResultForAsset:(id)arg1;
- (void)setAllAssetResultUUIDs:(id)arg1;
- (void)setCuratedAssetFetchResult:(id)arg1;
- (id)title;

@end
