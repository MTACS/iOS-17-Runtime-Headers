
@interface PHContentEditingInputRequestContext : PHMediaRequestContext {
    NSProgress * _adjustmentProgress;
    PHAdjustmentDataRequest * _adjustmentRequest;
    NSArray * _assetResources;
    PHImageResourceChooser * _backupChooser;
    PHContentEditingInputResult * _contentEditingInputResult;
    PHImageRequest * _displayImageRequest;
    unsigned long long  _imageBaseRequestIndex;
    PAImageConversionServiceClient * _imageConversionClient;
    NSProgress * _imageProgress;
    unsigned long long  _inflightMediaRequestCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PHContentEditingInputRequestOptions * _options;
    PHRepairRequest * _repairRequest;
    NSMutableIndexSet * _requestIndexesOfAssetResourceRequests;
    bool  _useRAWAsUnadjustedBase;
    NSProgress * _videoProgress;
    PHVideoRequest * _videoRequest;
}

@property (nonatomic, readonly) PHContentEditingInputRequestOptions *options;

- (void).cxx_destruct;
- (long long)_adjustmentBaseVersionFromResult:(id)arg1 request:(id)arg2 canHandleAdjustmentData:(bool*)arg3;
- (id)_assetResourceForType:(long long)arg1;
- (long long)_assetResourceTypeForResourceType:(unsigned int)arg1 withBaseVersion:(long long)arg2;
- (id)_assetResources;
- (id)_baseMediaRequestsForBaseVersion:(long long)arg1 error:(id*)arg2;
- (bool)_canSkipMediaMetadataCheckWithBaseVersion:(long long)arg1;
- (void)_finishIfAllCompleteWithRequest:(id)arg1;
- (id)_largestUnadjustedDerivativeImageResource;
- (id)_lazyAdjustmentProgress;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (void)_prepareAndAddMediaRequestsToChildRequests:(id)arg1;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_renderVideoFromVideoURL:(id)arg1 asset:(id)arg2 adjustmentData:(id)arg3 canHandleAdjustmentData:(bool)arg4 resultHandler:(id /* block */)arg5;
- (id)_resourceRequestForAssetResource:(id)arg1 wantsURLOnly:(bool)arg2 progress:(id)arg3;
- (bool)_shouldRequestImage;
- (bool)_shouldRequestVideo;
- (id)_videoBehaviorSpecForBaseVersion:(long long)arg1;
- (void)cancel;
- (long long)downloadIntent;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(bool)arg5 resultHandler:(id /* block */)arg6;
- (id)initialRequests;
- (bool)isNetworkAccessAllowed;
- (id)options;
- (void)processAndReturnResultsWithRequest:(id)arg1;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(bool)arg2 isDegraded:(bool)arg3 result:(id)arg4;
- (id /* block */)progressHandler;
- (id)progresses;
- (void)start;
- (long long)type;

@end
