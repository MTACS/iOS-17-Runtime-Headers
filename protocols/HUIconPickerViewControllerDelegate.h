
@protocol HUIconPickerViewControllerDelegate <NSObject>

@required

- (void)iconPicker:(HUIconPickerViewController *)arg1 didPickIconDescriptor:(id <HFIconDescriptor>)arg2;
- (void)iconPickerDidCancel:(UICollectionViewController *)arg1;

@end
