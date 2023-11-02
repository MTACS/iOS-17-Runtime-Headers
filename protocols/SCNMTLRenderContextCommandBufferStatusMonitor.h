
@protocol SCNMTLRenderContextCommandBufferStatusMonitor <NSObject>

@required

- (void)renderContext:(SCNMTLRenderContext *)arg1 commandBufferDidCompleteWithError:(id <MTLCommandBuffer>)arg2;

@end
