
@protocol DYMTLIndirectCommandBufferTranslateDelegate

@required

- (struct pair<unsigned long long, unsigned long long> { unsigned long long x1; unsigned long long x2; })bufferIdAndOffsetForGPUVirtualAddress:(unsigned long long)arg1;
- (unsigned long long)computePipelineIdForUniqueIdentifier:(unsigned long long)arg1;
- (unsigned long long)renderPipelineIdForUniqueIdentifier:(unsigned long long)arg1;

@end
