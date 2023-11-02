
@interface WFMediaPickerParameter : WFParameter <WFModuleSummarySupporting> {
    WFAction * _action;
}

@property (nonatomic) WFAction *action;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)action;
- (id)localizedLabelForState:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (void)setAction:(id)arg1;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)moduleSummarySlotsForState:(id)arg1;

@end
