
@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsService, NDAnalyticsUploadSchedulerDelegate> {
    NDAnalyticsEnvelopeStore * _envelopeStore;
    NFMutexLock * _keyValueStoreLock;
    FCKeyValueStore * _lastUploadDatesByContentType;
    NDAnalyticsPayloadAssembler * _payloadAssembler;
    NDAnalyticsPayloadUploader * _payloadUploader;
    NDAnalyticsUploadScheduler * _uploadScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NDAnalyticsEnvelopeStore *envelopeStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFMutexLock *keyValueStoreLock;
@property (nonatomic, retain) FCKeyValueStore *lastUploadDatesByContentType;
@property (nonatomic, retain) NDAnalyticsPayloadAssembler *payloadAssembler;
@property (nonatomic, retain) NDAnalyticsPayloadUploader *payloadUploader;
@property (readonly) Class superclass;
@property (nonatomic, retain) NDAnalyticsUploadScheduler *uploadScheduler;

- (void).cxx_destruct;
- (id)_handleDroppedEnvelopesForLocalReasons:(id)arg1;
- (id)_handleOutcomeOfUploadAttemptWithPayload:(id)arg1 success:(bool)arg2 error:(id)arg3 willRetry:(bool)arg4 hitEndpoint:(bool)arg5;
- (id)_lastUploadDatesByContentType;
- (void)_scheduleUploadIfNeededWithCompletion:(id /* block */)arg1;
- (id)envelopeStore;
- (void)envelopeStore:(id)arg1 didFlushEnvelopesForEntries:(id)arg2;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAppConfigurationManager:(id)arg1 storeDirectoryFileURL:(id)arg2 URLSessionQueue:(id)arg3;
- (id)keyValueStoreLock;
- (id)lastUploadDatesByContentType;
- (id)payloadAssembler;
- (id)payloadUploader;
- (void)setEnvelopeStore:(id)arg1;
- (void)setKeyValueStoreLock:(id)arg1;
- (void)setLastUploadDatesByContentType:(id)arg1;
- (void)setPayloadAssembler:(id)arg1;
- (void)setPayloadUploader:(id)arg1;
- (void)setUploadScheduler:(id)arg1;
- (void)submitEnvelopes:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)submitEnvelopes:(id)arg1 withSubmissionCompletion:(id /* block */)arg2 foregroundUploadCompletion:(id /* block */)arg3;
- (id)uploadScheduler;
- (void)uploadScheduler:(id)arg1 performUploadWithCompletion:(id /* block */)arg2;
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)arg1;

@end
