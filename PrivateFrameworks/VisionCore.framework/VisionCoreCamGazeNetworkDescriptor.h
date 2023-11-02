
@interface VisionCoreCamGazeNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    <VisionCoreCamGazeClassifier> * _gazeClassifier;
    VisionCoreTensorDescriptor * _gazeProbabilitiesOutput;
}

@property (nonatomic, readonly) <VisionCoreCamGazeClassifier> *gazeClassifier;
@property (nonatomic, readonly) VisionCoreTensorDescriptor *gazeProbabilitiesOutput;

+ (id)camGazeV1AndReturnError:(id*)arg1;
+ (id)camGazeV2AndReturnError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)gazeClassifier;
- (id)gazeProbabilitiesOutput;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
