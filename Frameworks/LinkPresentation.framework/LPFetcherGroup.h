
@interface LPFetcherGroup : NSObject {
    bool  _cancelled;
    id /* block */  _completionHandler;
    LPFetcherConfiguration * _configuration;
    bool  _done;
    bool  _doneAddingFetchers;
    unsigned int  _loggingID;
    long long  _responsePolicy;
    NSMutableArray * _tasks;
}

- (void).cxx_destruct;
- (void)_addFetcher:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_completed;
- (id)_responsesRespectingPolicy;
- (void)appendFetcher:(id)arg1;
- (void)cancel;
- (void)doneAddingFetchers;
- (void)evaluateCompleteness;
- (id)initWithPolicy:(long long)arg1 configuration:(id)arg2 description:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)numberOfActiveFetches;
- (void)prependFetcher:(id)arg1;
- (void)startFetchesIfNeeded;

@end
