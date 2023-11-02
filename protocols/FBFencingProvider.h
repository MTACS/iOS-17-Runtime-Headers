
@protocol FBFencingProvider <NSObject>

@required

- (void)synchronizeDrawingWithFence:(BKSAnimationFenceHandle *)arg1;

@end
