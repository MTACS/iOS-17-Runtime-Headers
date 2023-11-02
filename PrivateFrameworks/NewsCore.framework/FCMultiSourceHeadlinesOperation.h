
@interface FCMultiSourceHeadlinesOperation : FCOperation {
    NSSet * _articleIDs;
    NSArray * _articleListIDs;
    FCCachePolicy * _cachePolicyForArticleLists;
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    id /* block */  _headlinesCompletionHandler;
    NSDictionary * _heldRecordsByType;
    NSArray * _networkEvents;
    NSDictionary * _resultArticleIDHeadlinesByArticleID;
    NSDictionary * _resultArticleListHeadlinesByArticleListID;
    NSDictionary * _resultArticleListsByID;
    bool  _shouldBypassRecordSourcePersistence;
}

@property (nonatomic, copy) NSSet *articleIDs;
@property (nonatomic, copy) NSArray *articleListIDs;
@property (nonatomic, retain) FCCachePolicy *cachePolicyForArticleLists;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ headlinesCompletionHandler;
@property (nonatomic, retain) NSDictionary *heldRecordsByType;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, retain) NSDictionary *resultArticleIDHeadlinesByArticleID;
@property (nonatomic, retain) NSDictionary *resultArticleListHeadlinesByArticleListID;
@property (nonatomic, retain) NSDictionary *resultArticleListsByID;
@property (nonatomic) bool shouldBypassRecordSourcePersistence;

- (void).cxx_destruct;
- (id)articleIDs;
- (id)articleListIDs;
- (id)cachePolicyForArticleLists;
- (id)configuration;
- (id)context;
- (id /* block */)headlinesCompletionHandler;
- (id)heldRecordsByType;
- (id)init;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultArticleIDHeadlinesByArticleID;
- (id)resultArticleListHeadlinesByArticleListID;
- (id)resultArticleListsByID;
- (void)setArticleIDs:(id)arg1;
- (void)setArticleListIDs:(id)arg1;
- (void)setCachePolicyForArticleLists:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setHeldRecordsByType:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setResultArticleIDHeadlinesByArticleID:(id)arg1;
- (void)setResultArticleListHeadlinesByArticleListID:(id)arg1;
- (void)setResultArticleListsByID:(id)arg1;
- (void)setShouldBypassRecordSourcePersistence:(bool)arg1;
- (bool)shouldBypassRecordSourcePersistence;
- (bool)validateOperation;

@end
