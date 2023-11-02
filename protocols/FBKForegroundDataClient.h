
@protocol FBKForegroundDataClient <FBKSHTTPClientProtocol>

@required

- (void)dataForURL:(void *)arg1 successWithResponse:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 14: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSURLResponse *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)deleteAtURL:(void *)arg1 parameters:(void *)arg2 encoding:(void *)arg3 success:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 15: NSURL *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)deleteResourceAtURL:(void *)arg1 success:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 13: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)jsonForURL:(void *)arg1 success:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 13: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)postToURL:(void *)arg1 parameters:(void *)arg2 encoding:(void *)arg3 success:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 15: NSURL *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)putToURL:(void *)arg1 parameters:(void *)arg2 encoding:(void *)arg3 success:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 15: NSURL *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
