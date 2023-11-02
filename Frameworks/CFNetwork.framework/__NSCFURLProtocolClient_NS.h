
@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {
    struct URLProtocolClient { int (**x1)(); } * _cf;
    struct _CFURLAuthChallenge { } * _cfChallenge;
    NSURLAuthenticationChallenge * _challenge;
    void * _prot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (void)dealloc;

@end
