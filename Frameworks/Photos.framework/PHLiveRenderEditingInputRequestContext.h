
@interface PHLiveRenderEditingInputRequestContext : PHContentEditingInputRequestContext {
    <PHMediaRequestLiveRenderingOptions> * _liveRenderOptions;
    NSProgress * _onDemandRenderProgress;
    PHVideoRequest * _onDemandRenderRequest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renderLock;
    id /* block */  _renderedVideoHandler;
    PLPhotoEditRenderer * _renderer;
    bool  _shouldReframe;
}

+ (id)videoLiveRenderContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 targetSize:(struct CGSize { double x1; double x2; })arg5 contentMode:(long long)arg6 renderedVideoHandler:(id /* block */)arg7;
+ (id)videoLiveRenderContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 targetSize:(struct CGSize { double x1; double x2; })arg5 renderedVideoHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (void)_handleRenderVideoFinishedWithRequest:(id)arg1 avAsset:(id)arg2 videoComposition:(id)arg3 audioMix:(id)arg4 error:(id)arg5 mutableInfo:(id)arg6;
- (void)cancel;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(bool)arg5 resultHandler:(id /* block */)arg6;
- (id)initialRequests;
- (void)processAndReturnResultsWithRequest:(id)arg1;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(bool)arg2 isDegraded:(bool)arg3 result:(id)arg4;
- (id /* block */)progressHandler;
- (id)progresses;

@end
