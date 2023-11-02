
@interface _TtCV14WorkflowEditorP33_060892FA80DB790CDB013ACF6F2F770418SummaryHostingView11Coordinator : NSObject <WFModuleSummaryCoordinatorDelegate, WFVariableUIDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  view;
}

- (void).cxx_destruct;
- (id)init;
- (void)revealAction:(id)arg1 preScrollHandler:(id /* block */)arg2 goBackHandler:(id /* block */)arg3 scrolledAwayHandler:(id /* block */)arg4;
- (void)showActionOutputPickerAllowingShortcutInput:(bool)arg1 variableProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showParameterEditingHint:(id)arg1;
- (void)showVariableEditorWithOptions:(id)arg1 fromSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)summaryCoordinator:(id)arg1 disclosureArrowDidChange:(bool)arg2;
- (void)summaryCoordinator:(id)arg1 outputButtonDidChange:(bool)arg2;
- (void)summaryCoordinatorDidInvalidateSize:(id)arg1;
- (id)viewControllerForCoordinator:(id)arg1;

@end
