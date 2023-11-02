
@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {
    bool  _backgroundTask;
    CPLResource * _cloudResource;
    <CPLEngineTransportTask> * _transportTask;
}

@property (getter=isBackgroundTask, nonatomic) bool backgroundTask;
@property (nonatomic, retain) CPLResource *cloudResource;
@property (nonatomic, retain) <CPLEngineTransportTask> *transportTask;

- (void).cxx_destruct;
- (id)cloudResource;
- (bool)isBackgroundTask;
- (void)setBackgroundTask:(bool)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTransportTask:(id)arg1;
- (id)transportTask;

@end
