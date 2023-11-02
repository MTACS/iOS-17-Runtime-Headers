
@protocol PXPhotoLibraryDefaultsChangeObserver <PXChangeObserver>

@required

- (void)photoLibraryLocalDefaults:(PXPhotoLibraryLocalDefaults *)arg1 didChangeValueForKey:(NSString *)arg2;

@end
