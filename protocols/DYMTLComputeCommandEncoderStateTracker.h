
@protocol DYMTLComputeCommandEncoderStateTracker

@required

- (void)applyToEncoder:(void *)arg1 rawBytesBlock:(void *)arg2; // needs 2 arg types, found 8: <MTLComputeCommandEncoder> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void*, id /* block */, void*, unsigned long long, void*
- (<MTLComputePipelineState> *)computePipelineState;
- (void)enumerateBuffersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundBufferInfo { id x1; void *x2; unsigned long long x3; }*, unsigned long long, bool*, void*
- (void)enumerateSamplersUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct DYMTLBoundSamplerInfo { id x1; float x2; float x3; }*, unsigned long long, bool*, void*
- (void)enumerateTexturesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLTexture> *, unsigned long long, bool*, void*

@end
