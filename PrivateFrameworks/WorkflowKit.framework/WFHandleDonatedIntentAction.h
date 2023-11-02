
@interface WFHandleDonatedIntentAction : WFHandleIntentAction {
    bool  _forceExecutionOnPhone;
    NSString * _groupIdentifier;
    INIntent * _intent;
    INIntentDescriptor * _intentDescriptor;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) bool forceExecutionOnPhone;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(bool)arg2 groupIdentifier:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)appIdentifier;
- (void)continueInAppWithCompletionHandler:(id /* block */)arg1;
- (id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2;
- (bool)forceExecutionOnPhone;
- (id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4;
- (id)groupIdentifier;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 stringLocalizer:(id)arg4;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 forceExecutionOnPhone:(bool)arg2;
- (id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(bool)arg2;
- (void)initializeParameters;
- (id)intent;
- (long long)intentCategory;
- (id)intentDescription;
- (id)intentDescriptor;
- (id)localizedDescriptionSummary;
- (id)localizedKeyParameterDisplayName;
- (id)localizedName;
- (id)localizedSubtitle;
- (id)metricsIdentifier;
- (id)name;
- (id)parameterSummaryDefinition;
- (bool)requiresRemoteExecution;
- (id)serializedParameters;
- (void)setIntent:(id)arg1;
- (void)setIntentDescriptor:(id)arg1;
- (id)slots;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)subtitle;
- (id)title;

@end
