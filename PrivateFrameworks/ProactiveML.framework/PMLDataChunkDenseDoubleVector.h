
@interface PMLDataChunkDenseDoubleVector : PMLDataChunk

@property (nonatomic, readonly) int count;
@property (nonatomic, readonly) const double*vector;

+ (id)chunkWithVector:(const double*)arg1 count:(int)arg2;
+ (unsigned int)dataChunkType;

- (int)count;
- (const double*)vector;

@end
