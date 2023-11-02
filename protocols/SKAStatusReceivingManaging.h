
@protocol SKAStatusReceivingManaging <NSObject>

@required

- (void)handleIncomingStatusData:(NSData *)arg1 onChannelIdentifier:(NSString *)arg2 dateReceived:(NSDate *)arg3 dateExpired:(NSDate *)arg4 serverTime:(NSDate *)arg5;

@end
