
@interface NWURLLoaderHTTP : NSObject <NWURLLoader> {
    bool  _allowCaching;
    long long  _bodyKnownSize;
    NWURLLoaderCache * _cache;
    NSCachedURLResponse * _cachedResponse;
    bool  _cancelled;
    <NWURLLoaderClient> * _client;
    NWURLSessionTaskConfiguration * _configuration;
    NWConcrete_nw_connection * _connection;
    bool  _dataDelivered;
    bool  _isResponseMixed;
    bool  _loadingFromCache;
    NSObject<OS_nw_content_context> * _nextRequestContext;
    bool  _pendingCompletion;
    NSError * _pendingError;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _ready;
    NSURLRequest * _request;
    <NWURLSessionRequestBodyProvider> * _requestBodyProvider;
    NSObject<OS_nw_content_context> * _requestContext;
    id /* block */  _responseCompletionHandler;
    bool  _revalidateCachedResponse;
}

@property (nonatomic, readonly) bool allowsWrite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_sec_trust> *peerTrust;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NWConcrete_nw_connection *underlyingConnection;

- (void).cxx_destruct;
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
