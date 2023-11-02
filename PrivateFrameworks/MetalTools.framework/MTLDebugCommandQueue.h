
@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int  _deadlineAwareState;
}

- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)arg1;
- (id)commandBufferWithUnretainedReferences;
- (void)insertDebugCaptureBoundary;
- (void)validateDeadlineAwareness:(id)arg1;

@end
