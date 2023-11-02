
@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {
    MTLComputePipelineDescriptor * _descriptor;
    <MTLFunction> * _function;
    unsigned long long  _maxStageInGridOrigin;
    unsigned long long  _maxStageInGridSize;
    unsigned long long  _maxThreadIndexInThreadgroup;
    unsigned long long  _maxThreadPositionInGrid;
    unsigned long long  _maxThreadPositionInThreadgroup;
    unsigned long long  _maxThreadgroupPositionInGrid;
    unsigned long long  _maxThreadgroupsPerGrid;
    unsigned long long  _maxThreadsPerGrid;
    unsigned long long  _maxThreadsPerThreadgroup;
    MTLComputePipelineReflection * _reflection;
}

@property (nonatomic, readonly) MTLComputePipelineDescriptor *descriptor;
@property (nonatomic, readonly) <MTLFunction> *function;
@property (nonatomic, readonly) MTLComputePipelineReflection *reflection;

- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)function;
- (id)functionHandleToDebugFunctionHandle:(id)arg1 parentFunction:(id)arg2;
- (id)functionHandleWithFunction:(id)arg1;
- (id)getParameter:(id)arg1;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (bool)isAncestorOf:(id)arg1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (id)reflection;
- (void)validateHandleForSetFunction:(id)arg1;

@end
