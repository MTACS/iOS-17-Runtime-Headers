
@interface CSAttendingSelfLogger : NSObject

+ (void)emitAttendingContextEndedEventWithStopReason:(long long)arg1 withMHUUID:(id)arg2;
+ (void)emitAttendingContextStartedEventWithAttendingOptions:(id)arg1 withMHUUID:(id)arg2;

@end
