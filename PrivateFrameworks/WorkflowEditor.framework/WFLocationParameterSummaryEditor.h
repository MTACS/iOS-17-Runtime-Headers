
@interface WFLocationParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFLocationPickerViewControllerDelegate> {
    UIViewController * _presentedViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentedViewController;
@property (readonly) Class superclass;

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)locationPickerDidCancel:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentedViewController;
- (void)setPresentedViewController:(id)arg1;

@end
