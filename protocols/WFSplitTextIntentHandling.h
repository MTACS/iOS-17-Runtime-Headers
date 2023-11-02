
@protocol WFSplitTextIntentHandling <NSObject>

@required

- (void)handleSplitText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSplitTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSplitTextIntentResponse *, void*
- (void)resolveCustomSeparatorForSplitText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSplitTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveSeparatorForSplitText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSplitTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSplitTextSeparatorResolutionResult *, void*
- (void)resolveTextForSplitText:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WFSplitTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmSplitText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSplitTextIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSplitTextIntentResponse *, void*

@end
