
@protocol LNPerformActionExecutorDelegate <NSObject>

@required

- (long long)connectionIdentifier;
- (bool)hasValidConnection;
- (void)requestActionConfirmation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)requestContinueInApp:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)requestParameterConfirmation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)requestParameterDisambiguation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)requestParameterNeedsValue:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*

@end
