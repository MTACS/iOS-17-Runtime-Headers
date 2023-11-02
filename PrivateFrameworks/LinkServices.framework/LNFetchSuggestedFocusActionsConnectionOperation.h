
@interface LNFetchSuggestedFocusActionsConnectionOperation : LNInterfaceConnectionOperation {
    LNActionMetadata * _actionMetadata;
    id /* block */  _completionHandler;
    NSArray * _results;
    LNFocusConfigurationSuggestionContext * _suggestionContext;
}

@property (nonatomic, retain) LNActionMetadata *actionMetadata;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic, retain) LNFocusConfigurationSuggestionContext *suggestionContext;

- (void).cxx_destruct;
- (id)actionMetadata;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 actionMetadata:(id)arg2 suggestionContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)results;
- (void)setActionMetadata:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResults:(id)arg1;
- (void)setSuggestionContext:(id)arg1;
- (void)start;
- (id)suggestionContext;

@end
