
@interface WFConditionalAction : WFControlFlowAction <WFDynamicEnumerationDataSource, WFVariableDelegate> {
    <WFVariableProvider> * _parentVariableProvider;
    bool  _truthForTestingOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <WFVariableProvider> *parentVariableProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool truthForTestingOnly;

+ (id)serializedParametersForHome:(id)arg1;

- (void).cxx_destruct;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (id)actionsProvidingVariableName:(id)arg1;
- (void)clearLegacyComparisonBehaviorFlag;
- (void)configureResourcesForParameter:(id)arg1;
- (id)copyForProcessing;
- (id)createAccompanyingActions;
- (id)defaultOutputName;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)fileSizeForQuantityValue:(id)arg1;
- (bool)groupContainsOtherwiseAction;
- (bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (void)initializeParameters;
- (id)inputContentClasses;
- (bool)inputPassthrough;
- (bool)inputRequired;
- (id)inputSourceInWorkflow:(id)arg1;
- (bool)isDeletable;
- (void)loadHomesIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)measurementForQuantityValue:(id)arg1;
- (id)minimumSupportedClientVersion;
- (id)name;
- (id)parentVariableProvider;
- (bool)populatesInputFromInputParameter;
- (id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
- (id)predicateForComparisonOperator:(long long)arg1 rightDate:(id)arg2 secondRightDate:(id)arg3 comparableTimeUnits:(unsigned long long)arg4 rightDurationValue:(id)arg5;
- (void)prepareToProcessWithCompletionHandler:(id /* block */)arg1;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)setParentVariableProvider:(id)arg1;
- (void)setTruth:(bool)arg1 withVariableSource:(id)arg2;
- (Class)settingsViewControllerClass;
- (bool)skipsProcessingHiddenParameters;
- (long long)subjectContentType;
- (id)subjectState;
- (id)timeIntervalForQuantityValue:(id)arg1;
- (bool)truthForTestingOnly;
- (bool)truthWithVariableSource:(id)arg1;
- (void)updatePossibleOperators;
- (void)updateRightExpressionParameters;
- (bool)useLegacyComparisonBehavior;
- (bool)usesLegacyInputBehavior;
- (void)variableDidChange:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;

@end
