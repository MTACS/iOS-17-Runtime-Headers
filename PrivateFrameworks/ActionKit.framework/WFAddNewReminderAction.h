
@interface WFAddNewReminderAction : WFAction {
    NSDateFormatter * _dateFormatter;
    WFActionParameterSummary * _parameterSummary;
}

@property (nonatomic, readonly) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (void)addAlertToReminderChange:(id)arg1 forAccount:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addImagesToReminderChange:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dateFormatter;
- (void)finishAddingReminderWithSaveRequest:(id)arg1 reminderChange:(id)arg2 reminderStore:(id)arg3;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)arg1;
- (void)getSelectedListOrParentReminder:(id /* block */)arg1;
- (id)parameterKeysToHideWhenAttachmentsAreUnavailable;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)selectedList;
- (id)selectedListIfDeterministic;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updateHiddenParameters;
- (void)updateLists;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
