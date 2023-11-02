
@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (void)barrier;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (unsigned long long)globalTraceObjectID;

@end
