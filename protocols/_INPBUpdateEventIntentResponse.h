
@protocol _INPBUpdateEventIntentResponse <NSObject>

@required

- (int)StringAsConfirmationReason:(NSString *)arg1;
- (void)addConflictingEventIdentifiers:(NSString *)arg1;
- (void)clearConflictingEventIdentifiers;
- (int)confirmationReason;
- (NSString *)confirmationReasonAsString:(int)arg1;
- (NSArray *)conflictingEventIdentifiers;
- (NSString *)conflictingEventIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingEventIdentifiersCount;
- (bool)hasConfirmationReason;
- (bool)hasUpdatedEvent;
- (void)setConfirmationReason:(int)arg1;
- (void)setConflictingEventIdentifiers:(NSArray *)arg1;
- (void)setHasConfirmationReason:(bool)arg1;
- (void)setUpdatedEvent:(_INPBCalendarEvent *)arg1;
- (_INPBCalendarEvent *)updatedEvent;

@end
