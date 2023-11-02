
@protocol NWURLLoaderClient <NSObject>

@required

- (NSObject<OS_nw_protocol_metadata> *)clientMetadata;
- (void*)joiningContext;
- (void)loaderBetterPathAvailable;
- (void)loaderConnectedWithCNAMEChain:(NSArray *)arg1;
- (NSURLSessionDataTask *)loaderDataTask;
- (void)loaderDidReceiveChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)loaderDidReceiveClientCertificateChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_sec_identity> *, void*
- (void)loaderDidReceiveServerTrustChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_sec_trust> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)loaderDidSendBodyData:(void *)arg1 totalBytesSent:(void *)arg2 totalBytesExpectedToSend:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: long long, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)loaderNeedsBodyProviderFromOffset:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NWURLSessionRequestBodyProvider> *, void*
- (void)loaderPreparingConnection;
- (void)loaderRunDelegateBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSURLSessionTask *)loaderTask;
- (void)loaderWaitingForConnectivity;
- (void)loaderWillCacheResponse:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSCachedURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCachedURLResponse *, void*
- (void)loaderWillPerformHSTSUpgrade;
- (void)loaderWillPerformHTTPRedirection:(NSHTTPURLResponse *)arg1 newRequest:(NSURLRequest *)arg2;
- (void)loaderWillPerformHTTPRedirection:(void *)arg1 newRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*

@end
