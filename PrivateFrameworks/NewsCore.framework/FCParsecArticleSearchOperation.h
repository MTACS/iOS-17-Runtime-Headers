
@interface FCParsecArticleSearchOperation : FCOperation {
    id /* block */  _articleSearchCompletionHandler;
    unsigned long long  _batchSize;
    <FCContentContext> * _contentContext;
    NSString * _keyboardInputMode;
    SFMoreResults * _moreResults;
    unsigned long long  _parsecQueryID;
    SFRankingFeedback * _previousRankingFeedback;
    NSString * _query;
    SFRankingFeedback * _rankingFeedback;
    NSArray * _results;
    double  _scale;
}

@property (copy) id /* block */ articleSearchCompletionHandler;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, copy) NSString *keyboardInputMode;
@property (nonatomic, retain) SFMoreResults *moreResults;
@property (nonatomic) unsigned long long parsecQueryID;
@property (nonatomic, retain) SFRankingFeedback *previousRankingFeedback;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) SFRankingFeedback *rankingFeedback;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)_rankingFeedbackWithSection:(id)arg1;
- (id /* block */)articleSearchCompletionHandler;
- (unsigned long long)batchSize;
- (id)contentContext;
- (id)initWithMoreResults:(id)arg1 parsecQueryID:(unsigned long long)arg2;
- (id)keyboardInputMode;
- (id)moreResults;
- (void)operationWillFinishWithError:(id)arg1;
- (unsigned long long)parsecQueryID;
- (void)performOperation;
- (id)previousRankingFeedback;
- (id)query;
- (id)rankingFeedback;
- (id)results;
- (double)scale;
- (void)setArticleSearchCompletionHandler:(id /* block */)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setContentContext:(id)arg1;
- (void)setKeyboardInputMode:(id)arg1;
- (void)setMoreResults:(id)arg1;
- (void)setParsecQueryID:(unsigned long long)arg1;
- (void)setPreviousRankingFeedback:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setScale:(double)arg1;
- (bool)validateOperation;

@end
