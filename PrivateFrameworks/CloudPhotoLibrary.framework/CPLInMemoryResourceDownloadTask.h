
@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {
    CPLPlaceholderRecord * _cloudRecord;
    CPLResource * _cloudResource;
    id /* block */  _completionHandler;
    id /* block */  _launchHandler;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLEngineTransportTask> * _transportTask;
}

@property (nonatomic, readonly) CPLPlaceholderRecord *cloudRecord;
@property (nonatomic, readonly) CPLResource *cloudResource;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) id /* block */ launchHandler;

+ (id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)associateCloudResource:(id)arg1 ofRecord:(id)arg2;
- (void)cancelTask;
- (id)cloudRecord;
- (id)cloudResource;
- (id /* block */)completionHandler;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (id)initWithResource:(id)arg1 taskIdentifier:(id)arg2 launchHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)launch;
- (id /* block */)launchHandler;
- (void)launchTransportTask:(id)arg1;

@end
