
@interface WFWorkflowPickerParameter : WFEnumerationParameter <WFWorkflowReferencing> {
    NSArray * _possibleStates;
    WFWorkflow * _workflow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)accessoryIconForPossibleState:(id)arg1;
- (id)accessoryImageForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (id)possibleStates;
- (bool)preferParameterValuePicker;
- (void)setWorkflow:(id)arg1;
- (Class)singleStateClass;
- (id)workflow;
- (id)workflowForState:(id)arg1;

@end
