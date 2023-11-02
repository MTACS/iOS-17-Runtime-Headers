
@interface DockKit.DockAccessoryHelper : NSObject <DockKitCore.XPCActuatorClientProtocol> {
    void feedbackCallback;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void trackingStand;
}

- (void).cxx_destruct;
- (void)actuatorFeedbackWithInfo:(id)arg1 system:(id)arg2 actuators:(id)arg3 positions:(id)arg4 velocities:(id)arg5 timestamp:(double)arg6;
- (void)disconnectedWithErr:(id)arg1;
- (id)init;
- (void)trajectoryProgressFeedbackWithInfo:(id)arg1 system:(id)arg2 progress:(id)arg3;

@end
