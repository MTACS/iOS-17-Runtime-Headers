
@interface VisionCoreInferenceNetworkDescriptor : VisionCoreProcessingDescriptor {
    VisionCoreTensorDescriptor * _confidencesOutput;
    NSDictionary * _inputImages;
    NSDictionary * _inputs;
    NSDictionary * _networkHeadVersions;
    NSDictionary * _outputs;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSArray *allInputImages;
@property (nonatomic, readonly, copy) NSArray *allInputNames;
@property (nonatomic, readonly, copy) NSArray *allInputs;
@property (nonatomic, readonly, copy) NSArray *allOutputNames;
@property (nonatomic, readonly, copy) NSArray *allOutputs;
@property (nonatomic, readonly) VisionCoreTensorDescriptor *confidencesOutput;
@property (nonatomic, readonly) VisionCoreTensorDescriptor *featureprintOutput;
@property (nonatomic, readonly) NSURL *networkFileURL;
@property (nonatomic, readonly) VisionCoreImageTensorDescriptor *onlyInputImage;
@property (nonatomic, readonly) VisionCoreProcessingDescriptorSpecifier *specifier;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (id)URLForEspressoModelNamed:(id)arg1 error:(id*)arg2;
+ (id)availableIdentifiers;
+ (id)availableVersionsForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)descriptorForIdentifier:(id)arg1 version:(id)arg2 error:(id*)arg3;
+ (id)descriptorsForIdentifier:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)allInputImages;
- (id)allInputNames;
- (id)allInputs;
- (id)allOutputNames;
- (id)allOutputs;
- (id)confidencesOutput;
- (id)confidencesOutputOfClass:(Class)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureprintOutput;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 specifier:(id)arg2 networkHeadVersions:(id)arg3 inputImage:(id)arg4 outputs:(id)arg5 confidencesOutput:(id)arg6;
- (id)initWithURL:(id)arg1 specifier:(id)arg2 networkHeadVersions:(id)arg3 inputs:(id)arg4 outputs:(id)arg5 inputImages:(id)arg6 confidencesOutput:(id)arg7;
- (id)inputNamed:(id)arg1 error:(id*)arg2;
- (id)inputOfClass:(Class)arg1 named:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)networkFileURL;
- (id)onlyInputImage;
- (id)outputNamed:(id)arg1 error:(id*)arg2;
- (id)outputOfClass:(Class)arg1 named:(id)arg2 error:(id*)arg3;
- (id)versionOfNetworkHead:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (id)URLForComputeDevice:(id)arg1 error:(id*)arg2;
- (id)VNEspressoModelImageprintOfClass:(Class)arg1 fromData:(id)arg2 tensorDescriptor:(id)arg3 originatingRequestSpecifier:(id)arg4 fromBlock:(id /* block */)arg5 error:(id*)arg6;
- (bool)getVNEspressoModelImageprintData:(id*)arg1 elementType:(unsigned long long*)arg2 elementCount:(unsigned long long*)arg3 fromTensorData:(id)arg4 descriptor:(id)arg5 error:(id*)arg6;

@end
