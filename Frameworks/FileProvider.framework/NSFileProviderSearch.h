
@interface NSFileProviderSearch : NSObject {
    NSFileProviderSearchQuery * _legacySearchQuery;
    NSString * _scopedToItemIdentifier;
    NSString * _searchContainerItemIdentifier;
    NSString * _spotlightQueryString;
}

@property (nonatomic, readonly, copy) NSFileProviderSearchQuery *legacySearchQuery;
@property (nonatomic, readonly, copy) NSString *scopedToItemIdentifier;
@property (nonatomic, readonly, copy) NSString *searchContainerItemIdentifier;
@property (nonatomic, readonly, copy) NSString *spotlightQueryString;

- (void).cxx_destruct;
- (id)initWithSpotlightQueryString:(id)arg1 scopedToItemIdentifier:(id)arg2 searchContainerItemIdentifier:(id)arg3 legacySearchQuery:(id)arg4;
- (id)legacySearchQuery;
- (id)scopedToItemIdentifier;
- (id)searchContainerItemIdentifier;
- (id)spotlightQueryString;

@end
