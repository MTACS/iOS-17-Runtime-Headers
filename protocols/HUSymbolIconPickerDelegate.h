
@protocol HUSymbolIconPickerDelegate <NSObject>

@required

- (void)iconPicker:(UICollectionViewController *)arg1 didPickIcon:(HFImageIconDescriptor *)arg2 withTintColor:(UIColor *)arg3;
- (void)iconPickerDidCancel:(UICollectionViewController *)arg1;

@end
