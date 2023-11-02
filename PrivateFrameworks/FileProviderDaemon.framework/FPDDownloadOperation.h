
@interface FPDDownloadOperation : FPDActionOperation {
    FPDCoordinator * _coordinator;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) FPDownloadInfo *info;

+ (bool)_validateInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_finishedDownloadingLocator:(id)arg1 withError:(id)arg2;
- (void)_setupCreatedItemForRoot:(id)arg1;
- (id)downloadInfo;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (void)main;
- (void)sendPastUpdatesToClient:(id)arg1;

@end
