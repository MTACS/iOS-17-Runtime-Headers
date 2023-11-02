
@interface WFGetUpcomingCalendarItemsAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)updateCalendars;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
