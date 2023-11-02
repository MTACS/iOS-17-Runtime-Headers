
@interface WFFilePickerParameter : WFParameter <WFModuleSummarySupporting, WFWorkflowReferencing> {
    bool  _allowsMultipleSelection;
    bool  _shouldShowFullContextualPath;
    NSArray * _supportedTypes;
    WFWorkflow * _workflow;
}

@property (nonatomic) bool allowsMultipleSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool shouldShowFullContextualPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedTypes;
@property (nonatomic) WFWorkflow *workflow;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (bool)allowsMultipleSelection;
- (id)defaultSerializedRepresentation;
- (bool)displaysMultipleValueEditor;
- (id)initWithDefinition:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setWorkflow:(id)arg1;
- (bool)shouldShowFullContextualPath;
- (Class)singleStateClass;
- (id)supportedTypes;
- (bool)usesDefaultValue;
- (id)workflow;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)arg1;

@end
