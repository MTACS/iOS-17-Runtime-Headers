
@interface PXAppleMusicMediaProvider : NSObject <PXAudioAssetMediaProvider> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_downloaderByAsset;
    NSMutableDictionary * _queue_requestByID;
    NSMutableDictionary * _queue_requestIDsByAsset;
    _Atomic int  _requestIDCounter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_avAssetWithLocalMediaURL:(id)arg1 entryPoint:(id)arg2 fadeOutDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 maximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 audioMix:(id*)arg5;
- (void)_handleDownloadFinishedForAsset:(id)arg1 downloadLocation:(id)arg2 error:(id)arg3;
- (id)_localMediaURLForAsset:(id)arg1 createIntermediateDirectories:(bool)arg2 error:(id*)arg3;
- (long long)_nextRequestID;
- (void)_queue_cancelRequest:(long long)arg1;
- (void)_queue_deliverResultForRequest:(id)arg1 localMediaURL:(id)arg2 error:(id)arg3;
- (void)_queue_handleDownloadFinishedForAsset:(id)arg1 downloadLocation:(id)arg2 error:(id)arg3;
- (void)_queue_processRequest:(id)arg1;
- (void)_queue_startDownloadIfNeededForRequest:(id)arg1;
- (void)cancelRequest:(long long)arg1;
- (id)init;
- (id)initWithQOSClass:(unsigned int)arg1;
- (long long)requestMediaForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
