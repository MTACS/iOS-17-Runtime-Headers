
@interface _EARCombinedResult : _EARSystemResult {
    NSArray * _nBestSourceIndexes;
    NSArray * _nBestStrings;
    NSArray * _originalRanks;
}

@property (nonatomic, copy) NSArray *nBestSourceIndexes;
@property (nonatomic, copy) NSArray *nBestStrings;
@property (nonatomic, copy) NSArray *originalRanks;

- (void).cxx_destruct;
- (id)nBestSourceIndexes;
- (id)nBestStrings;
- (id)originalRanks;
- (void)setNBestSourceIndexes:(id)arg1;
- (void)setNBestStrings:(id)arg1;
- (void)setOriginalRanks:(id)arg1;

@end
