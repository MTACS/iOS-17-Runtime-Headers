
@protocol CNContactContainerPickerViewControllerDelegate <NSObject>

@required

- (void)containerPicker:(CNContactContainerPickerViewController *)arg1 didFinishWithPickedContainers:(NSArray *)arg2;
- (bool)containerPicker:(CNContactContainerPickerViewController *)arg1 shouldAllowDeselectionOfContainerWithIdentifier:(NSString *)arg2;

@end
