
@interface NMAPISearchRequest : NMAPIRequest {
    unsigned long long  _resultsPerSection;
    NSString * _searchString;
}

@property (nonatomic) unsigned long long resultsPerSection;
@property (nonatomic, copy) NSString *searchString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSearchString:(id)arg1;
- (Class)responseParserClass;
- (unsigned long long)resultsPerSection;
- (id)searchString;
- (void)setResultsPerSection:(unsigned long long)arg1;
- (void)setSearchString:(id)arg1;
- (id)urlComponentsWithStoreURLBag:(id)arg1 error:(id*)arg2;

@end
