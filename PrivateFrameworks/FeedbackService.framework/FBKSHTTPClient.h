
@interface FBKSHTTPClient : NSObject <FBKSHTTPClientProtocol, NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSHTTPCookie * _seedPortalSession;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSHTTPCookie *seedPortalSession;
@property (retain) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dataForURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURLRequest:(id)arg1 successWithResponse:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)formattedRequestHeader:(id)arg1 session:(id)arg2 cookies:(id)arg3;
- (id)init;
- (void)jsonForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)logHTTPErrorWithResponse:(id)arg1 withData:(id)arg2 fromRequest:(id)arg3;
- (id)seedPortalSession;
- (id)session;
- (void)setSeedPortalSession:(id)arg1;
- (void)setSession:(id)arg1;

@end
