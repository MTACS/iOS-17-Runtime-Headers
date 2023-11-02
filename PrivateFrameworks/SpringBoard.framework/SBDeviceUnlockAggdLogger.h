
@interface SBDeviceUnlockAggdLogger : NSObject <CSExternalEventHandling> {
    bool  _observeDashBoardEvents;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_observeDashBoardEvents, setter=_setObserveDashBoardEvents:, nonatomic) bool observeDashBoardEvents;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (bool)_observeDashBoardEvents;
- (void)_setObserveDashBoardEvents:(bool)arg1;
- (void)conformsToCSEventHandling;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (void)logDeviceUnlock;
- (void)logDeviceWake;
- (void)logIdleTimerScreenDimWarning;
- (void)logOrientationAndAccessoryStateForPrefix:(id)arg1;
- (void)logUserResetIdleTimer;
- (long long)participantState;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
