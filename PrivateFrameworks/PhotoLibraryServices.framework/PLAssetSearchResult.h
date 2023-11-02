
@interface PLAssetSearchResult : PLSearchResult {
    NSDate * _sortDate;
}

@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *sortDate;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)assetUUIDs;
- (id)description;
- (id)identifier;
- (id)keyAssetUUID;
- (id)sortDate;
- (unsigned long long)type;

@end
