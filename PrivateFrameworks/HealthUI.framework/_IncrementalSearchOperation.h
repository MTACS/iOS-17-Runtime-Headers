
@interface _IncrementalSearchOperation : NSOperation {
    NSRegularExpression * _regularExpression;
    NSString * _searchBody;
    id /* block */  _searchFinishedBlock;
    id /* block */  _searchResultsBlock;
}

@property (readonly) NSRegularExpression *regularExpression;
@property (readonly) NSString *searchBody;
@property (readonly) id /* block */ searchFinishedBlock;
@property (readonly) id /* block */ searchResultsBlock;

- (void).cxx_destruct;
- (id)initWithSearchString:(id)arg1 searchBody:(id)arg2 resultsBlock:(id /* block */)arg3 finishedBlock:(id /* block */)arg4;
- (void)main;
- (id)regularExpression;
- (id)searchBody;
- (id /* block */)searchFinishedBlock;
- (id /* block */)searchResultsBlock;

@end
