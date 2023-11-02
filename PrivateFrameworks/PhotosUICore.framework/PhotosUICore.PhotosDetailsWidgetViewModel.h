
@interface PhotosUICore.PhotosDetailsWidgetViewModel : NSObject <PHPhotoLibraryChangeObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _spec;
    void asset;
    void context;
    void delegate;
    void maxContentSizeCategory;
}

- (void).cxx_destruct;
- (id)init;
- (void)photoLibraryDidChange:(id)arg1;
- (void)preferredContentSizeDidChangeWithNotification:(id)arg1;

@end
