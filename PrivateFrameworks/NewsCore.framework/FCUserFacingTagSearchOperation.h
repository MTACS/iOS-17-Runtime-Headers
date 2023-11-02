
@interface FCUserFacingTagSearchOperation : FCOperation {
    unsigned long long  _batchSize;
    FCStreamingResults * _channelSearchResults;
    <FCContentContext> * _contentContext;
    id /* block */  _searchResultsBlock;
    NSString * _searchString;
    FCStreamingResults * _topicSearchResults;
    unsigned long long  _userFacingTagOptions;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) FCStreamingResults *channelSearchResults;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, copy) id /* block */ searchResultsBlock;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic, retain) FCStreamingResults *topicSearchResults;
@property (nonatomic) unsigned long long userFacingTagOptions;

- (void).cxx_destruct;
- (id)_fetchResultsForTagType:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (id)_fetchResultsForUserFacingTopicsWithInitialChannels:(id)arg1;
- (unsigned long long)batchSize;
- (id)channelSearchResults;
- (id)contentContext;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)searchResultsBlock;
- (id)searchString;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setChannelSearchResults:(id)arg1;
- (void)setContentContext:(id)arg1;
- (void)setSearchResultsBlock:(id /* block */)arg1;
- (void)setSearchString:(id)arg1;
- (void)setTopicSearchResults:(id)arg1;
- (void)setUserFacingTagOptions:(unsigned long long)arg1;
- (id)topicSearchResults;
- (unsigned long long)userFacingTagOptions;
- (bool)validateOperation;

@end
