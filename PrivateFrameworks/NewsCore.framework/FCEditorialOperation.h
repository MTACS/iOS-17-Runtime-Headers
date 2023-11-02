
@interface FCEditorialOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSArray * _editorialSectionGroups;
    NSError * _error;
    id /* block */  _fetchCompletionHandler;
    FCSpotlightOperationResult * _spotlightResult;
    NSArray * _trendingHeadlines;
}

@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (copy) NSArray *editorialSectionGroups;
@property (retain) NSError *error;
@property (copy) id /* block */ fetchCompletionHandler;
@property (retain) FCSpotlightOperationResult *spotlightResult;
@property (copy) NSArray *trendingHeadlines;

- (void).cxx_destruct;
- (id)configuration;
- (id)context;
- (id)editorialSectionGroups;
- (void)enumerateEditorialSectionsByRecencyWithBlock:(id /* block */)arg1;
- (id)error;
- (id /* block */)fetchCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEditorialSectionGroups:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setSpotlightResult:(id)arg1;
- (void)setTrendingHeadlines:(id)arg1;
- (id)spotlightResult;
- (id)trendingHeadlines;
- (bool)validateOperation;

@end
