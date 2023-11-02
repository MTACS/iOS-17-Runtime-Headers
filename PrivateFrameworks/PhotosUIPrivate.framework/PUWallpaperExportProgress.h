
@interface PUWallpaperExportProgress : NSObject {
    NSArray * _assetUUIDs;
    NSMutableDictionary * _downloadProgress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _processingProgress;
    id /* block */  _progressHandler;
    double  _totalWork;
}

@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) NSMutableDictionary *downloadProgress;
@property (nonatomic, readonly) NSMutableDictionary *processingProgress;
@property (nonatomic, readonly) id /* block */ progressHandler;
@property (nonatomic, readonly) double totalWork;

- (void).cxx_destruct;
- (void)_updateProgressValue:(double)arg1 forAssetUUID:(id)arg2 inDictionary:(id)arg3;
- (id)assetUUIDs;
- (void)begin;
- (id)downloadProgress;
- (void)finish;
- (id)init;
- (id)initWithAssetUUIDs:(id)arg1 progressHandler:(id /* block */)arg2;
- (id)processingProgress;
- (id /* block */)progressHandler;
- (void)reportDownloadProgress:(double)arg1 forAssetUUID:(id)arg2;
- (void)reportProcessingProgress:(double)arg1 forAssetUUID:(id)arg2;
- (double)totalWork;

@end
