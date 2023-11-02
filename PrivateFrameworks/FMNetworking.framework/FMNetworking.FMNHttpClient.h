
@interface FMNetworking.FMNHttpClient : NSObject <NSURLSessionDelegate> {
    void authenticationChallengeHandler;
    void bundleIdentifierFallback;
    void credential;
    void httpSuccessCodeMax;
    void httpSuccessCodeMin;
    void session;
    void sessionLock;
    void statusCodeHandlerQueue;
    void statusCodeHandlers;
    void urlSessionFactory;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;

@end
