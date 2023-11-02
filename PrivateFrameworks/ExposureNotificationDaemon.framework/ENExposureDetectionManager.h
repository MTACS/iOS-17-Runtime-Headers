
@interface ENExposureDetectionManager : NSObject {
    bool  _activated;
    ENConfigurationStore * _configurationStore;
    <ENExposureDetectionManagerDelegate> * _delegate;
    NSBackgroundActivityScheduler * _detectionScheduler;
    ENDownloadManager * _downloadManager;
    bool  _enableNativeExposureDetection;
    ENExposureDatabase * _exposureDatabase;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _scheduleDetectionAutomatically;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    ENXPCServiceClient * _xpcServiceClient;
}

@property (nonatomic) <ENExposureDetectionManagerDelegate> *delegate;
@property (nonatomic, readonly) NSBackgroundActivityScheduler *detectionScheduler;
@property (nonatomic) bool enableNativeExposureDetection;
@property (nonatomic) bool scheduleDetectionAutomatically;

- (void).cxx_destruct;
- (void)_activate;
- (bool)_applyRegionalConfigurationToDetectionSession:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)_createDetectionSessionWithError:(id*)arg1;
- (void)_downloadsDidBecomeAvailable:(id)arg1;
- (void)_exposureDetectionSession:(id)arg1 finishedWithResult:(id)arg2;
- (id)_getDelegateWithError:(id*)arg1;
- (void)_invalidate;
- (void)_performNativeExposureDetectionWithScheduler:(id)arg1 resultHandler:(id /* block */)arg2;
- (long long)_processFileAtURL:(id)arg1 publicKey:(id)arg2 endpoint:(id)arg3 session:(id)arg4 error:(id*)arg5;
- (id)_publicKeyForRegion:(id)arg1 dictionary:(id)arg2;
- (bool)_scheduleNativeExposureDetection;
- (void)_scheduleNativeExposureDetectionForced:(bool)arg1;
- (void)_unscheduleNativeExposureDetection;
- (void)activate;
- (id)createDetectionSessionForClient:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)createFileSession;
- (id)createNativeDetectionSessionWithError:(id*)arg1;
- (id)createScheduler;
- (id)createXPCServiceClient;
- (id)delegate;
- (id)detectionScheduler;
- (bool)enableNativeExposureDetection;
- (id)initWithConfigurationStore:(id)arg1 downloadManager:(id)arg2 exposureDatabase:(id)arg3 queue:(id)arg4;
- (void)invalidate;
- (void)performNativeExposureDetectionWithResultHandler:(id /* block */)arg1;
- (bool)scheduleDetectionAutomatically;
- (void)scheduleNativeExposureDetectionForced:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableNativeExposureDetection:(bool)arg1;
- (void)setScheduleDetectionAutomatically:(bool)arg1;

@end
