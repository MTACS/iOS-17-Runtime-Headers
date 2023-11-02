
@interface CKLLog : NSObject {
    NSDate * _absoluteStartDate;
    bool  _colorOutput;
    id /* block */  _completionHandler;
    OSLogEventLiveStream * _liveStream;
    OSLogEventStream * _logEventStream;
    bool  _onlyTestLogs;
    NSString * _processName;
    unsigned long long  _source;
    double  _startTimeOffset;
    NSMutableArray * _streamObservers;
    bool  _wantsSimulatorLogs;
}

@property (nonatomic, retain) NSDate *absoluteStartDate;
@property (nonatomic) bool colorOutput;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) OSLogEventLiveStream *liveStream;
@property (nonatomic, retain) OSLogEventStream *logEventStream;
@property (nonatomic) bool onlyTestLogs;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned long long source;
@property (nonatomic) double startTimeOffset;
@property (nonatomic, retain) NSMutableArray *streamObservers;
@property (nonatomic) bool wantsSimulatorLogs;

+ (id)preparedLiveStreamFromLiveStore:(id)arg1;
+ (id)preparedStreamFromStore:(id)arg1;

- (void).cxx_destruct;
- (id)absoluteStartDate;
- (void)addStreamObserver:(id)arg1;
- (bool)colorOutput;
- (id /* block */)completionHandler;
- (id)initForHostStream;
- (id)initInternal;
- (id)initWithArchiveAtURL:(id)arg1;
- (id)liveStream;
- (id)logEventStream;
- (bool)onlyTestLogs;
- (id)processName;
- (void)setAbsoluteStartDate:(id)arg1;
- (void)setColorOutput:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLiveStream:(id)arg1;
- (void)setLogEventStream:(id)arg1;
- (void)setOnlyTestLogs:(bool)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStartTimeOffset:(double)arg1;
- (void)setStreamObservers:(id)arg1;
- (void)setWantsSimulatorLogs:(bool)arg1;
- (unsigned long long)source;
- (double)startTimeOffset;
- (void)streamLogsWithCompletion:(id /* block */)arg1;
- (id)streamObservers;
- (bool)wantsSimulatorLogs;

@end
