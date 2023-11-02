
@interface FCSearchOperation : FCOperation {
    unsigned long long  _batchSize;
    FCCloudContext * _cloudContext;
    NSString * _keyboardInputMode;
    unsigned long long  _parsecQueryID;
    double  _scale;
    FCSearchResult * _searchResult;
    id /* block */  _searchResultsBlock;
    NSString * _searchString;
    bool  _shouldFetchFullHeadline;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) FCCloudContext *cloudContext;
@property (nonatomic) NSString *keyboardInputMode;
@property (nonatomic) unsigned long long parsecQueryID;
@property (nonatomic) double scale;
@property (nonatomic, retain) FCSearchResult *searchResult;
@property (nonatomic, copy) id /* block */ searchResultsBlock;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic) bool shouldFetchFullHeadline;

- (void).cxx_destruct;
- (id)_fetchFullHeadlineResultsForArticles:(id)arg1;
- (id)_fetchResultsForArticlesWithBatchSize:(unsigned long long)arg1;
- (id)_fetchResultsForTagsWithBatchSize:(unsigned long long)arg1;
- (unsigned long long)batchSize;
- (id)cloudContext;
- (id)initWithSearchText:(id)arg1 cloudContext:(id)arg2 parsecQueryID:(unsigned long long)arg3;
- (id)keyboardInputMode;
- (void)operationWillFinishWithError:(id)arg1;
- (unsigned long long)parsecQueryID;
- (void)performOperation;
- (double)scale;
- (id)searchResult;
- (id /* block */)searchResultsBlock;
- (id)searchString;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setCloudContext:(id)arg1;
- (void)setKeyboardInputMode:(id)arg1;
- (void)setParsecQueryID:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setSearchResultsBlock:(id /* block */)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShouldFetchFullHeadline:(bool)arg1;
- (bool)shouldFetchFullHeadline;
- (bool)validateOperation;

@end
