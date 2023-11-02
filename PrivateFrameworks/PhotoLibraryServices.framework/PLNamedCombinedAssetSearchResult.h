
@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)contentStrings;
- (bool)hasSpecialName;
- (id)initWithName:(id)arg1 assetSearchResults:(id)arg2 canOverlap:(bool)arg3;
- (unsigned long long)matchCount;
- (id)matchRanges;
- (id)name;
- (void)setName:(id)arg1;

@end
