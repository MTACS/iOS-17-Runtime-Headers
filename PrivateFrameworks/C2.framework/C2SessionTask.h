
@interface C2SessionTask : NSObject <C2SessionTaskDelegate> {
    NSObject<OS_os_activity> * _activity;
    unsigned int  _attemptCount;
    <C2RequestDelegate> * _delegate;
    double  _initTime;
    bool  _isComplete;
    C2RequestOptions * _options;
    NSMutableSet * _outstandingCallbacks;
    double  _resetTime;
    <C2SessionTaskDelegate> * _sessionTaskDelegate;
    NSURLSessionDataTask * _task;
    NSURLSessionTaskMetrics * _taskMetrics;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic) unsigned int attemptCount;
@property (nonatomic, readonly) bool callbackHung;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <C2RequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initTime;
@property (nonatomic) bool isComplete;
@property (nonatomic, readonly, copy) C2RequestOptions *options;
@property (nonatomic, retain) NSMutableSet *outstandingCallbacks;
@property (nonatomic) double resetTime;
@property (nonatomic, retain) <C2SessionTaskDelegate> *sessionTaskDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionDataTask *task;
@property (nonatomic, retain) NSURLSessionTaskMetrics *taskMetrics;

+ (id)callbackHealthQueue;
+ (double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2;
+ (double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)activity;
- (unsigned int)attemptCount;
- (bool)callbackHung;
- (void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didFinishCollectingMetrics:(id)arg1;
- (void)handleCallbackForTask:(id)arg1 callback:(id /* block */)arg2;
- (double)initTime;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3;
- (void)invalidate;
- (bool)isComplete;
- (id)options;
- (id)outstandingCallbacks;
- (double)resetTime;
- (id)sessionTaskDelegate;
- (void)setAttemptCount:(unsigned int)arg1;
- (void)setInitTime:(double)arg1;
- (void)setIsComplete:(bool)arg1;
- (void)setOutstandingCallbacks:(id)arg1;
- (void)setResetTime:(double)arg1;
- (void)setSessionTaskDelegate:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (id)task;
- (id)taskDescription;
- (id)taskIdentifier;
- (id)taskMetrics;
- (void)testBehavior_triggerCallbackHang;

@end
