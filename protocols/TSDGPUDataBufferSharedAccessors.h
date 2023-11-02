
@protocol TSDGPUDataBufferSharedAccessors <NSObject>

@required

- (unsigned int)drawMode;
- (bool)isDynamicallyBuffered;
- (void)setDrawMode:(unsigned int)arg1;
- (NSArray *)vertexAttributes;
- (unsigned long long)vertexCount;

@end
