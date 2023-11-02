
@interface MTLGPUDebugCommandQueue : MTLToolsCommandQueue {
    NSString * _tracePath;
}

@property (nonatomic, readonly) NSString *tracePath;

- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)arg1;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCommandQueue:(id)arg1 device:(id)arg2;
- (id)tracePath;

@end
