
@interface SUInstallationConstraintMonitorCarplay : SUInstallationConstraintMonitorBase <CARSessionObserving> {
    bool  _queue_CarplayConnected;
    CARSessionStatus * _queue_carSessionStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_queue_carplayDidChange;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (unsigned long long)unsatisfiedConstraints;

@end
