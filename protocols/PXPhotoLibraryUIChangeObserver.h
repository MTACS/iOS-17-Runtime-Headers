
@protocol PXPhotoLibraryUIChangeObserver <NSObject>

@optional

- (void)photoLibraryChangesPausedDidChange;
- (void)photoLibraryDidChangeOnMainQueue:(PHChange *)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(PHChange *)arg1 withPreparedInfo:(NSDictionary *)arg2;
- (NSDictionary *)prepareForPhotoLibraryChange:(PHChange *)arg1;

@end
