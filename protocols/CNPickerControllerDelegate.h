
@protocol CNPickerControllerDelegate <NSObject>

@required

- (void)picker:(UIViewController *)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(UIViewController *)arg1;

@optional

- (void)picker:(UIViewController *)arg1 didDeleteItem:(id)arg2;

@end
