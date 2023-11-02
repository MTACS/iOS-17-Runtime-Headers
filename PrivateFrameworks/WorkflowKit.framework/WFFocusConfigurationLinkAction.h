
@interface WFFocusConfigurationLinkAction : WFLinkAction {
    DNDModeConfigurationService * _configurationService;
}

@property (nonatomic, retain) DNDModeConfigurationService *configurationService;

+ (id)genericRuntimeError;

- (void).cxx_destruct;
- (void)clearFocusConfiguration;
- (id)configurationService;
- (id)contentDestinationWithError:(id*)arg1;
- (void)createAndCommitFocusConfigurationToDND;
- (id)currentFocusConfiguration;
- (id)descriptionSummary;
- (void)disableFocusConfiguration;
- (id)dndApplicationIdentifier;
- (void)enableFocusConfiguration;
- (bool)isRunningInsideFocusConfigurationExtension;
- (id)localizedAppName;
- (id)localizedSubcategoryForCategory:(id)arg1;
- (id)name;
- (unsigned long long)parameterCollapsingBehavior;
- (id)parameterDefinitions;
- (id)parameterSummary;
- (bool)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)selectedFocusIdentifier;
- (void)setConfigurationService:(id)arg1;
- (void)setFocusConfigurationEnablementStatus:(bool)arg1;
- (bool)shouldAskForValuesWhileProcessingParameterStates;
- (bool)shouldStripSensitiveContentFromParameterSerialization;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)toggleFocusConfiguration;
- (void)updateParameterStatesFromCurrentDNDConfiguration;
- (void)wasAddedToWorkflowByUser:(id)arg1;
- (void)willBeginProcessingParameterStates;

@end
