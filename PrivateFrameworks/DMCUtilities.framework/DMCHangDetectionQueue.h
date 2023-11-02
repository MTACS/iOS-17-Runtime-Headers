
@interface DMCHangDetectionQueue : NSObject {
    DMCBacktraceLogger * _backtraceLogger;
    _Atomic int  _blockNum;
    int  _lastExecutedJob;
    NSObject<OS_dispatch_queue> * _logQueue;
    DMCBacktraceLogger * _logger;
    NSString * _owner;
    bool  _shouldDumpStackshot;
    double  _threshold;
    bool  _verboseLogEnabled;
    NSOperationQueue * _workerQueue;
}

@property (nonatomic, retain) DMCBacktraceLogger *backtraceLogger;
@property (nonatomic) _Atomic int blockNum;
@property (nonatomic) int lastExecutedJob;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic, retain) DMCBacktraceLogger *logger;
@property (nonatomic, copy) NSString *owner;
@property (nonatomic) bool shouldDumpStackshot;
@property (nonatomic) double threshold;
@property (nonatomic) bool verboseLogEnabled;
@property (nonatomic, retain) NSOperationQueue *workerQueue;

- (void).cxx_destruct;
- (id)backtraceLogger;
- (int)blockNum;
- (id)init;
- (id)initWithQoS:(long long)arg1 hangThreshold:(double)arg2 owner:(id)arg3;
- (int)lastExecutedJob;
- (id)logQueue;
- (id)logger;
- (id)owner;
- (void)queueBlock:(id /* block */)arg1;
- (void)setBacktraceLogger:(id)arg1;
- (void)setBlockNum:(int)arg1;
- (void)setLastExecutedJob:(int)arg1;
- (void)setLogQueue:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setShouldDumpStackshot:(bool)arg1;
- (void)setThreshold:(double)arg1;
- (void)setVerboseLogEnabled:(bool)arg1;
- (void)setWorkerQueue:(id)arg1;
- (bool)shouldDumpStackshot;
- (double)threshold;
- (bool)verboseLogEnabled;
- (void)waitUntilAllBlocksAreFinished;
- (id)workerQueue;

@end
