
@protocol __NSCFURLSessionConnectionDelegate <NSObject, NSCopying>

@required

- (void)connection:(__NSCFURLSessionConnection *)arg1 _conditionalRequirementsChanged:(bool)arg2;
- (void)connection:(void *)arg1 _willSendRequestForEstablishedConnection:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 alternatePathAvailable:(int)arg2;
- (void)connection:(void *)arg1 challenged:(void *)arg2 authCallback:(void *)arg3; // needs 3 arg types, found 9: __NSCFURLSessionConnection *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 didFinishLoadingWithError:(NSError *)arg2;
- (void)connection:(void *)arg1 didReceiveData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: __NSCFURLSessionConnection *, NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveInformationalResponse:(NSHTTPURLResponse *)arg2;
- (void)connection:(void *)arg1 didReceiveResponse:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct SessionResponseOptions { bool x1; bool x2; bool x3; bool x4; bool x5; unsigned long long x6; unsigned long long x7; }, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveSocketInputStream:(NSInputStream *)arg2 outputStream:(id)arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveTCPConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection {} *x1; struct __shared_weak_count {} *x2; })arg2 extraBytes:(NSObject<OS_dispatch_data> *)arg3;
- (void)connection:(void *)arg1 request:(void *)arg2 needsNewBodyStreamCallback:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, void*
- (void)connection:(void *)arg1 request:(void *)arg2 needsNewBodyStreamFromOffset:(void *)arg3 callback:(void *)arg4; // needs 4 arg types, found 9: __NSCFURLSessionConnection *, NSURLRequest *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, void*
- (void)connection:(__NSCFURLSessionConnection *)arg1 sentBodyBytes:(NSNumber *)arg2 totalBytes:(NSNumber *)arg3 expectedBytes:(NSNumber *)arg4;
- (void)connection:(__NSCFURLSessionConnection *)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(void *)arg1 wasRedirected:(void *)arg2 newRequest:(void *)arg3 responseCallback:(void *)arg4; // needs 4 arg types, found 9: __NSCFURLSessionConnection *, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)connection:(void *)arg1 willCacheResponse:(void *)arg2 responseCallback:(void *)arg3; // needs 3 arg types, found 8: __NSCFURLSessionConnection *, NSCachedURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCachedURLResponse *, void*
- (void)connectionWillFinishLoading:(__NSCFURLSessionConnection *)arg1;

@end
