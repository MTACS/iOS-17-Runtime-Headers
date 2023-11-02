
@interface _TtC12PhotosUICoreP33_91D29F4F2DBCF944653069752757388131ConcretePhotoLibraryObservation : NSObject <PXPhotoLibraryUIChangeObserver> {
    void block;
    void observer;
    void prepareBlock;
}

- (void).cxx_destruct;
- (id)init;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;

@end
