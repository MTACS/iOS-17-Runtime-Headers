
@interface SIAlgorithm : NSObject {
    unsigned long long  _algorithmNameHash;
    unsigned long long  _frameBoundarySignpostEventEnd;
    unsigned long long  _frameBoundarySignpostEventStart;
    unsigned long long  _mappingId;
    SIModel * _model;
    SINetworkConfiguration * _networkConfiguration;
}

@property (nonatomic) unsigned long long algorithmNameHash;
@property (nonatomic) unsigned long long frameBoundarySignpostEventEnd;
@property (nonatomic) unsigned long long frameBoundarySignpostEventStart;
@property (nonatomic) unsigned long long mappingId;
@property (readonly) SIModel *model;
@property (retain) SINetworkConfiguration *networkConfiguration;

+ (id)initWithNetworkConfiguration:(id)arg1;
+ (Class)inputDataClass;
+ (Class)outputDataClass;
+ (bool)supportsANE;

- (void).cxx_destruct;
- (long long)_inferenceWithInput:(id)arg1 output:(id)arg2;
- (long long)_postprocessingOutput:(id)arg1;
- (long long)_preprocessingInputData:(id)arg1;
- (long long)_runWithInput:(id)arg1 output:(id)arg2;
- (void)addPrewiringBuffersToStreamWithInputPools:(id)arg1 outputPools:(id)arg2;
- (unsigned long long)algorithmNameHash;
- (id)createEmptyInputDataWithExpectedFormat;
- (unsigned long long)frameBoundarySignpostEventEnd;
- (unsigned long long)frameBoundarySignpostEventStart;
- (struct CGSize { double x1; double x2; })getInputResolution;
- (struct CGSize { double x1; double x2; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)arg1;
- (unsigned long long)mappingId;
- (id)model;
- (id)networkConfiguration;
- (id)networkVersion;
- (long long)runWithInput:(id)arg1 output:(id)arg2;
- (long long)runWithInput:(id)arg1 output:(id)arg2 resolutionConfiguration:(long long)arg3;
- (void)setAlgorithmNameHash:(unsigned long long)arg1;
- (void)setFrameBoundarySignpostEventEnd:(unsigned long long)arg1;
- (void)setFrameBoundarySignpostEventStart:(unsigned long long)arg1;
- (void)setMappingId:(unsigned long long)arg1;
- (void)setNetworkConfiguration:(id)arg1;
- (long long)switchConfiguration:(unsigned long long)arg1;

@end
