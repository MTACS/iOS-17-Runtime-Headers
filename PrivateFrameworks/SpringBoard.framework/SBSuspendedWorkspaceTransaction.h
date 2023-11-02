
@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver> {
    NSError * _anyLaunchError;
    NSMutableSet * _incompleteProcessLaunchTransactions;
    NSMapTable * _launchTransactionToSceneEntityMap;
    NSMutableSet * _outstandingProcessLaunchTransactions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSceneEntityToAppRecency:(id)arg1;
- (void)_begin;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_sendActivationResultWithError:(id)arg1;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;

@end
