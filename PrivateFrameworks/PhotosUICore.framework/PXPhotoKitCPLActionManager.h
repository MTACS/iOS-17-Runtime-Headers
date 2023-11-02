
@interface PXPhotoKitCPLActionManager : PXCPLActionManager {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;

@end
