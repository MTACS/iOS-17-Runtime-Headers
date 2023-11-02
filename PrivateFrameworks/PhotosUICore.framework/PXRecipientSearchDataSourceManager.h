
@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager {
    NSString * _queryString;
    unsigned long long  _searchState;
    NSSet * _usedAddresses;
}

@property (nonatomic, readonly) PXRecipientSearchDataSource *dataSource;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic) unsigned long long searchState;
@property (nonatomic, copy) NSSet *usedAddresses;

- (void).cxx_destruct;
- (id)init;
- (id)queryString;
- (void)queryStringDidChange;
- (unsigned long long)searchState;
- (void)setQueryString:(id)arg1;
- (void)setSearchState:(unsigned long long)arg1;
- (void)setUsedAddresses:(id)arg1;
- (id)usedAddresses;

@end
