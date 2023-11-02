
@interface PHATaskWorkerJob : PHAWorkerJob {
    NSObject<OS_dispatch_queue> * _executionQueue;
    PGManager * _graphManager;
    bool  _isCancelled;
    MAProgressReporter * _progressReporter;
    <PHATask> * _task;
    unsigned long long  _taskCompletionState;
    PHATaskHealthRecorder * _taskHealthRecorder;
}

@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool succeeded;
@property (nonatomic, readonly) <PHATask> *task;
@property (readonly) unsigned long long taskCompletionState;

+ (id)taskHealthRecorderLoggingConnection;
+ (id)taskProgressLoggingConnection;

- (void).cxx_destruct;
- (bool)_processWithJobTimeHandler:(id)arg1 loggingConnection:(id)arg2 recordHealth:(bool)arg3 error:(id*)arg4;
- (float)completionScore;
- (bool)finished;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 graphManager:(id)arg3 task:(id)arg4;
- (bool)isCancelled;
- (void)markTaskAsCompleted;
- (bool)processWithJobTimeHandler:(id)arg1 loggingConnection:(id)arg2 error:(id*)arg3;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)succeeded;
- (id)task;
- (unsigned long long)taskCompletionState;

@end
