
@interface PLBackgroundJobStatusFinishWorkerEvent : PLBackgroundJobStatusEvent {
    NSString * _worker;
}

@property (retain) NSString *worker;

- (void).cxx_destruct;
- (void)setWorker:(id)arg1;
- (id)statusDump;
- (id)worker;

@end
