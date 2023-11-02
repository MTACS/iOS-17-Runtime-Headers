
@interface WFEnumerationValuePicker : NSObject <UIPopoverPresentationControllerDelegate, WFParameterValuePickerViewControllerDelegate> {
    id /* block */  _cancelHandler;
    id /* block */  _completionHandler;
    WFVariableSubstitutableParameterState * _currentState;
    WFEnumerationParameter * _parameter;
    WFParameterValuePickerViewController * _parameterValuePickerViewController;
    WFSlotIdentifier * _slotIdentifier;
    bool  _suppressAutomaticCancellation;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) WFVariableSubstitutableParameterState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editingSlotArrayIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFEnumerationParameter *parameter;
@property (nonatomic, retain) WFParameterValuePickerViewController *parameterValuePickerViewController;
@property (nonatomic, retain) WFSlotIdentifier *slotIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressAutomaticCancellation;

+ (id)presentWithParameter:(id)arg1 state:(id)arg2 slotIdentifier:(id)arg3 initialCollection:(id)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 allowsPickingVariables:(bool)arg7 processing:(bool)arg8 presentationAnchor:(id)arg9 cancelHandler:(id /* block */)arg10 completionHandler:(id /* block */)arg11;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id /* block */)cancelHandler;
- (void)cancelOperationAndCommitState;
- (void)cancelOperationCommittingState:(bool)arg1;
- (id /* block */)completionHandler;
- (id)currentState;
- (void)dismissWithCompletionHandler:(id /* block */)arg1;
- (long long)editingSlotArrayIndex;
- (id)initWithParameter:(id)arg1 currentState:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)parameter;
- (id)parameterValuePickerViewController;
- (void)parameterValuePickerViewController:(id)arg1 didFinishWithParameterState:(id)arg2;
- (void)parameterValuePickerViewControllerDidCancel:(id)arg1;
- (void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)arg1;
- (void)parameterValuePickingDidClear;
- (void)parameterValuePickingDidFinishWithParameterState:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setParameter:(id)arg1;
- (void)setParameterValuePickerViewController:(id)arg1;
- (void)setSlotIdentifier:(id)arg1;
- (void)setSuppressAutomaticCancellation:(bool)arg1;
- (id)slotIdentifier;
- (bool)suppressAutomaticCancellation;

@end
