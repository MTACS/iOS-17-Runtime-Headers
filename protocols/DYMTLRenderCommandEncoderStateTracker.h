
@protocol DYMTLRenderCommandEncoderStateTracker

@required

- (void)applyAllStateToEncoder:(void *)arg1 rawBytesBlock:(void *)arg2; // needs 2 arg types, found 9: <MTLRenderCommandEncoder> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void*, id /* block */, unsigned int, void*, unsigned long long, void*
- (void)applyVertexFragmentStateToEncoder:(void *)arg1 rawBytesBlock:(void *)arg2; // needs 2 arg types, found 9: <MTLRenderCommandEncoder> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void*, id /* block */, unsigned int, void*, unsigned long long, void*
- (void)applyVertexStateToEncoder:(void *)arg1 rawBytesBlock:(void *)arg2; // needs 2 arg types, found 9: <MTLRenderCommandEncoder> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void*, id /* block */, unsigned int, void*, unsigned long long, void*
- (unsigned int)backReferenceValue;
- (float)depthBias;
- (float)depthBiasClamp;
- (float)depthBiasSlopeScale;
- (unsigned long long)depthClipMode;
- (<MTLDepthStencilState> *)depthStencilState;
- (MTLRenderPassDescriptor *)descriptor;
- (void)enumerateFragmentBuffersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundBufferInfo { id x1; void *x2; unsigned long long x3; }*, unsigned long long, bool*, void*
- (void)enumerateFragmentSamplersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundSamplerInfo { id x1; float x2; float x3; }*, unsigned long long, bool*, void*
- (void)enumerateFragmentTexturesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLTexture> *, unsigned long long, bool*, void*
- (void)enumerateThreadgroupMemoryUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLThreadgroupMemoryInfo { unsigned long long x1; unsigned long long x2; }*, unsigned long long, bool*, void*
- (void)enumerateTileBuffersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundBufferInfo { id x1; void *x2; unsigned long long x3; }*, unsigned long long, bool*, void*
- (void)enumerateTileSamplersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundSamplerInfo { id x1; float x2; float x3; }*, unsigned long long, bool*, void*
- (void)enumerateTileTexturesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLTexture> *, unsigned long long, bool*, void*
- (void)enumerateVertexBuffersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundBufferInfo { id x1; void *x2; unsigned long long x3; }*, unsigned long long, bool*, void*
- (void)enumerateVertexSamplersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundSamplerInfo { id x1; float x2; float x3; }*, unsigned long long, bool*, void*
- (void)enumerateVertexTexturesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLTexture> *, unsigned long long, bool*, void*
- (unsigned int)frontReferenceValue;
- (unsigned long long)height;
- (<MTLRenderPipelineState> *)renderPipelineState;
- (struct vector<MTLViewport, std::allocator<MTLViewport>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<MTLViewport *, std::allocator<MTLViewport>> { struct { /* ? */ } *x_3_1_1; } x3; })viewports;
- (unsigned long long)width;

@end
