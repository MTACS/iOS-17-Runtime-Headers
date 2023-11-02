
@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState {
    unsigned int  _activeThreadgroupMask;
    NSMutableArray * _binaryFunctionData;
    unsigned long long  _constantOffset;
    MTLGPUDebugBuffer * _indirectStateBuffer;
    MTLComputePipelineReflection * _internalReflection;
    MTLGPUDebugImageData * _kernelFunctionData;
    int  _maxCallStackDepth;
    NSMutableArray * _retainedFunctions;
    bool  _supportsIndirectCommandBuffers;
    unsigned int  _threadgroupArgumentOffset;
    MTLComputePipelineReflection * _userReflection;
}

@property (nonatomic, readonly) NSArray *binaryFunctionData;
@property (nonatomic, readonly) unsigned long long constantOffset;
@property (nonatomic, readonly) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (nonatomic, readonly) MTLGPUDebugBuffer *indirectStateBuffer;
@property (nonatomic, readonly) MTLComputePipelineReflection *internalReflection;
@property (nonatomic, readonly) MTLGPUDebugImageData *kernelFunctionData;
@property (nonatomic, readonly) int maxCallStackDepth;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (nonatomic, readonly) MTLComputePipelineReflection *userReflection;

- (void)_initConstantsBuffer:(id)arg1 device:(id)arg2;
- (id)binaryFunctionData;
- (unsigned long long)constantOffset;
- (void)dealloc;
- (id)functionHandleWithFunction:(id)arg1;
- (id)globalConstantsBuffer;
- (id)indirectStateBuffer;
- (id)initWithComputePipelineState:(id)arg1 binaryFunctions:(id)arg2 withState:(id)arg3 device:(id)arg4;
- (id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5;
- (id)internalReflection;
- (id)kernelFunctionData;
- (int)maxCallStackDepth;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (void)releaseReflection;
- (unsigned long long)staticThreadgroupMemoryLength;
- (id)userReflection;

@end
