
@protocol GGLRenderQueueSource <NSObject>

@required

- (bool)isDelayedRenderQueueConsumptionSupported;
- (void*)renderQueueForTimestamp:(double)arg1;

@end
