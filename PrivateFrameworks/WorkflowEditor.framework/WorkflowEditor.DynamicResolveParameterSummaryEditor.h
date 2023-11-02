
@interface WorkflowEditor.DynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFParameterValuePickerViewControllerDelegate> {
    void presentedViewController;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(bool)arg3;
- (void)parameterValuePickerViewController:(id)arg1 didFinishWithParameterState:(id)arg2;
- (void)parameterValuePickerViewControllerDidCancel:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;

@end
