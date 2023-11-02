
@interface APSigningServerRequestor : NSObject {
    unsigned long long  _serverRequestorId;
    NSURLSession * _session;
}

@property (nonatomic) unsigned long long serverRequestorId;
@property (nonatomic, retain) NSURLSession *session;

- (void).cxx_destruct;
- (bool)_retrieveResponse:(void**)arg1 andLength:(unsigned int*)arg2 fromData:(id)arg3 error:(id*)arg4;
- (id)deviceModel;
- (id)init;
- (void)sendRequest:(id)arg1 requestType:(long long)arg2 numRetry:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)sendRequestForData:(id)arg1 requestType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)serverRequestorId;
- (id)session;
- (void)setServerRequestorId:(unsigned long long)arg1;
- (void)setSession:(id)arg1;
- (id)systemNameAndVersion;
- (id)userAgentString;

@end
