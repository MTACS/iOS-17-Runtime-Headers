
@interface XBApplicationSnapshotImageGenerator : NSObject {
    <XBSnapshotDataProvider> * _dataProvider;
    long long  _dataProviderFetchType;
    id /* block */  _didGenerateImageDataHandler;
    id /* block */  _didGenerateImageHandler;
    bool  _generate_handled_request;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _generate_lock;
    long long  _imageDataRequest;
    NSString * _loggingPrefix;
    <XBApplicationSnapshotImageGenerationScheduling> * _scheduler;
    XBApplicationSnapshot * _weak_snapshot;
}

- (void).cxx_destruct;
- (void)_generate;
- (id)_generate_imageFromLegacyDataProvider:(id)arg1 forSnapshot:(id)arg2 imageDataHandler:(id /* block */)arg3;
- (id)_generate_imageFromNewDataProvider:(id)arg1 forSnapshot:(id)arg2 imageDataHandler:(id /* block */)arg3;
- (bool)_generate_lock_shouldGenerateForSnapshot:(id)arg1 reason:(id*)arg2;
- (void)_performImageDataGeneration:(id /* block */)arg1 withHandler:(id /* block */)arg2;
- (bool)_shouldGenerateForSnapshot:(id)arg1 reason:(id*)arg2;
- (void)generate;
- (id)initWithScheduler:(id)arg1 snapshot:(id)arg2 dataProvider:(id)arg3 imageDataRequest:(long long)arg4 loggingPrefix:(id)arg5 imageGenerationHandler:(id /* block */)arg6 imageDataGenerationHandler:(id /* block */)arg7;
- (void)performAsync:(id /* block */)arg1;
- (void)scheduleGeneration;

@end
