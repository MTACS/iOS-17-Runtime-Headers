
@protocol TBCacheProvider <NSObject>

@required

- (void)cacheFetchResponse:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <TBFetchResponse> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)prune3BarsNetworks:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAllWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeWithFetchRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <TBFetchRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
