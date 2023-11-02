
@protocol SCNMTLDeformer <NSObject>

@required

+ (unsigned long long)requiredInputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)supportedOutputs;

- (unsigned long long)updateWithComputeContext:(id <SCNMTLDeformerUpdateComputeContext>)arg1 positions:(id <MTLBuffer>)arg2 normals:(id <MTLBuffer>)arg3 tangents:(id <MTLBuffer>)arg4;

@end
