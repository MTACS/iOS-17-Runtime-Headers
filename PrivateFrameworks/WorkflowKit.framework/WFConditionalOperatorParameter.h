
@interface WFConditionalOperatorParameter : WFEnumerationParameter {
    long long  _contentType;
    unsigned long long  _displayableTimeUnits;
    NSArray * _possibleContentOperators;
    NSArray * _possibleStates;
    bool  _usingLegacyOperatorBehavior;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) unsigned long long displayableTimeUnits;
@property (nonatomic, readonly) NSArray *possibleContentOperators;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) bool usingLegacyOperatorBehavior;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (bool)allowsMultipleValues;
- (long long)contentType;
- (id)defaultSupportedVariableTypes;
- (unsigned long long)displayableTimeUnits;
- (id)importQuestionBehavior;
- (id)localizedLabelForPossibleState:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (id)possibleContentOperators;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)setPossibleContentOperators:(id)arg1 withContentType:(long long)arg2 displayableTimeUnits:(unsigned long long)arg3 usingLegacyOperatorBehavior:(bool)arg4;
- (Class)stateClass;
- (bool)usingLegacyOperatorBehavior;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)moduleSummarySlotsForState:(id)arg1;

@end
