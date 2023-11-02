
@protocol CNMeCardSharingPickerViewControllerDelegate <NSObject>

@required

- (void)sharingPicker:(CNMeCardSharingPickerViewController *)arg1 didChangeSharingState:(bool)arg2;
- (void)sharingPicker:(CNMeCardSharingPickerViewController *)arg1 didSelectNameFormat:(unsigned long long)arg2;
- (void)sharingPicker:(CNMeCardSharingPickerViewController *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingPickerDidFinish:(CNMeCardSharingPickerViewController *)arg1;

@optional

- (void)sharingPicker:(UIViewController *)arg1 didSelectSharingStatus:(unsigned long long)arg2;
- (void)sharingPickerDidCancel:(CNMeCardSharingPickerViewController *)arg1;

@end
