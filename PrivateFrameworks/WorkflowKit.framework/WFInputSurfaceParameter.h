
@interface WFInputSurfaceParameter : WFParameter <WFModuleSummarySupporting>

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)arg1;

@end
