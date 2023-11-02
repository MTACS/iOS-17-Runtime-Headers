
@protocol PMLNoiseStrategy <NSObject, PMLPlistAndChunksSerializableProtocol>

@required

- (void)addNoiseToSparseMatrix:(PMLSparseMatrix *)arg1;
- (void)addNoiseToSparseVector:(PMLSparseVector *)arg1;
- (bool)scaleAndAddNoiseToDenseVector:(PMLMutableDenseVector *)arg1 usingNorm:(bool)arg2 scaleFactor:(float*)arg3;

@end
