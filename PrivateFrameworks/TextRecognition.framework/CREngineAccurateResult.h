
@interface CREngineAccurateResult : NSObject {
    NSArray * _blocks;
    NSArray * _cachedLines;
    long long  _filteredFeatureCount;
    CRRecognizedTextRegion * _titleRegion;
}

@property (retain) NSArray *blocks;
@property (retain) NSArray *cachedLines;
@property long long filteredFeatureCount;
@property (readonly) NSArray *lines;
@property (retain) CRRecognizedTextRegion *titleRegion;

- (void).cxx_destruct;
- (id)blocks;
- (id)cachedLines;
- (long long)filteredFeatureCount;
- (id)lines;
- (void)setBlocks:(id)arg1;
- (void)setCachedLines:(id)arg1;
- (void)setFilteredFeatureCount:(long long)arg1;
- (void)setTitleRegion:(id)arg1;
- (id)titleRegion;

@end
