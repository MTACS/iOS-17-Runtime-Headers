
@interface NWURLLoader : NSObject <NSURLProtocolClient, NWURLLoader> {
    id /* block */  _awaitingResponse;
    NSURLCache * _cache;
    unsigned long long  _cacheStoragePolicy;
    <NWURLLoaderClient> * _client;
    bool  _complete;
    NWURLSessionTaskConfiguration * _configuration;
    NSObject<OS_dispatch_data> * _dataToCache;
    NSError * _error;
    unsigned long long  _maxItemSizeToCache;
    NSURLProtocol * _protocol;
    Class  _protocolClass;
    NSObject<OS_dispatch_queue> * _queue;
    NWURLSessionReadRequest * _readRequest;
    NSURLRequest * _request;
    NSURLResponse * _response;
}

@property (nonatomic, readonly) bool allowsWrite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_sec_trust> *peerTrust;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_nw_connection> *underlyingConnection;

- (void).cxx_destruct;
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (bool)allowsWrite;
- (id)peerTrust;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)readResponse:(id /* block */)arg1;
- (void)responseIsMixed;
- (void)start:(id /* block */)arg1;
- (void)stop;
- (id)underlyingConnection;
- (void)updateClient:(id)arg1;
- (void)writeData:(id)arg1 complete:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
