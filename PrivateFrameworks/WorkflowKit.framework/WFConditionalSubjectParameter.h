
@interface WFConditionalSubjectParameter : WFParameter <WFModuleSummarySupporting>

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (bool)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (Class)stateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (id)homeCharacteristicSlotKey;
+ (id)homeServiceSlotKey;
+ (Class)moduleSummaryEditorClass;
+ (id)subjectSlotKey;
+ (Class)uikitEditingControllerClass;

- (id)moduleSummarySlotsForState:(id)arg1;

@end
