
@interface PLCombinedAssetSearchResult : PLAssetSearchResult {
    unsigned long long  _assetCount;
    NSMutableArray * _assetSearchResults;
    NSArray * _assetUUIDs;
    bool  _resultsCanOverlap;
}

@property (nonatomic, retain) NSMutableArray *assetSearchResults;
@property (nonatomic, readonly) NSArray *groupResults;
@property (nonatomic) bool resultsCanOverlap;

- (void).cxx_destruct;
- (void)addAssetSearchResult:(id)arg1 isMainSearchResult:(bool)arg2;
- (unsigned long long)assetCount;
- (id)assetSearchResults;
- (id)assetUUIDs;
- (unsigned long long)categoryMask;
- (id)groupDescription;
- (id)groupResults;
- (id)initWithAssetSearchResult:(id)arg1;
- (id)initWithAssetSearchResults:(id)arg1 canOverlap:(bool)arg2;
- (bool)resultsCanOverlap;
- (void)setAssetSearchResults:(id)arg1;
- (void)setResultsCanOverlap:(bool)arg1;

@end
