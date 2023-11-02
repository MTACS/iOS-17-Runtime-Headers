
@interface _TtC14WorkflowEditorP33_4FF4F351C433FF94A8616279ECCFBACD35VariableFieldParameterSummaryEditor : WFModuleSummaryEditor {
    void hasStagedChanges;
}

- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(bool)arg3;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(bool*)arg2;

@end
