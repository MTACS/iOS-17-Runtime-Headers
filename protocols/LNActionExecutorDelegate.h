
@protocol LNActionExecutorDelegate <NSObject>

@required

- (void)executor:(LNActionExecutor *)arg1 needsConfirmationWithRequest:(LNConfirmationRequest *)arg2;
- (void)executor:(LNActionExecutor *)arg1 needsDisambiguationWithRequest:(LNDisambiguationRequest *)arg2;
- (void)executor:(LNActionExecutor *)arg1 needsValueWithRequest:(LNNeedsValueRequest *)arg2;

@optional

- (void)executor:(LNActionExecutor *)arg1 didCompleteExecutionWithResult:(LNSuccessResult *)arg2 error:(NSError *)arg3;
- (void)executor:(LNActionExecutor *)arg1 didFinishWithResult:(LNSuccessResult *)arg2 error:(NSError *)arg3;
- (void)executor:(LNActionExecutor *)arg1 didPerformActionWithResult:(LNSuccessResult *)arg2 error:(NSError *)arg3;
- (void)executor:(void *)arg1 environmentForViewSnippetWithCompletion:(void *)arg2; // needs 2 arg types, found 7: LNActionExecutor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNSnippetEnvironment *, void*
- (void)executor:(LNActionExecutor *)arg1 needsActionConfirmationWithRequest:(LNActionConfirmationRequest *)arg2;
- (void)executor:(LNActionExecutor *)arg1 needsContinueInAppWithRequest:(LNContinueInAppRequest *)arg2;
- (void)executor:(void *)arg1 preferredContentSizeForViewSnippetWithCompletion:(void *)arg2; // needs 2 arg types, found 7: LNActionExecutor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSValue *, void*
- (bool)executor:(LNActionExecutor *)arg1 shouldRunShowOutputAction:(LNAction *)arg2;
- (bool)progressIsPersistentInSystemApertureForExecutor:(LNActionExecutor *)arg1;

@end
