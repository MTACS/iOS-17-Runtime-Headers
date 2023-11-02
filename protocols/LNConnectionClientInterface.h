
@protocol LNConnectionClientInterface <NSObject>

@required

- (void)requestActionConfirmation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LNActionConfirmationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNActionConfirmationResponse *, NSError *, void*
- (void)requestContinueInApp:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LNContinueInAppRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNContinueInAppResponse *, NSError *, void*
- (void)requestParameterConfirmation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LNConfirmationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNConfirmationResponse *, NSError *, void*
- (void)requestParameterDisambiguation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LNDisambiguationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNDisambiguationResponse *, NSError *, void*
- (void)requestParameterNeedsValue:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LNNeedsValueRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNNeedsValueResponse *, NSError *, void*
- (void)requestViewSnippetEnvironmentWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNSnippetEnvironment *, void*

@end
