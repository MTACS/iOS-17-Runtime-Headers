
@interface DiagnosticStorageManager : NSObject <DiagnosticCaseManagerStorageDelegate, SymptomsFileCleanerDelegate> {
    ABCFileCleaner * _abcCleaner;
    NSMutableArray * _casesSortedByDate;
    unsigned long long  _lastCalculatedDiskUsageSize;
    NSString * _logArchivePath;
    NSMutableDictionary * _payloadsByCaseID;
    NSObject<OS_dispatch_queue> * _queue;
    ABCPersistentStoreController * _storeController;
}

@property (nonatomic, retain) ABCFileCleaner *abcCleaner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_autoBugCaptureDiskUsageSize:(id /* block */)arg1;
- (void)_calculatePurgableSizeForRequestedPurgeSize:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)_inspectAutoBugCaptureDiskUsage:(id /* block */)arg1;
- (void)_performSizedPurge:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)_purgeCasesWithCaseIDs:(id)arg1;
- (void)_sortedAutoBugCaptureDiskUsageByCase:(id /* block */)arg1;
- (id)abcCleaner;
- (unsigned long long)allowableDiskUsageSize;
- (void)cleanupCasesAfterACentralizedCacheDeletePurgeEvent:(id)arg1;
- (unsigned long long)deleteAttachmentFiles:(id)arg1;
- (void)deleteAttachmentsAtPaths:(id)arg1;
- (void)deleteAttachmentsForCases:(id)arg1;
- (void)didSaveDiagnosticCases;
- (void)fileCleanupComplete;
- (id)initWithPersistentStoreController:(id)arg1 logArchiveDirectory:(id)arg2;
- (void)invalidateDiskUsageStatistics;
- (unsigned long long)performPeriodicPurge;
- (unsigned long long)performPurgeToMeetDiskUsageLimit:(unsigned long long)arg1 calculateOnly:(bool)arg2;
- (void)purgeAttachmentsAtPaths:(id)arg1;
- (void)purgeAttachmentsForAllCases;
- (void)purgeDEPayloadForCase:(id)arg1;
- (void)removeCaseStorageAndAttachmentsForCasesWithUUIDs:(id)arg1;
- (void)setAbcCleaner:(id)arg1;

@end
