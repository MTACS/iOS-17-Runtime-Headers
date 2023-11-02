
@interface WFContentItemSetterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *properties;
@property (nonatomic, readonly) WFContentProperty *selectedProperty;
@property (readonly) Class superclass;

- (id)appContentDestinationForSystemAppBundleIdentifier:(id)arg1;
- (id)changeTransactionWithInput:(id)arg1;
- (id)contentDestinationWithError:(id*)arg1;
- (id)defaultOutputName;
- (id)descriptionSummary;
- (id)displayStringForTransactionModeState:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (bool)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg1;
- (void)initializeParameters;
- (id)inputParameterKey;
- (bool)inputRequired;
- (bool)inputsMultipleItems;
- (id)keywords;
- (id)name;
- (id)outputContentClasses;
- (bool)outputsMultipleItems;
- (id)parameterDefinitions;
- (id)parameterKeyForProperty:(id)arg1;
- (id)parameterSummaryDefinition;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2 completion:(id /* block */)arg3;
- (id)properties;
- (id)requiredResourceForProperty:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)selectedProperty;
- (id)setAdditionalPropertyIfNecessaryForValue:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)setPromptForSelectedParameter;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)userValueForSelectedPropertyWithCompletion:(id /* block */)arg1;

@end
