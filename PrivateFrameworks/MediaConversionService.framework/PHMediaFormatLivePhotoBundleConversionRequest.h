
@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest {
    PHMediaFormatLivePhotoConversionRequest * _livePhotoConversionRequest;
}

@property (retain) PHMediaFormatLivePhotoConversionRequest *livePhotoConversionRequest;

- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(id /* block */)arg1;
- (id)livePhotoConversionRequest;
- (void)postProcessSuccessfulCompositeRequest;
- (bool)prepareWithError:(id*)arg1;
- (void)setLivePhotoConversionRequest:(id)arg1;

@end
