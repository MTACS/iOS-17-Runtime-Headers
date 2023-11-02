
@protocol AAUIDataclassPickerViewControllerDelegate <NSObject>

@required

- (void)dataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1 didCompleteWithDataclassActions:(NSDictionary *)arg2;
- (void)dataclassPickerViewControllerDidCancel:(AAUIDataclassPickerViewController *)arg1;

@optional

- (NSString *)footerTextForDataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1;
- (NSString *)messageTextForDataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1;
- (NSString *)titleTextForDataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1;

@end
