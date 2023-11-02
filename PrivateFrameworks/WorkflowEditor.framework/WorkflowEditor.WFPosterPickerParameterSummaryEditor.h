
@interface WorkflowEditor.WFPosterPickerParameterSummaryEditor : WFModuleSummaryEditor <PRUIModalControllerDelegate> {
    void controller;
    void presentedViewController;
}

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(bool)arg3;
- (void)modalController:(id)arg1 didDismissSheetWithResponse:(id)arg2;

@end
