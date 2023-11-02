
@interface VCPPhotosQuickFaceDetectionManager : NSObject {
    VCPFaceAnalyzer * _faceAnalyzer;
    PHPhotoLibrary * _photoLibrary;
}

- (void).cxx_destruct;
- (int)_persistFaces:(id)arg1 forAsset:(id)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (int)processAsset:(id)arg1;

@end
