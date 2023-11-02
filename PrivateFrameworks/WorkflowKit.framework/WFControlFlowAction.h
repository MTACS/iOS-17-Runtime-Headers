
@interface WFControlFlowAction : WFAction {
    WFControlFlowAttributionTracker * _controlFlowTracker;
    long long  _mode;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic) WFControlFlowAttributionTracker *controlFlowTracker;
@property (nonatomic, readonly) long long mode;

- (void).cxx_destruct;
- (id)controlFlowTracker;
- (id)createAccompanyingActionWithMode:(long long)arg1;
- (bool)displaysParameterSummary;
- (void)generateGroupingIdentifierIfNecessary;
- (id)groupedCloseAction;
- (id)groupedIntermediaryActions;
- (id)groupedOpenAction;
- (bool)hasChildren;
- (id)iconName;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (bool)inputPassthrough;
- (bool)inputTypePassthrough;
- (bool)isCollapsed;
- (bool)isDeletable;
- (long long)mode;
- (id)outputContentClasses;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (id)serializedParameters;
- (void)setCollapsed:(bool)arg1;
- (void)setControlFlowTracker:(id)arg1;
- (id)shortName;
- (bool)snappingPassthrough;

@end
