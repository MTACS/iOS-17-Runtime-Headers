
@interface NTParsecZKWNewsOperation : FCOperation {
    NSDate * _fetchDate;
    NSString * _keyboardInputMode;
    id /* block */  _newsCompletionHandler;
    SFRankingFeedback * _resultRankingFeedback;
    NSOrderedSet * _resultSearchResultIDs;
    NSDictionary * _resultSearchResultsBySearchResultID;
    double  _scale;
    PARSession * _session;
}

@property (nonatomic, copy) NSDate *fetchDate;
@property (nonatomic, copy) NSString *keyboardInputMode;
@property (nonatomic, copy) id /* block */ newsCompletionHandler;
@property (nonatomic, copy) SFRankingFeedback *resultRankingFeedback;
@property (nonatomic, copy) NSOrderedSet *resultSearchResultIDs;
@property (nonatomic, copy) NSDictionary *resultSearchResultsBySearchResultID;
@property (nonatomic) double scale;
@property (nonatomic, retain) PARSession *session;

- (void).cxx_destruct;
- (id)fetchDate;
- (id)init;
- (id)keyboardInputMode;
- (id /* block */)newsCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultRankingFeedback;
- (id)resultSearchResultIDs;
- (id)resultSearchResultsBySearchResultID;
- (double)scale;
- (id)session;
- (void)setFetchDate:(id)arg1;
- (void)setKeyboardInputMode:(id)arg1;
- (void)setNewsCompletionHandler:(id /* block */)arg1;
- (void)setResultRankingFeedback:(id)arg1;
- (void)setResultSearchResultIDs:(id)arg1;
- (void)setResultSearchResultsBySearchResultID:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeoutDuration:(double)arg1;
- (bool)validateOperation;

@end
