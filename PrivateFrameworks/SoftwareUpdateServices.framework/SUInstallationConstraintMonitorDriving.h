
@interface SUInstallationConstraintMonitorDriving : SUInstallationConstraintMonitorBase {
    bool  _queue_isDriving;
}

- (void)_handleVehicularStateChangeNotification:(id)arg1;
- (void)_queue_pollSatisfied;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end
