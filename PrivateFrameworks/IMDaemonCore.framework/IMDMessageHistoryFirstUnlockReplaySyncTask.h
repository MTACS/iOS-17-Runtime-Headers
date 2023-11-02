
@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {
    IMDReplayController * _replayController;
}

- (void)_setupAndBeginSync;
- (void)dealloc;
- (id)initWithReplayController:(id)arg1 accountController:(id)arg2;
- (unsigned long long)syncTaskType;

@end
