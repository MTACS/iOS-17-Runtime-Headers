
@protocol DiscoverHomeIntentHandling <NSObject>

@required

- (void)handleDiscoverHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DiscoverHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DiscoverHomeIntentResponse *, void*
- (void)handleDiscoverHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DiscoverHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DiscoverHomeIntentResponse *, void*
- (void)resolveFiltersForDiscoverHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DiscoverHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveFiltersForDiscoverHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DiscoverHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmDiscoverHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DiscoverHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DiscoverHomeIntentResponse *, void*
- (void)confirmDiscoverHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DiscoverHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DiscoverHomeIntentResponse *, void*

@end
