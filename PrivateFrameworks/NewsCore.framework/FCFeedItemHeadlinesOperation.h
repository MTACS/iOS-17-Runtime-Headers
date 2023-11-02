
@interface FCFeedItemHeadlinesOperation : FCOperation {
    bool  _cachedOnly;
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    NSDictionary * _feedContextByFeedID;
    NSArray * _feedItems;
    long long  _feedPersonalizationConfigurationSet;
    id /* block */  _headlinesCompletionHandler;
    id /* block */  _headlinesMapCompletionHandler;
    <FCFeedPersonalizing> * _personalizer;
    FCFeedItemHeadlinesOperationProperties * _properties;
    id /* block */  _rapidUpdateRefreshTest;
    NSArray * _resultHeadlines;
    bool  _shouldFilterHeadlinesWithoutSourceChannels;
}

@property (nonatomic) bool cachedOnly;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) NSDictionary *feedContextByFeedID;
@property (nonatomic, copy) FCMapTable *feedItemScoreProfiles;
@property (nonatomic, copy) NSArray *feedItems;
@property (nonatomic) long long feedPersonalizationConfigurationSet;
@property (nonatomic, copy) id /* block */ headlinesCompletionHandler;
@property (nonatomic, copy) id /* block */ headlinesMapCompletionHandler;
@property (nonatomic, retain) <FCFeedPersonalizing> *personalizer;
@property (nonatomic, retain) FCFeedItemHeadlinesOperationProperties *properties;
@property (nonatomic, copy) id /* block */ rapidUpdateRefreshTest;
@property (nonatomic, retain) NSArray *resultHeadlines;
@property (nonatomic) bool shouldFilterHeadlinesWithoutSourceChannels;

- (void).cxx_destruct;
- (void)_fetchUnadornedHeadlinesWithCompletionHandler:(id /* block */)arg1;
- (bool)cachedOnly;
- (id)configuration;
- (id)context;
- (id)feedContextByFeedID;
- (id)feedItemScoreProfiles;
- (id)feedItems;
- (long long)feedPersonalizationConfigurationSet;
- (id /* block */)headlinesCompletionHandler;
- (id /* block */)headlinesMapCompletionHandler;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)personalizer;
- (id)properties;
- (id /* block */)rapidUpdateRefreshTest;
- (id)resultHeadlines;
- (void)setCachedOnly:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFeedContextByFeedID:(id)arg1;
- (void)setFeedItemScoreProfiles:(id)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setFeedPersonalizationConfigurationSet:(long long)arg1;
- (void)setHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setHeadlinesMapCompletionHandler:(id /* block */)arg1;
- (void)setPersonalizer:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRapidUpdateRefreshTest:(id /* block */)arg1;
- (void)setResultHeadlines:(id)arg1;
- (void)setShouldFilterHeadlinesWithoutSourceChannels:(bool)arg1;
- (bool)shouldFilterHeadlinesWithoutSourceChannels;
- (bool)validateOperation;

@end
