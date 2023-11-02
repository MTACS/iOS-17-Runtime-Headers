
@interface NICarKeyEventNotifier : NSObject {
    NISession * parentSession;
}

- (void).cxx_destruct;
- (id)initWithParentSession:(id)arg1;
- (void)notifyRangingIntentSentToVehicleWithReason:(long long)arg1;
- (void)notifyVehicleLockedWithReason:(long long)arg1;
- (void)notifyVehicleReadyToDriveWithReason:(long long)arg1;
- (void)notifyVehicleTerminatedRangingSession;
- (void)notifyVehicleUnlockedWithReason:(long long)arg1;

@end
