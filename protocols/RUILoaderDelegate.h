
@protocol RUILoaderDelegate <NSObject>

@optional

- (void)loader:(RUILoader *)arg1 didFailWithError:(NSError *)arg2;
- (void)loader:(RUILoader *)arg1 didFinishLoadWithError:(NSError *)arg2;
- (void)loader:(RUILoader *)arg1 didFinishLoadWithError:(NSError *)arg2 forRequest:(NSURLRequest *)arg3;
- (void)loader:(void *)arg1 didReceiveChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: RUILoader *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)loader:(RUILoader *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (void)loader:(RUILoader *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2 forRequest:(NSURLRequest *)arg3;
- (void)loader:(void *)arg1 loadResourcesForObjectModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: RUILoader *, RUIObjectModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 topActionSignal:(RUIActionSignal *)arg3;
- (NSURLRequest *)loader:(RUILoader *)arg1 willLoadRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)loader:(void *)arg1 willLoadRequest:(void *)arg2 redirectResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: RUILoader *, NSURLRequest *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, NSError *, void*
- (NSURLSessionConfiguration *)sessionConfigurationForLoader:(RUILoader *)arg1;

@end
