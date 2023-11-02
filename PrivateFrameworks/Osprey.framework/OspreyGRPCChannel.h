
@interface OspreyGRPCChannel : NSObject <NSURLSessionTaskDelegate> {
    AbsintheAuthenticationDurations * _absintheDurations;
    NSURL * _baseURL;
    id /* block */  _connectionMetricsHandler;
    OspreyMessageWriter * _messageWriter;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _session;
    NSMapTable * _taskToContext;
}

@property (nonatomic, retain) AbsintheAuthenticationDurations *absintheDurations;
@property (nonatomic, copy) id /* block */ connectionMetricsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)_startTask:(id)arg1;
- (id)absintheDurations;
- (void)bidirectionalStreamingRequest:(id)arg1 streamingContext:(id)arg2;
- (id)bidirectionalStreamingRequest:(id)arg1 streamingResponseHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)cancel;
- (id)clientStreamingContextForRequest:(id)arg1 streamingResponseHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)clientStreamingRequest:(id)arg1 responseHandler:(id /* block */)arg2 streamingContext:(id)arg3;
- (void)close;
- (id /* block */)connectionMetricsHandler;
- (void)dealloc;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 queue:(id)arg3;
- (void)preconnect;
- (void)serverStreamingRequest:(id)arg1 requestData:(id)arg2 streamingResponseHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setAbsintheDurations:(id)arg1;
- (void)setAbsintheTimestampForKey:(id)arg1;
- (void)setConnectionMetricsHandler:(id /* block */)arg1;
- (void)unaryRequest:(id)arg1 requestData:(id)arg2 responseHandler:(id /* block */)arg3;

@end
