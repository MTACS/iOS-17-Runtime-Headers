
@interface CSSearchAgent : CSXPCConnection {
    <MDIndexer> * _indexer;
    NSMutableDictionary * _searchConnections;
}

@property (nonatomic, retain) <MDIndexer> *indexer;
@property (nonatomic, retain) NSMutableDictionary *searchConnections;

+ (id)searchAgent;
+ (id)searchAgent:(bool)arg1 serviceName:(id)arg2;

- (void).cxx_destruct;
- (void)_prepareQueryContext:(id)arg1 searchConnection:(id)arg2;
- (bool)addClientConnectionIfAllowedForConfiguration:(id)arg1;
- (bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (void)cancelQuery:(id)arg1;
- (void)cancelSimpleQuery:(id)arg1;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleEngagement:(id)arg1 forConnection:(id)arg2;
- (id)indexer;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (void)pollResults:(id)arg1;
- (void)preheat:(id)arg1;
- (id)searchConnection:(id)arg1;
- (id)searchConnections;
- (void)setIndexer:(id)arg1;
- (void)setSearchConnections:(id)arg1;
- (void)startQuery:(id)arg1;
- (void)startSimpleQuery:(id)arg1;

@end
