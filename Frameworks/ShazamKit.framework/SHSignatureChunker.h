
@interface SHSignatureChunker : NSObject {
    NSMutableDictionary * _chunkPositionsInOriginalSignature;
    SHSignature * _originalSignature;
}

@property (nonatomic, readonly) NSMutableDictionary *chunkPositionsInOriginalSignature;
@property (nonatomic, readonly) SHSignature *originalSignature;

- (void).cxx_destruct;
- (id)chunkPositionsInOriginalSignature;
- (id)chunksWithMaximumDuration:(double)arg1 andOverlapDuration:(double)arg2;
- (bool)containsChunk:(id)arg1;
- (id)cropSignatureData:(id)arg1 atPosition:(double)arg2 withLength:(double)arg3 error:(id*)arg4;
- (id)initWithSignature:(id)arg1;
- (double)offsetInOriginalSignatureForChunk:(id)arg1;
- (id)originalSignature;
- (id)splitSignature:(id)arg1 fromStartPosition:(double)arg2 intoDurationsOfSize:(double)arg3 overlapDuration:(double)arg4;

@end
