
@interface FCMyArticlesSearchOperation : FCOperation {
    bool  _cachedOnly;
    bool  _channelsOnly;
    FCCloudContext * _context;
    FCDateRange * _dateRange;
    FCFeedItemFeature * _feature;
    unsigned long long  _filterOptions;
    unsigned long long  _maxFeedItems;
    NSDictionary * _resultFeedContextByFeedID;
    NSArray * _resultFeedItems;
    id /* block */  _searchCompletionHandler;
}

@property (nonatomic) bool cachedOnly;
@property (nonatomic) bool channelsOnly;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, copy) FCDateRange *dateRange;
@property (nonatomic, copy) FCFeedItemFeature *feature;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) unsigned long long maxFeedItems;
@property (copy) NSDictionary *resultFeedContextByFeedID;
@property (nonatomic, retain) NSArray *resultFeedItems;
@property (nonatomic, copy) id /* block */ searchCompletionHandler;

- (void).cxx_destruct;
- (id)_cappedFeedItemsFromResponses:(id)arg1 allFeedItems:(id)arg2;
- (void)_generateFeedRequestsForFeedRange:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)cachedOnly;
- (bool)channelsOnly;
- (id)context;
- (id)dateRange;
- (id)feature;
- (unsigned long long)filterOptions;
- (id)init;
- (unsigned long long)maxFeedItems;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultFeedContextByFeedID;
- (id)resultFeedItems;
- (id /* block */)searchCompletionHandler;
- (void)setCachedOnly:(bool)arg1;
- (void)setChannelsOnly:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDateRange:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setFilterOptions:(unsigned long long)arg1;
- (void)setMaxFeedItems:(unsigned long long)arg1;
- (void)setResultFeedContextByFeedID:(id)arg1;
- (void)setResultFeedItems:(id)arg1;
- (void)setSearchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
