
@interface PISliderNetLiftJob : PISliderNetBaseJob {
    NSData * _contentFeatureVectorData;
    NSData * _styleFeatureVectorData;
}

- (void).cxx_destruct;
- (id)cacheKey;
- (void)cleanUp;
- (bool)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { }*)arg1 error:(out id*)arg2;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
