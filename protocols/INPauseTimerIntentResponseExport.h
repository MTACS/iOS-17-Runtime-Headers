
@protocol INPauseTimerIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSArray *)pausedTimers;
- (void)setPausedTimers:(NSArray *)arg1;

@end
