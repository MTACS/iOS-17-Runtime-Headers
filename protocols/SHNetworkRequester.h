
@protocol SHNetworkRequester <NSObject>

@required

- (void)downloadResourceFromRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSHTTPURLResponse *, NSURL *, NSError *, void*
- (void)performRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSHTTPURLResponse *, NSData *, NSError *, void*

@end
