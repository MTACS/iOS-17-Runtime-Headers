
@interface PHLivePhotoRequestContext : PHMediaRequestContext {
    PHImageRequest * _fastImageRequest;
    PHImageRequest * _highQualityImageRequest;
    bool  _imagePartCompleted;
    NSProgress * _imageProgress;
    PHLivePhotoRequestOptions * _livePhotoOptions;
    PHLivePhotoResult * _livePhotoResult;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _videoPartCompleted;
    NSProgress * _videoProgress;
    PHVideoRequest * _videoRequest;
}

@property (nonatomic, readonly) PHLivePhotoRequestOptions *livePhotoOptions;

- (void).cxx_destruct;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (bool)_shouldRequestVideo;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)initialRequests;
- (bool)isNetworkAccessAllowed;
- (id)livePhotoOptions;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(bool)arg2 isDegraded:(bool)arg3 result:(id)arg4;
- (id /* block */)progressHandler;
- (id)progresses;
- (bool)representsShareableHighQualityResource;
- (bool)shouldReportProgress;
- (long long)type;

@end
