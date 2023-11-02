
@protocol MTLComputePipelineStateSPI <MTLComputePipelineState, MTLPipelineStateWithProgramAddressTable>

@required

- (unsigned long long)allocatedSize;
- (MTLDebugInstrumentationData *)debugInstrumentationData;
- (unsigned int)getComputeKernelTelemetryID;
- (unsigned long long)gpuHandle;
- (unsigned long long)staticThreadgroupMemoryLength;
- (long long)textureWriteRoundingMode;
- (unsigned long long)uniqueIdentifier;

@optional

- (unsigned long long)gpuAddress;
- (unsigned long long)resourceIndex;

@end
