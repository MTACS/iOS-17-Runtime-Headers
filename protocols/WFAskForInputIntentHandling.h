
@protocol WFAskForInputIntentHandling <NSObject>

@required

- (void)handleAskForInput:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFAskForInputIntentResponse *, void*
- (void)resolveDateAndTimeAnswerForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*
- (void)resolveDateAnswerForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*
- (void)resolveDefaultURLAnswerForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveNumberAnswerForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFAskForInputNumberAnswerResolutionResult *, void*
- (void)resolveQuestionForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveStringAnswerForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveTimeAnswerForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*
- (void)resolveTypeForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFAskForInputTypeResolutionResult *, void*
- (void)resolveUrlAnswerForAskForInput:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INURLResolutionResult *, void*

@optional

- (void)confirmAskForInput:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFAskForInputIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFAskForInputIntentResponse *, void*

@end
