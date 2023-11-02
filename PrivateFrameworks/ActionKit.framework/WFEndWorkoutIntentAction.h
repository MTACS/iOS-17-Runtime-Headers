
@interface WFEndWorkoutIntentAction : WFHandleSystemIntentAction

- (id)actionForAppIdentifier:(id)arg1;
- (bool)allowsContinueInAppWhenRunningRemotely;
- (id)appResource;
- (id)icon;
- (bool)isParameterHidden:(id)arg1;
- (id)selectedAppNotSupportedError;
- (bool)skipsProcessingHiddenParameters;

@end
