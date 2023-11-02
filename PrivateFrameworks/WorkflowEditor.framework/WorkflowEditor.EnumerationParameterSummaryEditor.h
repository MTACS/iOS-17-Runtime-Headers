
@interface WorkflowEditor.EnumerationParameterSummaryEditor : WFModuleSummaryEditor {
    void valuePicker;
}

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (void).cxx_destruct;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)completeEditing;
- (id)customMenuElementsForSlotWithIdentifier:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(bool)arg3;

@end
