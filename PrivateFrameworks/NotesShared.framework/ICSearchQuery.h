
@interface ICSearchQuery : NSObject {
    NSArray * _externalRankingQueries;
    bool  _modernResultsOnly;
    NSMutableDictionary * _mutableQueryResults;
    ICRankingQueriesDefinition * _rankingQueriesDefinition;
    CSSearchQuery * _searchQuery;
    NSObject<OS_dispatch_semaphore> * _synchronousSemaphore;
    bool  _wasForceStopped;
}

@property (nonatomic, retain) NSArray *externalRankingQueries;
@property (nonatomic, readonly) bool modernResultsOnly;
@property (nonatomic, retain) NSMutableDictionary *mutableQueryResults;
@property (nonatomic, readonly) NSDictionary *queryResults;
@property (nonatomic, retain) ICRankingQueriesDefinition *rankingQueriesDefinition;
@property (nonatomic, retain) CSSearchQuery *searchQuery;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) bool wasForceStopped;

+ (id)defaultAttributesToReturnFromCoreSpotlight;

- (void).cxx_destruct;
- (id)attributesToFetch;
- (void)cancel;
- (id)externalRankingQueries;
- (void)forceStop;
- (id)initWithExternalRankingQueries:(id)arg1;
- (id)initWithRankingQueriesDefinition:(id)arg1;
- (bool)modernResultsOnly;
- (id)mutableQueryResults;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)arg1;
- (void)queryFinishedRunningWithError:(id)arg1;
- (id)queryResults;
- (id)queryResultsToAddFromBatch:(id)arg1;
- (id)rankingQueries;
- (id)rankingQueriesDefinition;
- (bool)run:(id*)arg1;
- (id)searchQuery;
- (void)setExternalRankingQueries:(id)arg1;
- (void)setMutableQueryResults:(id)arg1;
- (void)setRankingQueriesDefinition:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSynchronousSemaphore:(id)arg1;
- (void)setWasForceStopped:(bool)arg1;
- (void)setupWithAttributes:(id)arg1;
- (id)synchronousSemaphore;
- (double)timeoutInterval;
- (bool)wasForceStopped;

@end
