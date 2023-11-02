
@protocol HDSPSleepSessionManagerDelegate <NSObject>

@required

- (void)sleepSessionManager:(HDSPSleepSessionManager *)arg1 didSaveSession:(HDSPSleepSession *)arg2;

@optional

- (void)sleepSessionManager:(HDSPSleepSessionManager *)arg1 didSaveArchivedSessions:(NSArray *)arg2;
- (NAFuture *)sleepSessionManager:(HDSPSleepSessionManager *)arg1 requestsProcessedSessionForSession:(HDSPSleepSession *)arg2;
- (void)sleepSessionManagerDidFinishSession:(HDSPSleepSessionManager *)arg1;

@end
