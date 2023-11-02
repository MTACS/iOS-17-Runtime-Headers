
@interface FPDownloadOperation : FPActionOperation <FPDaemonActionOperationClient> {
    id /* block */  __t_patchActionOperationInfo;
    NSMutableDictionary * _childProxies;
    NSFileCoordinator * _coordinator;
    id /* block */  _downloadCompletionBlock;
    FPDownloadInfo * _info;
    NSArray * _items;
    NSMutableSet * _itemsPendingDownload;
    NSObservation * _observation;
    NSMutableDictionary * _progressByRoot;
    bool  _recursively;
    <NSXPCProxyCreating><FPDaemonActionOperation> * _remoteMoveOperation;
}

@property (nonatomic, copy) id /* block */ _t_patchActionOperationInfo;
@property (nonatomic, copy) id /* block */ downloadCompletionBlock;
@property (nonatomic) bool recursively;

- (void).cxx_destruct;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (void)_recomputeDownloadInfoIfNecessary;
- (void)_removeProgressWithItemID:(id)arg1;
- (void)_retrieveChildProgressForItem:(id)arg1 childProxies:(id)arg2 parentSetup:(id /* block */)arg3;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)_setupParentProgress;
- (id /* block */)_t_patchActionOperationInfo;
- (void)_updateParentProgressForItem:(id)arg1 withUnitCount:(id)arg2;
- (void)_updateProgressWithUpdatedFileCountForItem:(id)arg1;
- (void)actionMain;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (id /* block */)downloadCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;
- (void)presendNotifications;
- (bool)recursively;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationProgressesAreReady;
- (void)setDownloadCompletionBlock:(id /* block */)arg1;
- (void)setRecursively:(bool)arg1;
- (void)set_t_patchActionOperationInfo:(id /* block */)arg1;

@end
