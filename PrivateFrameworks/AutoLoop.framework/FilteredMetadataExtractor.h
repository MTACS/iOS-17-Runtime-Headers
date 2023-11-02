
@interface FilteredMetadataExtractor : IrisVideoMetadataExtractor {
    NSMutableArray * filteredKeysArray;
}

@property (retain) NSMutableArray *filteredKeysArray;

- (void).cxx_destruct;
- (id)filteredKeysArray;
- (id)init;
- (int)processFile;
- (void)removeMetadataFromInterpolatedFrameDict:(id)arg1;
- (void)setFilteredKeysArray:(id)arg1;

@end
