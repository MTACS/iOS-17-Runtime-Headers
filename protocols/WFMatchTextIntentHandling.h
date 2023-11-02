
@protocol WFMatchTextIntentHandling <NSObject>

@required

- (void)handleMatchText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFMatchTextIntentResponse *, void*
- (void)resolveCaseSensitiveForMatchText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolvePatternForMatchText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveTextForMatchText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@optional

- (void)confirmMatchText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFMatchTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFMatchTextIntentResponse *, void*

@end
