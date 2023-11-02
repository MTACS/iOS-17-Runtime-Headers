
@interface PMLDataChunkDenseFloatVector : PMLDataChunk

@property (nonatomic, readonly) int count;
@property (nonatomic, readonly) const float*vector;

+ (id)chunkWithVector:(const float*)arg1 count:(int)arg2;
+ (unsigned int)dataChunkType;

- (int)count;
- (id)toVec;
- (const float*)vector;

@end
