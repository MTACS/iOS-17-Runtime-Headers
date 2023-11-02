
@protocol WFParameterValuePickerViewControllerDelegate <NSObject>

@optional

- (void)parameterValuePickerViewController:(WFParameterValuePickerViewController *)arg1 didFinishWithParameterState:(WFVariableSubstitutableParameterState *)arg2;
- (void)parameterValuePickerViewControllerDidCancel:(WFParameterValuePickerViewController *)arg1;
- (void)parameterValuePickerViewControllerDidRequestRemovingItem:(WFParameterValuePickerViewController *)arg1;

@end
