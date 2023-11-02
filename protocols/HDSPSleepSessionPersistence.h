
@protocol HDSPSleepSessionPersistence <NSObject>

@required

- (NAFuture *)hdsp_persistSessions:(NSArray *)arg1;
- (void)hdsp_startSession;
- (void)hdsp_stopSession;

@end
