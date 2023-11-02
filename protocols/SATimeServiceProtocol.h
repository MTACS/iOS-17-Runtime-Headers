
@protocol SATimeServiceProtocol

@required

- (void)cancelAlarmWithUUID:(NSUUID *)arg1;
- (NSDate *)getCurrentTime;
- (NSDate *)now;
- (NSUUID *)setupAlarmFireAt:(NSDate *)arg1 forClient:(id <SATimeClientProtocol>)arg2;

@end
