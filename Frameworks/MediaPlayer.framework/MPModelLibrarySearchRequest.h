
@interface MPModelLibrarySearchRequest : MPModelLibraryRequest {
    long long  _maximumResultsPerScope;
    NSArray * _scopes;
    NSString * _searchString;
}

@property (nonatomic) long long maximumResultsPerScope;
@property (nonatomic, copy) NSArray *scopes;
@property (nonatomic, copy) NSString *searchString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)maximumResultsPerScope;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)scopes;
- (id)searchString;
- (void)setMaximumResultsPerScope:(long long)arg1;
- (void)setScopes:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
