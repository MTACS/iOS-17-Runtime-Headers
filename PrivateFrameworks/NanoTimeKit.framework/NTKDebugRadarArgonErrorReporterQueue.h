
@interface NTKDebugRadarArgonErrorReporterQueue : NSObject {
    bool  _canSubmitReports;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _queueDirectoryPath;
    NTKFirstUnlockQueue * _unlockQueue;
}

@property (nonatomic) bool canSubmitReports;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *queueDirectoryPath;
@property (nonatomic, readonly) NTKFirstUnlockQueue *unlockQueue;

- (void).cxx_destruct;
- (void)_queue_deleteStagedReports;
- (void)_queue_handleEnqueuedReports;
- (bool)canSubmitReports;
- (void)enqueueReportWithTitle:(id)arg1 description:(id)arg2 attachmentURLs:(id)arg3;
- (id)initWithQueueDirectoryPath:(id)arg1;
- (id)queue;
- (id)queueDirectoryPath;
- (void)queue_enqueueReportWithTitle:(id)arg1 description:(id)arg2 attachmentURLs:(id)arg3;
- (void)setCanSubmitReports:(bool)arg1;
- (id)unlockQueue;

@end
