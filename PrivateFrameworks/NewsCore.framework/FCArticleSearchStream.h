
@interface FCArticleSearchStream : NSObject <FCStreaming> {
    NSMutableOrderedSet * _articleSearchResults;
    FCCloudContext * _cloudContext;
    bool  _fetching;
    bool  _finished;
    NSString * _keyboardInputMode;
    SFMoreResults * _moreResults;
    unsigned long long  _parsecQueryID;
    NSString * _query;
    SFRankingFeedback * _rankingFeedback;
    double  _scale;
}

@property (nonatomic, retain) NSMutableOrderedSet *articleSearchResults;
@property (nonatomic, retain) FCCloudContext *cloudContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetching;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSString *keyboardInputMode;
@property (nonatomic, retain) SFMoreResults *moreResults;
@property (nonatomic) unsigned long long parsecQueryID;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) SFRankingFeedback *rankingFeedback;
@property (nonatomic) double scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)articleSearchResults;
- (id)cloudContext;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)fetching;
- (id)initWithParsecQueryID:(unsigned long long)arg1;
- (bool)isFinished;
- (id)keyboardInputMode;
- (id)moreResults;
- (unsigned long long)parsecQueryID;
- (id)query;
- (id)rankingFeedback;
- (double)scale;
- (void)setArticleSearchResults:(id)arg1;
- (void)setCloudContext:(id)arg1;
- (void)setFetching:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setKeyboardInputMode:(id)arg1;
- (void)setMoreResults:(id)arg1;
- (void)setParsecQueryID:(unsigned long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setScale:(double)arg1;

@end
