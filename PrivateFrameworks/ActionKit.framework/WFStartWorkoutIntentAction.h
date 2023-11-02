
@interface WFStartWorkoutIntentAction : WFHandleSystemIntentAction

+ (id)unitStringsToWorkoutGoalUnits;
+ (id)workoutActivityTypeToWorkoutIdentifier;

- (id)actionForAppIdentifier:(id)arg1;
- (bool)allowsContinueInAppWhenRunningRemotely;
- (id)appResource;
- (id)goalParameter;
- (id)goalUnitTypeFromValue:(id)arg1;
- (id)goalValueFromValue:(id)arg1;
- (id)icon;
- (id)identifierForActivityType:(unsigned long long)arg1;
- (void)initializeParameters;
- (bool)isKjGoal:(id)arg1;
- (bool)isKmGoal:(id)arg1;
- (bool)isParameterHidden:(id)arg1;
- (id)kjGoalConvertedToJ:(id)arg1;
- (id)kmGoalConvertedToM:(id)arg1;
- (id)location;
- (unsigned long long)normalizedWorkoutActivityType:(unsigned long long)arg1;
- (id)parameterForSlot:(id)arg1;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (void)resourceAvailabilityChanged;
- (id)selectedAppNotSupportedError;
- (bool)skipsProcessingHiddenParameters;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (id)workoutGoalUnitTypeNumberForUnitString:(id)arg1;
- (id)workoutNameForActivityType:(id)arg1;
- (id)workoutTypeParameter;

@end
