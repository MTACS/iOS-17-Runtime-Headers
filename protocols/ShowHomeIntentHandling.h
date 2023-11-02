
@protocol ShowHomeIntentHandling <NSObject>

@required

- (void)handleShowHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ShowHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ShowHomeIntentResponse *, void*
- (void)handleShowHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ShowHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ShowHomeIntentResponse *, void*
- (void)resolveFiltersForShowHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ShowHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveFiltersForShowHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ShowHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmShowHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ShowHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ShowHomeIntentResponse *, void*
- (void)confirmShowHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ShowHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ShowHomeIntentResponse *, void*

@end
