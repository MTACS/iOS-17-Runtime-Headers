
@interface NTKCPhotoFaceCollectionGalleryCollection : NTKFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {
    NSString * _albumName;
    CLKDevice * _device;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initForDevice:(id)arg1;
- (id)newFace;
- (void)photoAlbumChanged;

@end
