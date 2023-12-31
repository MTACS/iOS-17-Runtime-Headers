
@interface MTLTelemetryComputePipelineState : MTLToolsComputePipelineState {
    MTLTelemetryDevice * device;
    unsigned int  uniqueID;
}

+ (unsigned int)generateUniqueID;

- (void)accumulateUsage;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end
