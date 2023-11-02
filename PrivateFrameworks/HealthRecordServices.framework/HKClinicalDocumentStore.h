
@interface HKClinicalDocumentStore : NSObject <HKMedicalDownloadableAttachmentStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider * _proxyProvider;
    HKObserverSet * _stateChangeListeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_establishProxyConnection;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void)_fetchServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_getSynchronousServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_unitTesting_triggerDownloadableAttachmentDidChange:(id)arg1 completion:(id /* block */)arg2;
- (void)addClinicalDocumentStateChangeListener:(id)arg1;
- (void)clientRemote_downloadableAttachmentDidChangeState:(id)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchAttachmentWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)insertDownloadableAttachment:(id)arg1 completion:(id /* block */)arg2;
- (void)markDataAvailableForAttachmentWithIdentifier:(id)arg1 attachmentContent:(id)arg2 completion:(id /* block */)arg3;
- (void)markDownloadCompleteForAttachmentWithIdentifier:(id)arg1 fileURL:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyDownloadingCompleteAndRequestMoreWithIdentifiers:(id)arg1 requestBatchSize:(id)arg2 completion:(id /* block */)arg3;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)processAttachmentWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)removeAllAttachmentsFromMedicalRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)removeClinicalDocumentStateChangeListener:(id)arg1;
- (void)runMedicalDownloadableAttachmentPipelineWithCompletion:(id /* block */)arg1;
- (void)triggerAttachmentRetryForMedicalRecordWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateErrorStatusAndRetryCountForAttachmentWithIdentifier:(id)arg1 errorStatus:(long long)arg2 lastError:(id)arg3 retryCount:(long long)arg4 completion:(id /* block */)arg5;
- (void)updateRetryCountForAttachmentWithIdentifier:(id)arg1 retryCount:(long long)arg2 nextRetryDate:(id)arg3 completion:(id /* block */)arg4;
- (void)updateStatusAndClearErrorForAttachmentWithIdentifier:(id)arg1 status:(long long)arg2 completion:(id /* block */)arg3;

@end
