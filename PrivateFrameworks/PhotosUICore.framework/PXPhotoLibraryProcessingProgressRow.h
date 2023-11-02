
@interface PXPhotoLibraryProcessingProgressRow : PTButtonRow {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultUIAction;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 titleKeyPath:(id)arg2 imageKeyPath:(id)arg3;
- (id)photoLibrary;
- (Class)tableViewCellClass;

@end
