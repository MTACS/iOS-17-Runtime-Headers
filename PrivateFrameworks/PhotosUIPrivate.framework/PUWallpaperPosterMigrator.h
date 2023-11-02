
@interface PUWallpaperPosterMigrator : NSObject {
    NSURL * _assetDirectory;
    unsigned long long  _configurationType;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSURL *assetDirectory;
@property (nonatomic, readonly) unsigned long long configurationType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleLoadedConfiguration:(id)arg1 scale:(double)arg2 completionBlock:(id /* block */)arg3;
- (void)_handleSegmentationItem:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 options:(id)arg4 error:(id)arg5 completionBlock:(id /* block */)arg6;
- (id)assetDirectory;
- (void)attemptMigrationWithCompletionBlock:(id /* block */)arg1;
- (unsigned long long)configurationType;
- (id)initWithAssetDirectory:(id)arg1 configurationType:(unsigned long long)arg2;
- (id)queue;

@end
