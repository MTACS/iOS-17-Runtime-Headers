
@interface CNAClassKitResultTransformVisitor : NSObject {
    CLSDataStore * _dataStore;
    CNAutocompleteResultFactory * _factory;
    NSMutableArray * _results;
    unsigned long long  _searchType;
}

@property (nonatomic, readonly) CLSDataStore *dataStore;
@property (nonatomic, readonly) CNAutocompleteResultFactory *factory;
@property (nonatomic, readonly) unsigned long long searchType;

+ (id)addressForPerson:(id)arg1 searchType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataStore;
- (id)description;
- (id)factory;
- (id)initWithFactory:(id)arg1 dataStore:(id)arg2 searchType:(unsigned long long)arg3;
- (id)reduceCollection:(id)arg1;
- (unsigned long long)searchType;
- (void)visitClass:(id)arg1;
- (void)visitPerson:(id)arg1;

@end
