
@interface NTCatchUpOperation : FCOperation {
    <FCNewsAppConfiguration> * _appConfiguration;
    NSMutableArray * _articleIDsRequests;
    NSMutableSet * _articleIDsToExclude;
    NSMutableArray * _articleListRequests;
    id /* block */  _catchUpCompletionHandler;
    <FCContentContext> * _contentContext;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NSDate * _fetchDate;
    bool  _forYouEnabled;
    NTCatchUpOperationForYouFetchInfo * _forYouFetchInfo;
    NTCatchUpOperationForYouRequest * _forYouRequest;
    NTCatchUpOperationResults * _forYouResults;
    NSDictionary * _resultsByArticleIDsRequestID;
    NSDictionary * _resultsByArticleListID;
    NSDictionary * _todayConfigOperationHeldRecordsByType;
}

@property (nonatomic, copy) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic, retain) NSMutableArray *articleIDsRequests;
@property (nonatomic, retain) NSMutableSet *articleIDsToExclude;
@property (nonatomic, retain) NSMutableArray *articleListRequests;
@property (nonatomic, copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, copy) NSDate *fetchDate;
@property (getter=isForYouEnabled, nonatomic) bool forYouEnabled;
@property (nonatomic, copy) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic, copy) NTCatchUpOperationForYouRequest *forYouRequest;
@property (nonatomic, copy) NTCatchUpOperationResults *forYouResults;
@property (nonatomic, copy) NSDictionary *resultsByArticleIDsRequestID;
@property (nonatomic, copy) NSDictionary *resultsByArticleListID;
@property (nonatomic, retain) NSDictionary *todayConfigOperationHeldRecordsByType;

- (void).cxx_destruct;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)_fetchForYouResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)addArticleIDsRequest:(id)arg1;
- (void)addArticleIDsToExclude:(id)arg1;
- (void)addArticleListRequest:(id)arg1;
- (id)appConfiguration;
- (id)articleIDsRequests;
- (id)articleIDsToExclude;
- (id)articleListRequests;
- (id /* block */)catchUpCompletionHandler;
- (id)contentContext;
- (id)feedPersonalizer;
- (id)fetchDate;
- (id)forYouFetchInfo;
- (id)forYouRequest;
- (id)forYouResults;
- (id)init;
- (bool)isForYouEnabled;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultsByArticleIDsRequestID;
- (id)resultsByArticleListID;
- (void)setAppConfiguration:(id)arg1;
- (void)setArticleIDsRequests:(id)arg1;
- (void)setArticleIDsToExclude:(id)arg1;
- (void)setArticleListRequests:(id)arg1;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContentContext:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setForYouEnabled:(bool)arg1;
- (void)setForYouFetchInfo:(id)arg1;
- (void)setForYouRequest:(id)arg1;
- (void)setForYouResults:(id)arg1;
- (void)setResultsByArticleIDsRequestID:(id)arg1;
- (void)setResultsByArticleListID:(id)arg1;
- (void)setTodayConfigOperationHeldRecordsByType:(id)arg1;
- (id)todayConfigOperationHeldRecordsByType;
- (bool)validateOperation;

@end
