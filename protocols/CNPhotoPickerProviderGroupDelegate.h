
@protocol CNPhotoPickerProviderGroupDelegate <NSObject>

@required

- (void)photoPickerProviderGroup:(CNPhotoPickerProviderGroup *)arg1 didUpdateItem:(CNPhotoPickerProviderItem *)arg2;
- (void)photoPickerProviderGroupDidUpdate:(CNPhotoPickerProviderGroup *)arg1 requiresFullReload:(bool)arg2;

@end
