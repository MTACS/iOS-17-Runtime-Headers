
@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {
    struct { 
        long long width; 
        long long height; 
    }  _imageSize;
    VNObservation * _observation;
}

@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)classifyPipelineImageCorrectionRequest;
- (void)cleanUp;
- (id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer { }*)arg1 error:(out id*)arg2;
- (id)initWithClassifyPipelineImageCorrectionRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
