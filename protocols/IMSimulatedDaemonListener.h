
@protocol IMSimulatedDaemonListener

@required

- (void)simulatedDaemon:(IMSimulatedDaemonController *)arg1 willSendBalloonPayload:(NSData *)arg2 attachments:(NSArray *)arg3 messageGUID:(NSString *)arg4 bundleID:(NSString *)arg5;

@end
