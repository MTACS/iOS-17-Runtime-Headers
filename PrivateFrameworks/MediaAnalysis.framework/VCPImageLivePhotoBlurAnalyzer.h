
@interface VCPImageLivePhotoBlurAnalyzer : VCPBlurAnalyzer {
    NSArray * _movingObjects;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (id)initWithMovingObjectsResults:(id)arg1;

@end
