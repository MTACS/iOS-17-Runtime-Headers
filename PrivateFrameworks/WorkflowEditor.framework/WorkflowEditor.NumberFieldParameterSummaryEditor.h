
@interface WorkflowEditor.NumberFieldParameterSummaryEditor : WFModuleSummaryEditor {
    void autocompleteCoordinator;
    void autocompleteDataSource;
    void hasStagedChanges;
    void isPickingActionOutput;
}

@property (nonatomic, retain) <WFVariableProvider> *variableProvider;

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(bool)arg3;
- (void)setVariableProvider:(id)arg1;
- (void)stageState:(id)arg1;
- (id)stateByReplacingVariableFromCurrentState:(id)arg1 withVariable:(id)arg2;
- (void)textEntryDidFinish;
- (bool)textEntryShouldChangeText:(id)arg1;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(bool*)arg2;
- (id)variableProvider;

@end
