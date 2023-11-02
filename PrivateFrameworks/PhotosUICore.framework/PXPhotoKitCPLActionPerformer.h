
@interface PXPhotoKitCPLActionPerformer : PXCPLActionPerformer {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 photoLibrary:(id)arg2;
- (id)photoLibrary;

@end
