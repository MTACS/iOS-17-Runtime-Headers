
@protocol _INPBCreateEventIntentResponse <NSObject>

@required

- (int)StringAsConfirmationReason:(NSString *)arg1;
- (void)addConflictingEventIdentifiers:(NSString *)arg1;
- (void)clearConflictingEventIdentifiers;
- (int)confirmationReason;
- (NSString *)confirmationReasonAsString:(int)arg1;
- (NSArray *)conflictingEventIdentifiers;
- (NSString *)conflictingEventIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingEventIdentifiersCount;
- (_INPBCalendarEvent *)createdEvent;
- (bool)hasConfirmationReason;
- (bool)hasCreatedEvent;
- (void)setConfirmationReason:(int)arg1;
- (void)setConflictingEventIdentifiers:(NSArray *)arg1;
- (void)setCreatedEvent:(_INPBCalendarEvent *)arg1;
- (void)setHasConfirmationReason:(bool)arg1;

@end
