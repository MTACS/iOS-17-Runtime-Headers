
@protocol FBKSHTTPClientProtocol <NSObject>

@required

- (void)dataForURL:(void *)arg1 success:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 13: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)dataForURLRequest:(void *)arg1 success:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 13: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)dataForURLRequest:(void *)arg1 successWithResponse:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 14: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSURLResponse *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)jsonForURLRequest:(void *)arg1 success:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 13: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@optional

- (NSHTTPCookie *)seedPortalSession;

@end
