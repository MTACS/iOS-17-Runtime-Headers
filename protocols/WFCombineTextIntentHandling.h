
@protocol WFCombineTextIntentHandling <NSObject>

@required

- (void)handleCombineText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFCombineTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFCombineTextIntentResponse *, void*
- (void)resolveCustomSeparatorForCombineText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFCombineTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveSeparatorForCombineText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFCombineTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFCombineTextSeparatorResolutionResult *, void*
- (void)resolveTextForCombineText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFCombineTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmCombineText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFCombineTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFCombineTextIntentResponse *, void*

@end
