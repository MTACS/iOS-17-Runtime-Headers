
@interface VSIdentityProviderFilter : NSObject {
    NSArray * _allIdentityProviders;
    NSString * _searchQuery;
    VSTrie * _searchTree;
    NSArray * _supportedAccountProviderIDs;
    NSArray * _supportedIdentityProviders;
}

@property (nonatomic, copy) NSArray *allIdentityProviders;
@property (nonatomic, readonly, copy) NSArray *filteredIdentityProviders;
@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic, retain) VSTrie *searchTree;
@property (nonatomic, copy) NSArray *supportedAccountProviderIDs;
@property (nonatomic, copy) NSArray *supportedIdentityProviders;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;

- (void).cxx_destruct;
- (id)_camelAndWordBasedPrefixesForProvider:(id)arg1;
- (void)_refreshProviderList;
- (id)allIdentityProviders;
- (id)filteredIdentityProviders;
- (id)init;
- (id)searchQuery;
- (id)searchTree;
- (void)setAllIdentityProviders:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSearchTree:(id)arg1;
- (void)setSupportedAccountProviderIDs:(id)arg1;
- (void)setSupportedIdentityProviders:(id)arg1;
- (id)supportedAccountProviderIDs;
- (id)supportedIdentityProviders;

@end
