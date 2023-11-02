
@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState, MTLPipelineStateWithProgramAddressTable>

@required

- (unsigned long long)allocatedSize;
- (MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
- (<MTLFunctionHandle> *)fragmentFunctionHandleWithFunction:(id <MTLFunction>)arg1;
- (unsigned int)getFragmentShaderTelemetryID;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned long long)gpuHandle;
- (unsigned long long)maxTotalThreadsPerMeshThreadgroup;
- (unsigned long long)maxTotalThreadsPerObjectThreadgroup;
- (MTLDebugInstrumentationData *)meshDebugInstrumentationData;
- (<MTLFunctionHandle> *)meshFunctionHandleWithFunction:(id <MTLFunction>)arg1;
- (unsigned long long)meshThreadExecutionWidth;
- (<MTLIntersectionFunctionTable> *)newFragmentIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (NSData *)newFragmentShaderDebugInfo;
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithAdditionalBinaryFunctions:(NSArray *)arg1 fragmentAdditionalBinaryFunctions:(NSArray *)arg2 error:(id*)arg3;
- (<MTLIntersectionFunctionTable> *)newTileIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (<MTLRenderPipelineState> *)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(NSArray *)arg1 error:(id*)arg2;
- (<MTLIntersectionFunctionTable> *)newVertexIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (NSData *)newVertexShaderDebugInfo;
- (<MTLVisibleFunctionTable> *)newVisibleFunctionTableFromFragmentStageWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (<MTLVisibleFunctionTable> *)newVisibleFunctionTableFromMeshStageWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (<MTLVisibleFunctionTable> *)newVisibleFunctionTableFromObjectStageWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (<MTLVisibleFunctionTable> *)newVisibleFunctionTableFromTileStageWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (<MTLVisibleFunctionTable> *)newVisibleFunctionTableFromVertexStageWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (MTLDebugInstrumentationData *)objectDebugInstrumentationData;
- (<MTLFunctionHandle> *)objectFunctionHandleWithFunction:(id <MTLFunction>)arg1;
- (unsigned long long)objectThreadExecutionWidth;
- (long long)textureWriteRoundingMode;
- (MTLDebugInstrumentationData *)tileDebugInstrumentationData;
- (<MTLFunctionHandle> *)tileFunctionHandleWithFunction:(id <MTLFunction>)arg1;
- (unsigned long long)uniqueIdentifier;
- (MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
- (<MTLFunctionHandle> *)vertexFunctionHandleWithFunction:(id <MTLFunction>)arg1;

@optional

- (unsigned int)explicitVisibilityGroupID;
- (unsigned long long)gpuAddress;
- (<MTLIntersectionFunctionTable> *)newMeshIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (<MTLIntersectionFunctionTable> *)newObjectIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (unsigned long long)resourceIndex;

@end
