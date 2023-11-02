
@interface PHImageRequestContext : PHMediaRequestContext {
    PHCompositeMediaResult * _delayedFinalInvalidDataResult;
    PHImageRequest * _finalRequest;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _finalResultSent;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _firstNonFastResultWasObserved;
    PHImageRequestOptions * _imageOptions;
    PHImageRequest * _initialRequest;
    PHImageRequest * _intermediateRequest;
    NSProgress * _progress;
}

@property (nonatomic, readonly) PHImageRequestOptions *imageOptions;

- (void).cxx_destruct;
- (bool)_isVideoFrameRequest;
- (id)_lazyProgress;
- (id)_produceFinalImageRequestForRequest:(id)arg1;
- (id)_produceIntermediateImageRequestForRequest:(id)arg1;
- (id)_videoBehavior;
- (id)imageOptions;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)initialRequests;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(bool)arg2 isDegraded:(bool)arg3 result:(id)arg4;
- (id /* block */)progressHandler;
- (id)progresses;
- (bool)representsShareableHighQualityResource;
- (bool)shouldLimitRepairRequestsPerProcess;
- (bool)shouldReportProgress;
- (long long)type;

@end
