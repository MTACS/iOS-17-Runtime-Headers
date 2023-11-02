
@protocol RemoveFromWatchListIntentHandling <NSObject>

@required

- (void)handleRemoveFromWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RemoveFromWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RemoveFromWatchListIntentResponse *, void*
- (void)handleRemoveFromWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RemoveFromWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RemoveFromWatchListIntentResponse *, void*
- (void)resolveContentForRemoveFromWatchList:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: RemoveFromWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RemoveFromWatchListContentResolutionResult *, void*
- (void)resolveContentForRemoveFromWatchList:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: RemoveFromWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RemoveFromWatchListContentResolutionResult *, void*

@optional

- (void)confirmRemoveFromWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RemoveFromWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RemoveFromWatchListIntentResponse *, void*
- (void)confirmRemoveFromWatchList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RemoveFromWatchListIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RemoveFromWatchListIntentResponse *, void*

@end
