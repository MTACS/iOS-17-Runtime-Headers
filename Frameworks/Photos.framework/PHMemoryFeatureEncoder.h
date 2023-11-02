
@interface PHMemoryFeatureEncoder : NSKeyedArchiver {
    PHPhotoLibrary * _photoLibrary;
}

@property (retain) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;

@end
