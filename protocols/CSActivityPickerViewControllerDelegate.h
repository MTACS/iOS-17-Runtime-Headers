
@protocol CSActivityPickerViewControllerDelegate <NSObject>

@required

- (UIView *)activityPickerViewControllerPresentingView:(CSActivityPickerViewController *)arg1;
- (<FCActivityDescribing> *)activityPickerViewControllerRepresentedActivityForDismissal:(CSActivityPickerViewController *)arg1;
- (<FCActivityDescribing> *)activityPickerViewControllerRepresentedActivityForPresentation:(CSActivityPickerViewController *)arg1;

@end
