
@interface NTKCFacesBundleArrayGalleryCollection : NTKFacesArrayGalleryCollection {
    CLKDevice * _device;
    NTKFaceBundle * _faceBundle;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NTKFaceBundle *faceBundle;

- (void).cxx_destruct;
- (id)device;
- (id)faceBundle;
- (id)initWithDevice:(id)arg1 faceBundle:(id)arg2;
- (void)loadFaces;

@end
