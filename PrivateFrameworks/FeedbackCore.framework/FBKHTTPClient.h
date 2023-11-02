
@interface FBKHTTPClient : NSObject <FBKForegroundDataClient, FBKLoginManagerDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    bool  _didTearDown;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didTearDown;
@property (readonly) unsigned long long hash;
@property (readonly) NSHTTPCookie *seedPortalSession;
@property (retain) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_formEncodedBodyForDictionary:(id)arg1;
- (id)_keyValuePairsForKey:(id)arg1 value:(id)arg2;
- (id)bodyDataForParameters:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)bundle;
- (id)contentTypeForParameterEncoding:(unsigned long long)arg1;
- (void)dataForURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURL:(id)arg1 successWithResponse:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURLRequest:(id)arg1 successWithResponse:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)deleteAtURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)deleteResourceAtURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)didLogInWithLoginUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)didLogOutWithCompletion:(id /* block */)arg1;
- (bool)didTearDown;
- (id)init;
- (void)jsonForURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)jsonForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)logHTTPErrorWithResponse:(id)arg1 withData:(id)arg2 fromRequest:(id)arg3;
- (void)performHTTPMethod:(id)arg1 toURL:(id)arg2 parameters:(id)arg3 encoding:(unsigned long long)arg4 success:(id /* block */)arg5 error:(id /* block */)arg6;
- (void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (id)session;
- (void)setDidTearDown:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)tearDown;

@end
