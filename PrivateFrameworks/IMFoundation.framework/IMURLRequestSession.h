
@interface IMURLRequestSession : NSObject <NSURLSessionDataDelegate> {
    bool  _requireIDSHost;
    NSURLSession * _session;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sessionWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(bool)arg3;
+ (id)sharedSession;
+ (id)sharedSessionRequiringIDSHost;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)finishTasksAndInvalidate;
- (id)initWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(bool)arg3;
- (void)performRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performRequest:(id)arg1 completionBlockWithTimingData:(id /* block */)arg2;

@end
