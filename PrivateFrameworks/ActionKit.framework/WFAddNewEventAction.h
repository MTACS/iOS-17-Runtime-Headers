
@interface WFAddNewEventAction : WFAction

+ (id)calendarFromDescriptor:(id)arg1;
+ (id)endDateByCorrectingDate:(id)arg1 withStartDate:(id)arg2;
+ (id)eventFromParameters:(id)arg1 requiringFullySpecifiedEvent:(bool)arg2 error:(id*)arg3;
+ (double)relativeOffsetFromTimeString:(id)arg1;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)contentDestinationWithError:(id*)arg1;
- (id)currentSelectedCalendar;
- (void)initializeParameters;
- (bool)requiresUnlock;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithoutUI;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updateCalendars;
- (void)updateForcesAllDayFlags;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
