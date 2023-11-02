
@interface MusicKit_SoftLinking_MPModelLibrarySearchRequest : MusicKit_SoftLinking_MPModelRequest {
    long long  _limit;
    NSArray * _scopes;
    NSString * _searchTerm;
}

@property (nonatomic) long long limit;
@property (nonatomic, copy) NSArray *scopes;
@property (nonatomic, copy) NSString *searchTerm;

- (void).cxx_destruct;
- (id)initWithSearchTerm:(id)arg1 scopes:(id)arg2 limit:(long long)arg3;
- (long long)limit;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (id)scopes;
- (id)searchTerm;
- (void)setLimit:(long long)arg1;
- (void)setScopes:(id)arg1;
- (void)setSearchTerm:(id)arg1;

@end
