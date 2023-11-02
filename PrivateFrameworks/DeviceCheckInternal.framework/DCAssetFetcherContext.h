
@interface DCAssetFetcherContext : NSObject {
    bool  _allowCatalogRefresh;
    bool  _ignoreCachedMetadata;
}

@property (nonatomic) bool allowCatalogRefresh;
@property (nonatomic) bool ignoreCachedMetadata;

- (bool)allowCatalogRefresh;
- (id)description;
- (bool)ignoreCachedMetadata;
- (void)setAllowCatalogRefresh:(bool)arg1;
- (void)setIgnoreCachedMetadata:(bool)arg1;

@end
