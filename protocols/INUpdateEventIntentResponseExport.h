
@protocol INUpdateEventIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (long long)confirmationReason;
- (NSArray *)conflictingEventIdentifiers;
- (void)setConfirmationReason:(long long)arg1;
- (void)setConflictingEventIdentifiers:(NSArray *)arg1;
- (void)setUpdatedEvent:(INCalendarEvent *)arg1;
- (INCalendarEvent *)updatedEvent;

@end
