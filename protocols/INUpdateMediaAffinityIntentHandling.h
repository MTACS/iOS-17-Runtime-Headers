
@protocol INUpdateMediaAffinityIntentHandling <NSObject>

@required

- (void)handleUpdateMediaAffinity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INUpdateMediaAffinityIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INUpdateMediaAffinityIntentResponse *, void*

@optional

- (void)confirmUpdateMediaAffinity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INUpdateMediaAffinityIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INUpdateMediaAffinityIntentResponse *, void*
- (void)resolveAffinityTypeForUpdateMediaAffinity:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateMediaAffinityIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INMediaAffinityTypeResolutionResult *, void*
- (void)resolveMediaItemsForUpdateMediaAffinity:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INUpdateMediaAffinityIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
