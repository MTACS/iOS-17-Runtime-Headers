
@interface PUWallpaperConfigurationUpdater : NSObject {
    <PUPosterOverrideConfiguration> * _overrideConfiguration;
    PHPhotoLibrary * _photoLibrary;
    PFPosterConfiguration * _sourceConfiguration;
    NSURL * _targetAssetDirectory;
}

@property (nonatomic, readonly) <PUPosterOverrideConfiguration> *overrideConfiguration;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PFPosterConfiguration *sourceConfiguration;
@property (nonatomic, readonly) NSURL *targetAssetDirectory;

- (void).cxx_destruct;
- (void)_handleSegmentationItem:(id)arg1 error:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)attemptUpdateWithCompletionBlock:(id /* block */)arg1;
- (id)initWithPhotoLibrary:(id)arg1 sourceConfiguration:(id)arg2 targetAssetDirectory:(id)arg3 overrideConfiguration:(id)arg4;
- (id)overrideConfiguration;
- (id)photoLibrary;
- (id)sourceConfiguration;
- (id)targetAssetDirectory;

@end
