
@interface LKHangDetectionQueue : NSObject {
    LKBacktraceLogger * _backtraceLogger;
    NSArray * _lastPrintedCallStack;
    NSObject<OS_dispatch_queue> * _logQueue;
    double  _threshold;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, retain) LKBacktraceLogger *backtraceLogger;
@property (nonatomic, copy) NSArray *lastPrintedCallStack;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic) double threshold;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workerQueue;

- (void).cxx_destruct;
- (id)backtraceLogger;
- (id)init;
- (id)initWithQoS:(unsigned int)arg1 hangThreshold:(double)arg2;
- (id)lastPrintedCallStack;
- (id)logQueue;
- (void)queueBlock:(id /* block */)arg1;
- (void)setBacktraceLogger:(id)arg1;
- (void)setLastPrintedCallStack:(id)arg1;
- (void)setLogQueue:(id)arg1;
- (void)setThreshold:(double)arg1;
- (void)setWorkerQueue:(id)arg1;
- (double)threshold;
- (id)workerQueue;

@end
