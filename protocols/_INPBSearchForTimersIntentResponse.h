
@protocol _INPBSearchForTimersIntentResponse <NSObject>

@required

+ (Class)matchedTimersType;
+ (Class)timersType;
+ (Class)unmatchedTimersType;

- (void)addMatchedTimers:(_INPBTimer *)arg1;
- (void)addTimers:(_INPBTimer *)arg1;
- (void)addUnmatchedTimers:(_INPBTimer *)arg1;
- (void)clearMatchedTimers;
- (void)clearTimers;
- (void)clearUnmatchedTimers;
- (NSArray *)matchedTimers;
- (_INPBTimer *)matchedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedTimersCount;
- (void)setMatchedTimers:(NSArray *)arg1;
- (void)setTimers:(NSArray *)arg1;
- (void)setUnmatchedTimers:(NSArray *)arg1;
- (NSArray *)timers;
- (_INPBTimer *)timersAtIndex:(unsigned long long)arg1;
- (unsigned long long)timersCount;
- (NSArray *)unmatchedTimers;
- (_INPBTimer *)unmatchedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)unmatchedTimersCount;

@end
