
@interface SUInstallationConstraintMonitorRestoreFromITunes : SUInstallationConstraintMonitorBase {
    int  _queue_endNotifyToken;
    bool  _queue_isRestoring;
    int  _queue_startNotifyToken;
}

- (void)_queue_beganRestoring;
- (void)_queue_endedRestoring;
- (void)_queue_setRestoring:(bool)arg1;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end
