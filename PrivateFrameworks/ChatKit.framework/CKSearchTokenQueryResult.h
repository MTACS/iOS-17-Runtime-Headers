
@interface CKSearchTokenQueryResult : CKSpotlightQueryResult {
    CKSearchTokenFilter * _associatedStagedFilter;
    unsigned long long  _contentType;
    unsigned long long  _filterOptions;
    NSString * _itemIdentifier;
    UISearchToken * _searchToken;
    NSArray * _tokenAddresses;
}

@property (nonatomic) CKSearchTokenFilter *associatedStagedFilter;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) UISearchToken *searchToken;
@property (nonatomic, retain) NSArray *tokenAddresses;

- (void).cxx_destruct;
- (void)addFilterOption:(unsigned long long)arg1;
- (id)associatedStagedFilter;
- (id)attributedSuggestionTextForSearchText:(id)arg1 font:(id)arg2;
- (unsigned long long)contentType;
- (unsigned long long)filterOptions;
- (bool)hasFilterOption:(unsigned long long)arg1;
- (id)image;
- (id)initWithContentType:(unsigned long long)arg1 conversation:(id)arg2 itemIdentifier:(id)arg3 tokenAddresses:(id)arg4;
- (id)itemIdentifier;
- (id)searchToken;
- (void)setAssociatedStagedFilter:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setFilterOptions:(unsigned long long)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setSearchToken:(id)arg1;
- (void)setTokenAddresses:(id)arg1;
- (id)tokenAddresses;
- (id)tokenText;

@end
