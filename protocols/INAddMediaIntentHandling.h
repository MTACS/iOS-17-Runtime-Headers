
@protocol INAddMediaIntentHandling <NSObject>

@required

- (void)handleAddMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INAddMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INAddMediaIntentResponse *, void*

@optional

- (void)confirmAddMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INAddMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INAddMediaIntentResponse *, void*
- (void)resolveMediaDestinationForAddMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INAddMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INAddMediaMediaDestinationResolutionResult *, void*
- (void)resolveMediaItemsForAddMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INAddMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
