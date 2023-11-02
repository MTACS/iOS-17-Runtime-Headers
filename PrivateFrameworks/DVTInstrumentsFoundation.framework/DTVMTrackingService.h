
@interface DTVMTrackingService : DTXService <DTVMTrackingServiceAuthorizedAPI> {
    XRVMState * _currentState;
    int  _targetPid;
    unsigned int  _targetTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (id)configureLaunchEnvironment:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)requestVMSnapshot;
- (void)setTargetPid:(id)arg1 referenceDate:(id)arg2;
- (void)startTracking;
- (void)stopTracking;

@end
