
@protocol INSearchForMediaIntentHandling <NSObject>

@required

- (void)handleSearchForMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSearchForMediaIntentResponse *, void*

@optional

- (void)confirmSearchForMedia:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSearchForMediaIntentResponse *, void*
- (void)resolveMediaItemsForSearchForMedia:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForMediaIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
