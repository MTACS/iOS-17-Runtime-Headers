
@interface PMLSparseVector : NSObject {
    unsigned long long  _length;
    unsigned long long  _numberOfNonZeroValues;
    long long * _sparseIndices;
    float * _sparseValues;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic) unsigned long long numberOfNonZeroValues;
@property (nonatomic) long long*sparseIndices;
@property (nonatomic) float*sparseValues;

+ (id)sparseVectorEmptyWithLength:(unsigned long long)arg1;
+ (id)sparseVectorFromDense:(id)arg1;
+ (id)sparseVectorFromDense:(const float*)arg1 length:(unsigned long long)arg2;
+ (id)sparseVectorFromNumbers:(id)arg1;
+ (id)sparseVectorFromNumbers:(id)arg1 indices:(id)arg2 length:(unsigned long long)arg3;
+ (id)sparseVectorWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 block:(id /* block */)arg3;
+ (void)sparseVectorWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 isSparseIndexInt64:(bool)arg3 sparseIndices:(const void*)arg4 sparseValues:(const float*)arg5 toDenseValues:(float*)arg6 withLength:(unsigned long long)arg7;

- (void)addStartId:(long long)arg1 endId:(long long)arg2 paddingId:(long long)arg3 withMaxVectorLength:(unsigned long long)arg4;
- (void)applyOneHotNormalization;
- (void)convertToBagOfIds;
- (void)dealloc;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)arg1;
- (id)indicesAsUInt16Data;
- (id)indicesData;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indices:(long long*)arg3 values:(float*)arg4;
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indicesData:(id)arg3 valuesData:(id)arg4;
- (float)l1norm;
- (float)l2norm;
- (unsigned long long)length;
- (float)maxAbsValue;
- (float)maxValue;
- (float)minValue;
- (unsigned long long)numberOfNonZeroValues;
- (void)processNonZeroValuesInPlaceWithBlock:(id /* block */)arg1;
- (id)quantizedValuesAsUInt8DataWithMin:(float)arg1 max:(float)arg2;
- (void)scaleInPlaceWithInversedFactor:(float)arg1;
- (void)scaleWithVectorNormalization:(long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setNumberOfNonZeroValues:(unsigned long long)arg1;
- (void)setSparseIndices:(long long*)arg1;
- (void)setSparseValues:(float*)arg1;
- (long long*)sparseIndices;
- (float*)sparseValues;
- (void)sparseVectorToDense:(float*)arg1 length:(unsigned long long)arg2;
- (float)valueAtIndex:(unsigned long long)arg1;
- (id)valuesData;
- (id)vectorWithConstantColumn;

@end
