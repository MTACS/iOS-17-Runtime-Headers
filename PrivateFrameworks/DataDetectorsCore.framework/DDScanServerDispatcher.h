
@interface DDScanServerDispatcher : NSObject {
    unsigned long long  _jobIdentifier;
    bool  _memoryWarningInProgress;
    NSObject<OS_dispatch_source> * _memoryWarningSource;
    NSObject<OS_dispatch_queue> * _reportQueue;
    NSObject<OS_dispatch_queue> * _scannerQueue;
    NSMutableDictionary * _scanners;
    bool  _tearDownRequested;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
