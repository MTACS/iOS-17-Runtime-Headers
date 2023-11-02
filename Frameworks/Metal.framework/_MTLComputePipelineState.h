
@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState> {
    MTLDebugInstrumentationData * _debugInstrumentationData;
    <MTLDevice> * _device;
    unsigned long long  _gpuAddress;
    NSString * _label;
    unsigned long long  _resourceIndex;
    bool  _supportIndirectCommandBuffers;
    long long  _textureWriteRoundingMode;
}

@property (nonatomic, readonly) unsigned long long allocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) Class superclass;
@property (readonly) bool supportIndirectCommandBuffers;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long uniqueIdentifier;

- (unsigned long long)allocatedSize;
- (void)dealloc;
- (id)debugInstrumentationData;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionHandleWithFunction:(id)arg1;
- (unsigned int)getComputeKernelTelemetryID;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)initWithParent:(id)arg1;
- (id)label;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (id)pipelineBinaries;
- (unsigned long long)resourceIndex;
- (void)setDebugInstrumentationData:(id)arg1;
- (bool)supportIndirectCommandBuffers;
- (long long)textureWriteFPRoundingMode;
- (long long)textureWriteRoundingMode;
- (unsigned long long)uniqueIdentifier;

@end
