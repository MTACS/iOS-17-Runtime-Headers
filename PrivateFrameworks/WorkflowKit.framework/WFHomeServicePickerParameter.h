
@interface WFHomeServicePickerParameter : WFParameter <WFModuleSummarySupporting>

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (bool)allowsMultipleValues;
- (id)localizedLabelForState:(id)arg1;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;
+ (Class)uikitEditingControllerClass;

- (id)moduleSummarySlotForState:(id)arg1;

@end
