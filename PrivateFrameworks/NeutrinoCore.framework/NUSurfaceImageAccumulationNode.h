
@interface NUSurfaceImageAccumulationNode : NUImageAccumulationNode

@property (nonatomic, readonly) <NUMutablePurgeableSurfaceImage> *surfaceImage;

- (id)_newImage;
- (id)surfaceImage;

@end
