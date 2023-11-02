
@interface VisionCoreFaceprintInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    NSURL * _aneSpecificModelURL;
    NSArray * _faceAttributes;
    VisionCoreTensorDescriptor * _faceprintOutput;
}

@property (nonatomic, readonly, copy) NSArray *faceAttributes;
@property (nonatomic, readonly) VisionCoreTensorDescriptor *faceprintOutput;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (id)FPrev3_1FArev1_3_MD2AndReturnError:(id*)arg1;
+ (id)FPrev4_0FArev1_4_MD2AndReturnError:(id*)arg1;
+ (id)_outputNameForFaceAttribute:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ANESpecificURL;
- (void)encodeWithCoder:(id)arg1;
- (id)faceAttributes;
- (id)faceprintOutput;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)outputForFaceAttribute:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (id)VNFaceprintFromData:(id)arg1 confidence:(float)arg2 originatingRequestSpecifier:(id)arg3 error:(id*)arg4;
- (id)VNFaceprintFromOutputObjects:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;

@end
