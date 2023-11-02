
@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {
    unsigned long long  _attachmentWriteMask;
    unsigned long long  _colorPixelFormat;
    unsigned long long  _depthPixelFormat;
    MTLRenderPipelineDescriptor * _descriptor;
    unsigned long long  _maxInstanceCount;
    unsigned long long  _maxPatchCount;
    unsigned long long  _maxVertexCount;
    MTLMeshRenderPipelineDescriptor * _meshDescriptor;
    unsigned long long  _rasterSampleCount;
    MTLRenderPipelineReflection * _reflection;
    unsigned long long  _stencilPixelFormat;
    bool  _threadgroupSizeMatchesTileSize;
    MTLTileRenderPipelineDescriptor * _tileDescriptor;
    unsigned long long  _vertexDescriptorLayoutCount;
    struct { 
        unsigned long long bufferIndex; 
        unsigned long long bufferStride; 
    }  _vertexDescriptorLayouts;
}

@property (nonatomic, readonly) unsigned long long attachmentWriteMask;
@property (nonatomic, readonly) MTLRenderPipelineDescriptor *descriptor;
@property (nonatomic, readonly) MTLMeshRenderPipelineDescriptor *meshDescriptor;
@property (getter=isMeshShaderPipeline, readonly) bool meshShaderPipeline;
@property (nonatomic, readonly) bool rasterizationEnabled;
@property (nonatomic, readonly) MTLRenderPipelineReflection *reflection;
@property (nonatomic, readonly) MTLTileRenderPipelineDescriptor *tileDescriptor;

- (id)_findMasterStruct:(id)arg1 includeImageBlockData:(bool)arg2;
- (void)_updateCachedMeshPipelineState;
- (void)_updateCachedPipelineState;
- (void)_updateCachedTilePipelineState;
- (void)_validateThreadgroupSize:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 stage:(unsigned long long)arg2 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg3;
- (unsigned long long)attachmentWriteMask;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)fragmentFunctionHandleWithFunction:(id)arg1;
- (id)functionHandleToDebugFunctionHandle:(id)arg1 parentFunction:(id)arg2 stage:(unsigned long long)arg3;
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2;
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2 selector:(SEL)arg3;
- (id)getParameter:(id)arg1;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 meshDescriptor:(id)arg4;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4;
- (bool)isAncestorOf:(id)arg1;
- (bool)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1;
- (bool)isMeshShaderPipeline;
- (id)meshDescriptor;
- (id)meshFunctionHandleWithFunction:(id)arg1;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 withStage:(unsigned long long)arg2 selector:(SEL)arg3;
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 fragmentAdditionalBinaryFunctions:(id)arg2 error:(id*)arg3;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2 selector:(SEL)arg3;
- (id)objectFunctionHandleWithFunction:(id)arg1;
- (id)outputImageBlockData;
- (bool)rasterizationEnabled;
- (id)reflection;
- (id)tileDescriptor;
- (id)tileFunctionHandleWithFunction:(id)arg1;
- (id)validateBinaryFunctions:(id)arg1 stage:(unsigned long long)arg2;
- (void)validateHandleForSetFunction:(id)arg1;
- (id)vertexFunctionHandleWithFunction:(id)arg1;

@end
