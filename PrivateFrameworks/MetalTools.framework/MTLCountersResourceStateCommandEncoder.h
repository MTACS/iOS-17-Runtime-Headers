
@interface MTLCountersResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder {
    MTLCountersTraceResourceStateCommandEncoder * _traceEncoder;
}

- (void)copyMappingStateFromTexture:(id)arg1 mipLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 toBuffer:(id)arg4 offset:(unsigned long long)arg5 numTiles:(unsigned long long)arg6;
- (void)dealloc;
- (void)endEncoding;
- (id)initWithResourceStateCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;
- (void)insertDebugSignpost:(id)arg1;
- (void)moveTextureMappingsFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }*)arg3 mipLevels:(const unsigned long long*)arg4 slices:(const unsigned long long*)arg5 numRegions:(unsigned long long)arg6;
- (void)waitForFence:(id)arg1;

@end
