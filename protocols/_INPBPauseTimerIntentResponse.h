
@protocol _INPBPauseTimerIntentResponse <NSObject>

@required

+ (Class)pausedTimersType;

- (void)addPausedTimers:(_INPBTimer *)arg1;
- (void)clearPausedTimers;
- (NSArray *)pausedTimers;
- (_INPBTimer *)pausedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)pausedTimersCount;
- (void)setPausedTimers:(NSArray *)arg1;

@end
