
@interface PXStoryVisionDetailedSaliencyProducer : NSObject <PXStoryDetailedSaliencyProducer> {
    NSObject<OS_os_log> * _log;
    PXMediaProvider * _mediaProvider;
    long long  _overlappingTileCount;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) long long overlappingTileCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)effectiveSaliencyAreasFromTiledVisionSaliencyAreas:(id)arg1;

- (void).cxx_destruct;
- (void)_requestDetailedSaliencyForDisplayAssets:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithMediaProvider:(id)arg1;
- (id)log;
- (id)mediaProvider;
- (long long)overlappingTileCount;
- (id)requestDetailedSaliencyForDisplayAssets:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (void)requestWorkingImageForDisplayAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)workQueue;

@end
