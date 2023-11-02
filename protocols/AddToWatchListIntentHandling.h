
@protocol AddToWatchListIntentHandling <NSObject>

@required

- (void)handleAddToWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddToWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddToWatchListIntentResponse *, void*
- (void)handleAddToWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddToWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddToWatchListIntentResponse *, void*
- (void)resolveContentForAddToWatchList:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AddToWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddToWatchListContentResolutionResult *, void*
- (void)resolveContentForAddToWatchList:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: AddToWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddToWatchListContentResolutionResult *, void*

@optional

- (void)confirmAddToWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddToWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddToWatchListIntentResponse *, void*
- (void)confirmAddToWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AddToWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AddToWatchListIntentResponse *, void*

@end
