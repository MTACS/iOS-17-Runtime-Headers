
@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {
    NSString * _activeQueuesStatusAtEnqueingTime;
    id /* block */  _cancelHandler;
    bool  _cancelledByEngine;
    NSString * _clientBundleID;
    CPLPlaceholderRecord * _cloudRecord;
    CPLResource * _cloudResource;
    id /* block */  _completionHandler;
    id /* block */  _didStartHandler;
    id /* block */  _launchHandler;
    unsigned long long  _preemptingCount;
    id /* block */  _progressHandler;
    NSMutableArray * _stateProgressDates;
    CPLRecordTarget * _target;
    unsigned long long  _taskIdentifierForQueue;
    NSString * _transportIdentifier;
    CPLTransportScopeMapping * _transportScopeMapping;
    <CPLEngineTransportResourcesDownloadTask> * _transportTask;
}

@property (nonatomic, readonly, copy) id /* block */ cancelHandler;
@property (getter=isCancelledByEngine, nonatomic) bool cancelledByEngine;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, readonly) CPLPlaceholderRecord *cloudRecord;
@property (nonatomic, readonly) CPLResource *cloudResource;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) id /* block */ didStartHandler;
@property (nonatomic, readonly, copy) id /* block */ launchHandler;
@property (nonatomic, readonly, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) CPLRecordTarget *target;
@property (nonatomic) unsigned long long taskIdentifierForQueue;
@property (nonatomic, copy) NSString *transportIdentifier;
@property (nonatomic, retain) NSData *transportScope;
@property (nonatomic, retain) CPLTransportScopeMapping *transportScopeMapping;
@property (nonatomic) <CPLEngineTransportResourcesDownloadTask> *transportTask;
@property (nonatomic, readonly) bool willGenerateReport;

+ (void)initialize;
+ (unsigned long long)maximumResourceDownloadSizeForResourceType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)associateCloudResource:(id)arg1 ofRecord:(id)arg2;
- (id /* block */)cancelHandler;
- (void)cancelTask;
- (id)clientBundleID;
- (id)cloudRecord;
- (id)cloudResource;
- (id /* block */)completionHandler;
- (id /* block */)didStartHandler;
- (id)initWithResource:(id)arg1 taskIdentifier:(id)arg2 target:(id)arg3 launchHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5 didStartHandler:(id /* block */)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (bool)isCancelledByEngine;
- (void)launch;
- (id /* block */)launchHandler;
- (void)noteActiveQueuesStatusAtEnqueingTime:(id)arg1;
- (void)noteStateDidProgress:(unsigned long long)arg1;
- (void)noteTaskHasBeenPreempted;
- (id /* block */)progressHandler;
- (void)setCancelledByEngine:(bool)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setTaskIdentifierForQueue:(unsigned long long)arg1;
- (void)setTransportIdentifier:(id)arg1;
- (void)setTransportScope:(id)arg1;
- (void)setTransportScopeMapping:(id)arg1;
- (void)setTransportTask:(id)arg1;
- (id)target;
- (unsigned long long)taskIdentifierForQueue;
- (id)transportIdentifier;
- (id)transportScope;
- (id)transportScopeMapping;
- (id)transportTask;
- (bool)willGenerateReport;

@end
