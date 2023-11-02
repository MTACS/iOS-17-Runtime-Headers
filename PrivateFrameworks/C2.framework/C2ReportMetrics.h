
@interface C2ReportMetrics : NSObject <C2RequestDelegate> {
    bool  _ignoreRequestThrottle;
    C2MetricOptions * _metricOptions;
    NSMutableURLRequest * _metricRequest;
    NSURLSessionTask * _metricTask;
    C2RequestOptions * _metricsTransportRequestOptions;
    NSString * _requestThrottleIdentifier;
    unsigned long long  _requestThrottleLimit;
    id /* block */  _testBehavior_didCompleteWithError;
    id /* block */  _testBehavior_tooManyTasksRunning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreRequestThrottle;
@property (nonatomic, retain) C2MetricOptions *metricOptions;
@property (nonatomic, retain) NSMutableURLRequest *metricRequest;
@property (nonatomic, retain) NSURLSessionTask *metricTask;
@property (nonatomic, retain) C2RequestOptions *metricsTransportRequestOptions;
@property (nonatomic, retain) NSString *requestThrottleIdentifier;
@property (nonatomic) unsigned long long requestThrottleLimit;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ testBehavior_didCompleteWithError;
@property (nonatomic, copy) id /* block */ testBehavior_tooManyTasksRunning;

// Image: /System/Library/PrivateFrameworks/C2.framework/C2

+ (void)_c2FormatValueForRTC:(id)arg1 keyPrefix:(id)arg2 targetDictionary:(id)arg3 multipleOperationGroups:(bool)arg4;
+ (void)_reportWithOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4 eventName:(id)arg5 startTime:(id)arg6 endTime:(id)arg7 attributes:(id)arg8;
+ (id)gzipDecode:(id)arg1;
+ (id)gzipEncode:(id)arg1;
+ (id)metricsForMetricRequestOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;
+ (void)reportMetricWithOptions:(id)arg1 genericMetricType:(long long)arg2 eventName:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 attributes:(id)arg6;
+ (void)reportNetworkEvent:(id)arg1 triggers:(int)arg2 originalSessionTask:(id)arg3;
+ (id)requestForMetricRequestOptions:(id)arg1 metrics:(id)arg2;

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
- (bool)ignoreRequestThrottle;
- (id)initWithMetricRequest:(id)arg1 metricRequestOptions:(id)arg2 ignoreRequestThrottle:(bool)arg3 requestThrottleIdentifier:(id)arg4 requestThrottleLimit:(unsigned long long)arg5;
- (id)metricOptions;
- (id)metricRequest;
- (id)metricTask;
- (id)metricsTransportRequestOptions;
- (id)requestThrottleIdentifier;
- (unsigned long long)requestThrottleLimit;
- (void)send;
- (void)setIgnoreRequestThrottle:(bool)arg1;
- (void)setMetricOptions:(id)arg1;
- (void)setMetricRequest:(id)arg1;
- (void)setMetricTask:(id)arg1;
- (void)setMetricsTransportRequestOptions:(id)arg1;
- (void)setRequestThrottleIdentifier:(id)arg1;
- (void)setRequestThrottleLimit:(unsigned long long)arg1;
- (void)setTestBehavior_didCompleteWithError:(id /* block */)arg1;
- (void)setTestBehavior_tooManyTasksRunning:(id /* block */)arg1;
- (id /* block */)testBehavior_didCompleteWithError;
- (id /* block */)testBehavior_tooManyTasksRunning;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (void)reportCKEventMetric:(id)arg1 container:(id)arg2 completionHandler:(id /* block */)arg3;

@end
