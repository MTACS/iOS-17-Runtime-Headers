
@interface KnowledgeGraphKit.MAFloatVectorWrapper : NSObject <NSCopying, NSMutableCopying> {
    void _floatVector;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)onesOfCount:(long long)arg1;
+ (id)repeatingFloat:(float)arg1 count:(long long)arg2;
+ (id)zerosOfCount:(long long)arg1;

- (void).cxx_destruct;
- (id)array;
- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (id)data;
- (id)debugDescription;
- (id)description;
- (float)dotProductWithWrapper:(id)arg1;
- (float)floatAtIndex:(long long)arg1;
- (long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithFloats:(const float*)arg1 count:(long long)arg2;
- (bool)isApproximatelyEqualTo:(id)arg1;
- (bool)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2;
- (bool)isEqual:(id)arg1;
- (float)mean;
- (id)mutableCopyWithZone:(void*)arg1;
- (id)naturalLogarithm;
- (id)naturalLogarithmIfPositive;
- (id)sliceFromStart:(long long)arg1 toEnd:(long long)arg2;
- (float)standardDeviation;
- (float)sum;
- (float)sumOfSquares;
- (id)vectorByAddingScalar:(float)arg1;
- (id)vectorByAddingVector:(id)arg1;
- (id)vectorByDividingByScalar:(float)arg1;
- (id)vectorByElementwiseMultiplyingByWrapper:(id)arg1;
- (id)vectorByElementwiseRaisingToExponent:(float)arg1;
- (id)vectorByMultiplyingByScalar:(float)arg1;
- (id)vectorBySubtractingScalar:(float)arg1;
- (id)vectorBySubtractingVector:(id)arg1;

@end
