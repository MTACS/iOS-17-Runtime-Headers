
@interface LNFetchSuggestedActionsConnectionOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
    NSArray * _results;
    NSString * _siriLanguageCode;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic, copy) NSString *siriLanguageCode;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 siriLanguageCode:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)results;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResults:(id)arg1;
- (void)setSiriLanguageCode:(id)arg1;
- (id)siriLanguageCode;
- (void)start;

@end
