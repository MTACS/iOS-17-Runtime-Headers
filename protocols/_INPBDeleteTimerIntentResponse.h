
@protocol _INPBDeleteTimerIntentResponse <NSObject>

@required

+ (Class)deletedTimersType;

- (void)addDeletedTimers:(_INPBTimer *)arg1;
- (void)clearDeletedTimers;
- (NSArray *)deletedTimers;
- (_INPBTimer *)deletedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedTimersCount;
- (void)setDeletedTimers:(NSArray *)arg1;

@end
