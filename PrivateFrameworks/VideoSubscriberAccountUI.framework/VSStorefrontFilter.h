
@interface VSStorefrontFilter : NSObject {
    NSString * _searchQuery;
    NSArray * _storefronts;
}

@property (nonatomic, readonly, copy) NSArray *filteredStorefronts;
@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic, copy) NSArray *storefronts;

+ (id)keyPathsForValuesAffectingFilteredStorefronts;

- (void).cxx_destruct;
- (id)filteredStorefronts;
- (id)init;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;
- (void)setStorefronts:(id)arg1;
- (id)storefronts;

@end
