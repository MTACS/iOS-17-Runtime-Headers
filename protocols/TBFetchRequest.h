
@protocol TBFetchRequest <NSObject, NSCopying>

@required

- (bool)cacheable;
- (<TBFetchRequestDescriptor> *)descriptor;
- (void)handleResponse:(id <TBFetchResponse>)arg1;
- (id /* block */)preferLocalHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (id /* block */)resultsHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, <TBFetchResponse> *, id /* block */, void*, void, id /* block */, void*, bool, void*, id, SEL
- (void)setPreferLocalHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSArray *, void*
- (void)setResultsHandler:(void *)arg1; // needs 1 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TBFetchResponse> *, id /* block */, void*, void, id /* block */, void*, bool, void*
- (void)setSourcePolicy:(unsigned long long)arg1;
- (unsigned long long)sourcePolicy;

@optional

- (void)handlePreferLocalResponse:(NSArray *)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;
- (NSDictionary *)userInfo;

@end
