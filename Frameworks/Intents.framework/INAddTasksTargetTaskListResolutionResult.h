
@interface INAddTasksTargetTaskListResolutionResult : INTaskListResolutionResult

+ (id)confirmationRequiredWithTaskListToConfirm:(id)arg1 forReason:(long long)arg2;

- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)initWithTaskListResolutionResult:(id)arg1;

@end
