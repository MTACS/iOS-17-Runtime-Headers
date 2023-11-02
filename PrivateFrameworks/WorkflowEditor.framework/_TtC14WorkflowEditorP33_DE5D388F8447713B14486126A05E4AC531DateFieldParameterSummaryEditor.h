
@interface _TtC14WorkflowEditorP33_DE5D388F8447713B14486126A05E4AC531DateFieldParameterSummaryEditor : WorkflowEditor.TextInputParameterSummaryEditor <WFParameterEventObserver>

- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(bool)arg3;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(bool*)arg2;

@end
