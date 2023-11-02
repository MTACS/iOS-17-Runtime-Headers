
@protocol ATXProactiveSuggestionRealTimeProviderDelegateProtocol <NSObject>

@required

- (void)pingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)suggestionsForContextualActionSuggestionRequest:(void *)arg1 clientModelId:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: ATXContextualActionSuggestionRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXSuggestionRequestResponse *, void*
- (void)suggestionsForIntentSuggestionRequest:(void *)arg1 clientModelId:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: ATXIntentSuggestionRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXSuggestionRequestResponse *, void*
- (void)suggestionsForInteractionSuggestionRequest:(void *)arg1 clientModelId:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: ATXInteractionSuggestionRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXSuggestionRequestResponse *, void*

@end
