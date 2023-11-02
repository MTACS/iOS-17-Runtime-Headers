
@protocol WFModuleSummaryEditorDelegate <NSObject>

@required

- (<WFParameterState> *)initialStateForSummaryEditor:(WFModuleSummaryEditor *)arg1;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didCommitParameterState:(id <WFParameterState>)arg2;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didRequestEditingSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (void)summaryEditorDidFinish:(WFModuleSummaryEditor *)arg1 returnToKeyboard:(bool)arg2 withTextAttachmentToEdit:(NSTextAttachment *)arg3;
- (void)summaryEditorDidRequestTextEntry:(WFModuleSummaryEditor *)arg1;

@optional

- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didStageParameterState:(id <WFParameterState>)arg2;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 willUpdateVariable:(WFVariable *)arg2;

@end
