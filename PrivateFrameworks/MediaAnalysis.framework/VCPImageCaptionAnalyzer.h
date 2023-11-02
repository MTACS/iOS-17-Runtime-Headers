
@interface VCPImageCaptionAnalyzer : VCPImageAnalyzer {
    struct CVNLPCaptionHandler { } * _captionHandlerRef;
    NSURL * _modelPath;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (id)init;
- (id)initWithMobileAsset;
- (id)initWithModelPath:(id)arg1;

@end
