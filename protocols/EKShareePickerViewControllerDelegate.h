
@protocol EKShareePickerViewControllerDelegate <NSObject>

@required

- (EKEventStore *)eventStoreForShareePickerViewController:(EKShareePickerViewController *)arg1;
- (void)shareePickerViewController:(EKShareePickerViewController *)arg1 didCompleteWithAction:(int)arg2;

@end
