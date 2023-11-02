
@interface NUBufferImageAccumulationNode : NUImageAccumulationNode

@property (nonatomic, readonly) <NUMutablePurgeableBufferImage> *bufferImage;

- (id)_newImage;
- (id)bufferImage;

@end
