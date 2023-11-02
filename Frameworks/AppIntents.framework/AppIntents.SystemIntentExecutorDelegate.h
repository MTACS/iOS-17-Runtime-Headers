
@interface AppIntents.SystemIntentExecutorDelegate : NSObject <LNActionExecutorDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
}

- (void).cxx_destruct;
- (void)executor:(id)arg1 didCompleteExecutionWithResult:(id)arg2 error:(id)arg3;
- (void)executor:(id)arg1 needsActionConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;
- (id)init;

@end
