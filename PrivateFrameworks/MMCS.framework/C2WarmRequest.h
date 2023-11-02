
@interface C2WarmRequest : NSObject <C2RequestDelegate> {
    id /* block */  _callback;
    C2RequestOptions * _warmOptions;
    NSMutableURLRequest * _warmRequest;
    NSURLSessionTask * _warmTask;
}

@property (nonatomic, copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) C2RequestOptions *warmOptions;
@property (nonatomic, retain) NSMutableURLRequest *warmRequest;
@property (nonatomic, retain) NSURLSessionTask *warmTask;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id /* block */)callback;
- (id)initWithData:(id)arg1 callback:(id /* block */)arg2;
- (void)send;
- (void)setCallback:(id /* block */)arg1;
- (void)setWarmOptions:(id)arg1;
- (void)setWarmRequest:(id)arg1;
- (void)setWarmTask:(id)arg1;
- (id)warmOptions;
- (id)warmRequest;
- (id)warmTask;

@end
