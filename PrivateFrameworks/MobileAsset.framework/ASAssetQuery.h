
@interface ASAssetQuery : NSObject {
    NSString * _assetType;
    double  _networkTimeout;
    NSPredicate * _predicate;
    bool  _queriesLocalAssetInformationOnly;
    NSArray * _results;
    NSString * _sessionIdentifier;
    MAAssetQuery * maQuery;
}

@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, retain) MAAssetQuery *maQuery;
@property (nonatomic) double networkTimeout;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) bool queriesLocalAssetInformationOnly;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, copy) NSString *sessionIdentifier;

+ (id)queryPredicateForProperties:(id)arg1;

- (void).cxx_destruct;
- (id)assetType;
- (id)initWithAssetType:(id)arg1;
- (id)initWithAssetType:(id)arg1 sessionIdentifier:(id)arg2;
- (id)maQuery;
- (double)networkTimeout;
- (id)predicate;
- (bool)queriesLocalAssetInformationOnly;
- (id)results;
- (id)runQueryAndReturnError:(id*)arg1;
- (id)runQueryForInfoReturnError:(id*)arg1;
- (id)sessionIdentifier;
- (void)setAssetType:(id)arg1;
- (void)setMaQuery:(id)arg1;
- (void)setNetworkTimeout:(double)arg1;
- (void)setPredicate:(id)arg1;
- (void)setQueriesLocalAssetInformationOnly:(bool)arg1;
- (void)setResults:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)startQuery:(id /* block */)arg1;
- (void)stopQuery;

@end
