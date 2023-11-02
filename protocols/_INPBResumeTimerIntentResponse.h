
@protocol _INPBResumeTimerIntentResponse <NSObject>

@required

+ (Class)resumedTimersType;

- (void)addResumedTimers:(_INPBTimer *)arg1;
- (void)clearResumedTimers;
- (NSArray *)resumedTimers;
- (_INPBTimer *)resumedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)resumedTimersCount;
- (void)setResumedTimers:(NSArray *)arg1;

@end
