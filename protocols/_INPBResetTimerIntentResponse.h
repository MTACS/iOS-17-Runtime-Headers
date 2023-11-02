
@protocol _INPBResetTimerIntentResponse <NSObject>

@required

+ (Class)resetTimersType;

- (void)addResetTimers:(_INPBTimer *)arg1;
- (void)clearResetTimers;
- (NSArray *)resetTimers;
- (_INPBTimer *)resetTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)resetTimersCount;
- (void)setResetTimers:(NSArray *)arg1;

@end
