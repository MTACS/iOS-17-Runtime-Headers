
@interface PISliderNetAdjustmentsJob : PISliderNetBaseJob {
    NSDictionary * _adjustments;
    float  _similarityScore;
    IHKFeatureVector * _sourceContentFeatureVector;
    IHKFeatureVector * _sourceStyleFeatureVector;
}

- (void).cxx_destruct;
- (id)cacheKey;
- (void)cleanUp;
- (bool)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { }*)arg1 error:(out id*)arg2;
- (bool)prepare:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
