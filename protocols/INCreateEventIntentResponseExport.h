
@protocol INCreateEventIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (long long)confirmationReason;
- (NSArray *)conflictingEventIdentifiers;
- (INCalendarEvent *)createdEvent;
- (void)setConfirmationReason:(long long)arg1;
- (void)setConflictingEventIdentifiers:(NSArray *)arg1;
- (void)setCreatedEvent:(INCalendarEvent *)arg1;

@end
