
@protocol DockKitCore.XPCActuatorClientProtocol

@required

- (void)actuatorFeedbackWithInfo:(_TtC11DockKitCore12DockCoreInfo *)arg1 system:(NSString *)arg2 actuators:(NSArray *)arg3 positions:(NSArray *)arg4 velocities:(NSArray *)arg5 timestamp:(double)arg6;
- (void)disconnectedWithErr:(NSError *)arg1;
- (void)trajectoryProgressFeedbackWithInfo:(_TtC11DockKitCore12DockCoreInfo *)arg1 system:(NSString *)arg2 progress:(NSData *)arg3;

@end
