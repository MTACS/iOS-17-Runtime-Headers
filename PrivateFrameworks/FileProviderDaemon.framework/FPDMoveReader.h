
@interface FPDMoveReader : NSObject <FPCancellable> {
    bool  __cancelled;
    NSMutableSet * _cancelledRoots;
    NSObject<OS_dispatch_semaphore> * _clientUnblockSema;
    unsigned long long  _depth;
    NSError * _error;
    id /* block */  _errorBlock;
    bool  _finishedPreflight;
    FPMoveInfo * _info;
    bool  _isTargetFolderMaterialized;
    unsigned long long  _logSection;
    FPDActionOperationQueue * _moveQueue;
    FPDMoveOperation * _operation;
    id /* block */  _preflightCompletionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _rootPreflightCompletionBlock;
    id /* block */  _startDownloadBlock;
    bool  _startedPreflight;
    bool  _willMaterializeTargetFolder;
    FPDMoveWriter * _writer;
}

@property (nonatomic, copy) id /* block */ errorBlock;
@property (nonatomic, copy) id /* block */ preflightCompletionBlock;
@property (nonatomic, copy) id /* block */ rootPreflightCompletionBlock;
@property (nonatomic, copy) id /* block */ startDownloadBlock;

+ (bool)_hasDiskWriterSupportForDomain:(id)arg1;

- (void).cxx_destruct;
- (void)_bailOutOfRoot:(id)arg1;
- (void)_enqueueAtomsForRoot:(id)arg1;
- (bool)_enqueueItem:(id)arg1 forRoot:(id)arg2 atomically:(bool)arg3 useDiskWriter:(bool)arg4;
- (long long)_fileSizeBitsSupportAtPath:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_getSpaceForWriteSize:(long long)arg1 atTargetPath:(id)arg2 completion:(id /* block */)arg3;
- (id)_getTargetFolderFor:(id)arg1 root:(id)arg2 error:(id*)arg3;
- (bool)_isCancelled;
- (bool)_isRootCancelled:(id)arg1;
- (bool)_isSingleMoveForRoot:(id)arg1;
- (bool)_isSinglePkgCopyForRoot:(id)arg1;
- (id)_iteratorForRoot:(id)arg1 enforceFPItem:(bool)arg2 error:(id*)arg3;
- (void)_progressComputationPreflight:(id)arg1 completion:(id /* block */)arg2;
- (void)_run;
- (void)_runWithDownloadedTarget:(id /* block */)arg1;
- (bool)_shouldCheckFileSystemBitsForRoot:(id)arg1 targetFolderURL:(id)arg2;
- (bool)_shouldCheckSpaceForRoot:(id)arg1 targetFolderURL:(id)arg2;
- (bool)_shouldUseDiskWriterToPerformMoveForItem:(id)arg1;
- (void)_t_unblock;
- (void)_t_waitForUnblock;
- (id)_targetNameForSource:(id)arg1;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (id /* block */)errorBlock;
- (id)init;
- (id)initWithMoveWriter:(id)arg1 operation:(id)arg2 queue:(id)arg3;
- (id /* block */)preflightCompletionBlock;
- (id /* block */)rootPreflightCompletionBlock;
- (void)setErrorBlock:(id /* block */)arg1;
- (void)setPreflightCompletionBlock:(id /* block */)arg1;
- (void)setRootPreflightCompletionBlock:(id /* block */)arg1;
- (void)setStartDownloadBlock:(id /* block */)arg1;
- (void)start;
- (id /* block */)startDownloadBlock;
- (void)verifyTargetURL:(id /* block */)arg1;

@end
