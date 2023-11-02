
@interface CNAvatarCacheChangeHistoryAnalysisTask : CNTask {
    CNResult * _enumerator;
    NSData * _finalToken;
    NSArray * _identifiers;
    CNChangeHistoryFetchRequest * _request;
    NSData * _startingToken;
    CNContactStore * _store;
}

@property (nonatomic, retain) CNResult *enumerator;
@property (nonatomic, retain) NSData *finalToken;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic, retain) CNChangeHistoryFetchRequest *request;
@property (nonatomic, readonly) NSData *startingToken;
@property (nonatomic, readonly) CNContactStore *store;

- (void).cxx_destruct;
- (id)enumerator;
- (void)executeRequest;
- (void)extractIdentifiers;
- (id)finalToken;
- (id)identifiers;
- (id)initWithContactStore:(id)arg1 startingToken:(id)arg2;
- (void)makeRequest;
- (id)request;
- (id)run:(id*)arg1;
- (void)setEnumerator:(id)arg1;
- (void)setFinalToken:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)startingToken;
- (id)store;

@end
