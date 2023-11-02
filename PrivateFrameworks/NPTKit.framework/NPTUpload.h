
@interface NPTUpload : NSObject <NSCopying, NSSecureCoding, NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NetworkQualityDelegate> {
    id /* block */  _completion;
    id  _delegate;
    NPTMetricResult * _results;
    NSObject<OS_nw_activity> * activityParent;
    NSMutableArray * buffer;
    NSString * callingClient;
    NSDate * endTimeAggregate;
    NSDate * initialTime;
    bool  legacy;
    unsigned long long  maxConcurrentStreams;
    double  maxSpeedObserved;
    NetworkQualityConfiguration * nqConfig;
    NetworkQualityAssessment * nqTest;
    unsigned long long  processedStreamEndCount;
    double  recentBufferTime;
    NSMutableURLRequest * request;
    bool  smartUpload;
    double  stableSpeedToLog;
    bool  stopAtFileSizeEnabled;
    NSMutableDictionary * taskDict;
    NPTPerformanceTestConfiguration * testConfig;
    unsigned long long  timedUploadLength;
    NSObject<OS_dispatch_source> * timeoutTimer;
    NSObject<OS_nw_activity> * uploadActivity;
    NSError * uploadError;
    unsigned long long  uploadFileSize;
    NSURLSession * uploadSession;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPTMetricResult *results;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (id)aggregateResults;
- (void)cancel;
- (void)cancelDispatchTimer;
- (void)cancelDispatchTimerAndSession;
- (double)checkAndReturnSpeedStablized:(id)arg1;
- (id)checkInterfaceSpecified;
- (void)cleanUp;
- (void)completeActivityWithReason:(int)arg1;
- (id /* block */)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createHTTPBodyWithBoundary:(id)arg1 usingData:(id)arg2 withMimeType:(id)arg3 withFileName:(id)arg4;
- (id)createRandomDataOfSize:(unsigned long long)arg1;
- (id)createTempFileWithData:(id)arg1 named:(id)arg2;
- (id)delegate;
- (int)determineSuspensionThreshold;
- (void)encodeWithCoder:(id)arg1;
- (bool)finishedAllTasks;
- (bool)inTimedMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkActivityParent:(id)arg1 testConfiguration:(id)arg2;
- (bool)isLastTask;
- (bool)isTimerCancelledError:(id)arg1;
- (void)kickOffNewUpload:(long long)arg1 suspensionThresholdEnum:(int)arg2;
- (double)minNonZeroValue:(double)arg1 comparisonValue:(double)arg2;
- (id)processNQResult:(id)arg1;
- (void)progress:(id)arg1;
- (id)realTimeSpeedMetricOverall;
- (void)removeTempFileNamed:(id)arg1;
- (id)results;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResults:(id)arg1;
- (id)setupNewUploadTask:(unsigned long long)arg1 suspensionThresholdEnum:(int)arg2;
- (void)setupTimer;
- (void)startLegacyUploadWithCompletion:(id /* block */)arg1;
- (void)startNQUploadWithCompletion:(id /* block */)arg1;
- (void)startTasks;
- (void)startUploadWithCompletion:(id /* block */)arg1;

@end
