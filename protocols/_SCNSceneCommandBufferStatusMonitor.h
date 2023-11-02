
@protocol _SCNSceneCommandBufferStatusMonitor <NSObject>

@required

- (void)renderer:(id <SCNSceneRenderer>)arg1 commandBufferDidCompleteWithError:(id <MTLCommandBuffer>)arg2;

@end
