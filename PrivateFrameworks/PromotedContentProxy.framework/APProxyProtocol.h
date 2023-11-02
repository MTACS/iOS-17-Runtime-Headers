
@interface APProxyProtocol : NSURLProtocol <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    NSThread * _clientThread;
    NSArray * _modes;
    long long  _requestType;
    APNSURLSessionDemultiplexer * _sessionDemux;
    double  _startTime;
    NSURLSessionDataTask * _task;
}

@property (retain) NSThread *clientThread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *modes;
@property (nonatomic) long long requestType;
@property (retain) APNSURLSessionDemultiplexer *sessionDemux;
@property double startTime;
@property (readonly) Class superclass;
@property (retain) NSURLSessionDataTask *task;

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)invalidateProxyDemultiplexerSessionForId:(id)arg1;
+ (id)properties;
+ (void)setProxyURL:(id)arg1;
+ (void)start;
+ (void)stop;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_currentRunLoopModes;
- (id)clientThread;
- (void)dealloc;
- (id)modes;
- (long long)requestType;
- (id)sessionDemux;
- (void)setClientThread:(id)arg1;
- (void)setModes:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setSessionDemux:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTask:(id)arg1;
- (void)startLoading;
- (double)startTime;
- (void)stopLoading;
- (id)task;

@end
