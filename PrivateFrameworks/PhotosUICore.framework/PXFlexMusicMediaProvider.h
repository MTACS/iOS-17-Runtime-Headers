
@interface PXFlexMusicMediaProvider : NSObject <PXAudioAssetMediaProvider> {
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
- (void)_deliverResultForAsset:(id)arg1 preferredDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id)arg3 toHandler:(id /* block */)arg4;
- (void)_handleDownloaderFinishedForAsset:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (long long)_nextRequestID;
- (void)_queue_cancelRequest:(long long)arg1;
- (void)_queue_handleDownloaderFinishedForAsset:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_queue_startDownloadIfNeededForRequest:(id)arg1;
- (void)cancelRequest:(long long)arg1;
- (id)init;
- (id)initWithQOSClass:(unsigned int)arg1;
- (long long)requestMediaForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
