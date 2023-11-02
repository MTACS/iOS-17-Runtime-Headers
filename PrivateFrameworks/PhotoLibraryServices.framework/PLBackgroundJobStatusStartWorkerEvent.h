
@interface PLBackgroundJobStatusStartWorkerEvent : PLBackgroundJobStatusEvent {
    unsigned long long  _jobsCount;
    NSString * _worker;
}

@property unsigned long long jobsCount;
@property (retain) NSString *worker;

- (void).cxx_destruct;
- (unsigned long long)jobsCount;
- (void)setJobsCount:(unsigned long long)arg1;
- (void)setWorker:(id)arg1;
- (id)statusDump;
- (id)worker;

@end
