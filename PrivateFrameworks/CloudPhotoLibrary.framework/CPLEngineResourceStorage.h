
@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {
    CPLEngineFileStorage * _fileStorage;
    NSMutableDictionary * _identitiesToCommit;
    NSMutableDictionary * _identitiesToDelete;
    _CPLPruneRequestCounter * _pruneRequests;
    NSObject<OS_dispatch_queue> * _pruneStatsQueue;
    _CPLPruneRequestCounter * _purgeabilityCheckRequests;
    bool  _shouldCheckFilesForUpload;
    bool  _shouldCreateTempFolder;
    NSURL * _tempFolderURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineFileStorage *fileStorage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic) bool shouldCheckFilesForUpload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *tempFolderURL;

- (void).cxx_destruct;
- (bool)_clearAndCreateTempFolderIfNecessaryWithError:(id*)arg1;
- (bool)checkIsEmpty;
- (bool)compactWithError:(id*)arg1;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id*)arg2;
- (bool)dropResourceForUpload:(id)arg1 error:(id*)arg2;
- (id)fileStorage;
- (bool)hasResource:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (void)notePruningRequestForResource:(id)arg1 realPrune:(bool)arg2 successful:(bool)arg3;
- (void)notePruningRequestForResource:(id)arg1 realPrune:(bool)arg2 successful:(bool)arg3 prunedSize:(unsigned long long)arg4;
- (bool)openWithError:(id*)arg1;
- (bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id*)arg3;
- (bool)resetWithError:(id*)arg1;
- (id)retainFileURLForResource:(id)arg1 error:(id*)arg2;
- (unsigned long long)scopeType;
- (void)setShouldCheckFilesForUpload:(bool)arg1;
- (bool)shouldCheckFilesForUpload;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (id)status;
- (id)statusDictionary;
- (bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
- (bool)storeResourceCopyForUpload:(id)arg1 error:(id*)arg2;
- (bool)storeResourceForUpload:(id)arg1 shouldCheckResource:(bool)arg2 error:(id*)arg3;
- (id)tempFolderURL;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
