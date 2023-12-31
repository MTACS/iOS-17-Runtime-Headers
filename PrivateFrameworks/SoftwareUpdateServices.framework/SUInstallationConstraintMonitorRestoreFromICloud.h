
@interface SUInstallationConstraintMonitorRestoreFromICloud : SUInstallationConstraintMonitorBase {
    bool  _queue_isRestoring;
    int  _queue_restoreToken;
}

- (void)_queue_restoreStateChanged;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end
