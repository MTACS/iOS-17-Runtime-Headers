
@interface PXStoryPHAssetCollectionSongsProducer : NSObject <PXStorySongsProducer> {
    PHAssetCollection * _assetCollection;
    PXStoryConfiguration * _configuration;
    PXStoryPhotoKitMusicCurationProvider * _curationProvider;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  logContext;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (void)_handleAppleMusicCapabilityStatus:(long long)arg1 error:(id)arg2 curationResult:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)_handleMusicCurationResult:(id)arg1 signpostID:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (id)assetCollection;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 configuration:(id)arg2 curationProvider:(id)arg3;
- (id)log;
- (unsigned long long)logContext;
- (id)requestSongsWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (void)setLogContext:(unsigned long long)arg1;

@end
