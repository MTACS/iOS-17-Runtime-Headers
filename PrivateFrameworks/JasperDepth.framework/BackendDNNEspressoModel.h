
@interface BackendDNNEspressoModel : ADEspressoRunner {
    ADEspressoBufferHandle * _depthInputBufferHandle;
    ADEspressoBufferHandle * _imageInputBufferHandle;
    NSMutableArray * _outputFeatureVectorDim;
    ADEspressoBufferHandle * _resultsOutputBufferHandle;
}

@property (nonatomic, retain) ADEspressoBufferHandle *depthInputBufferHandle;
@property (nonatomic, retain) ADEspressoBufferHandle *imageInputBufferHandle;
@property (nonatomic, retain) NSMutableArray *outputFeatureVectorDim;
@property (retain) ADEspressoBufferHandle *resultsOutputBufferHandle;

- (void).cxx_destruct;
- (id)depthInputBufferHandle;
- (id)imageInputBufferHandle;
- (bool)initializeInputOutputBlobs;
- (id)outputFeatureVectorDim;
- (int)processImage:(struct __CVBuffer { }*)arg1 depthImage:(struct __CVBuffer { }*)arg2 result:(float*)arg3;
- (id)resultsOutputBufferHandle;
- (void)setDepthInputBufferHandle:(id)arg1;
- (void)setImageInputBufferHandle:(id)arg1;
- (void)setOutputFeatureVectorDim:(id)arg1;
- (void)setResultsOutputBufferHandle:(id)arg1;

@end
