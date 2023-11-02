
@interface PLBackgroundJobStatusStopWorkerEvent : PLBackgroundJobStatusEvent {
    unsigned long long  _pendingJobsCount;
    NSString * _worker;
}

@property unsigned long long pendingJobsCount;
@property (retain) NSString *worker;

- (void).cxx_destruct;
- (unsigned long long)pendingJobsCount;
- (void)setPendingJobsCount:(unsigned long long)arg1;
- (void)setWorker:(id)arg1;
- (id)statusDump;
- (id)worker;

@end
