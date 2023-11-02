
@protocol SCNGeometryDeformerInitComputeContext <NSObject>

@required

- (void)configureStageInputOutputDescriptor:(MTLStageInputOutputDescriptor *)arg1 withDeformerFunction:(id <MTLFunction>)arg2;
- (<MTLBlitCommandEncoder> *)currentBlitEncoder;
- (<MTLDevice> *)device;

@end
