
@interface VisionCoreStandAloneSceneprintInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor

@property (nonatomic, readonly) VisionCoreTensorDescriptor *sceneprintOutput;

+ (id)descriptorAndReturnError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (bool)isEqual:(id)arg1;
- (id)sceneprintOutput;

@end
