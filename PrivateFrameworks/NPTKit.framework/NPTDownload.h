
@interface NPTDownload : NSObject <NSCopying, NSSecureCoding, NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NetworkQualityDelegate> {
    id /* block */  _completion;
    id  _delegate;
    NPTMetricResult * _results;
    NSObject<OS_nw_activity> * activityParent;
    NSMutableArray * buffer;
    NSString * callingClient;
    NSObject<OS_nw_activity> * downloadActivity;
    NSError * downloadError;
    NSURLSession * downloadSession;
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
    bool  smartDownload;
    double  stableSpeedToLog;
    bool  stopAtFileSizeEnabled;
    NSMutableDictionary * taskDict;
    NPTPerformanceTestConfiguration * testConfig;
    unsigned long long  timedDownloadLength;
    NSObject<OS_dispatch_source> * timeoutTimer;
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
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)aggregateResults;
- (void)cancel;
- (void)cancelDispatchTimer;
- (void)cancelDispatchTimerAndSession;
- (double)checkAndReturnSpeedStablized:(id)arg1;
- (id)checkInterfaceSpecified;
- (void)completeActivityWithReason:(int)arg1;
- (id /* block */)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (bool)finishedAllTasks;
- (bool)inTimedMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkActivityParent:(id)arg1 testConfiguration:(id)arg2;
- (bool)isLastTask;
- (bool)isTimerCancelledError:(id)arg1;
- (void)kickOffNewDownload;
- (double)minNonZeroValue:(double)arg1 comparisonValue:(double)arg2;
- (id)overAllResultByTask:(unsigned long long)arg1;
- (id)processNQResult:(id)arg1;
- (void)progress:(id)arg1;
- (id)realTimeSpeedMetric:(unsigned long long)arg1;
- (id)realTimeSpeedMetricOverall;
- (id)results;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResults:(id)arg1;
- (id)setupNewDownloadTask;
- (void)setupTimer;
- (void)startDownloadWithCompletion:(id /* block */)arg1;
- (void)startLegacyDownloadWithCompletion:(id /* block */)arg1;
- (void)startNQDownloadWithCompletion:(id /* block */)arg1;
- (void)startTasks;

@end
