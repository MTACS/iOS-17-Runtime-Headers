
@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState {
    NSSet * activeFragmentSamplers;
    NSSet * activeFragmentTextures;
    MTLTelemetryDevice * device;
    bool  hasAnisoConstantSampler;
    unsigned int  uniqueID;
}

+ (unsigned int)generateUniqueID;

- (void)accumulateUsage;
- (void)dealloc;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end
