
@interface LNActionExecutorPassthroughDelegate : NSObject <LNActionExecutorDelegate> {
    id /* block */  _completionHandler;
    <LNActionExecutorDelegate> * _delegate;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <LNActionExecutorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)delegate;
- (void)executor:(id)arg1 continueInAppWithRequest:(id)arg2;
- (void)executor:(id)arg1 didCompleteExecutionWithResult:(id)arg2 error:(id)arg3;
- (void)executor:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)executor:(id)arg1 didPerformActionWithResult:(id)arg2 error:(id)arg3;
- (void)executor:(id)arg1 environmentForViewSnippetWithCompletion:(id /* block */)arg2;
- (void)executor:(id)arg1 needsActionConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;
- (void)executor:(id)arg1 preferredContentSizeForViewSnippetWithCompletion:(id /* block */)arg2;
- (bool)executor:(id)arg1 shouldRunShowOutputAction:(id)arg2;
- (id)initWithShowOutputActionDelegate:(id)arg1 performCompletionHandler:(id /* block */)arg2;

@end
