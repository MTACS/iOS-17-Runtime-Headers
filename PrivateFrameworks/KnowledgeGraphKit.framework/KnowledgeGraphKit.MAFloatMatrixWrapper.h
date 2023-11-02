
@interface KnowledgeGraphKit.MAFloatMatrixWrapper : NSObject <NSCopying, NSMutableCopying> {
    void _floatMatrix;
}

@property (nonatomic, readonly) long long columns;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long rows;

+ (id)onesWithRows:(long long)arg1 columns:(long long)arg2;
+ (id)repeatingWithElement:(float)arg1 rows:(long long)arg2 columns:(long long)arg3;
+ (id)wrapperWithData:(id)arg1 rows:(long long)arg2 columns:(long long)arg3;
+ (id)zerosWithRows:(long long)arg1 columns:(long long)arg2;

- (void).cxx_destruct;
- (id)array;
- (long long)columns;
- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (id)data;
- (id)description;
- (float)floatAtRow:(long long)arg1 column:(long long)arg2;
- (long long)hash;
- (id)init;
- (id)initWithFloats:(const float*)arg1 rows:(long long)arg2 columns:(long long)arg3;
- (id)initWithRows:(id)arg1;
- (bool)isApproximatelyEqualTo:(id)arg1;
- (bool)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2;
- (bool)isEqual:(id)arg1;
- (id)matrixByAddingScalar:(float)arg1;
- (id)matrixByAppendingColumnVector:(id)arg1;
- (id)matrixByAppendingColumnsOfMatrix:(id)arg1;
- (id)matrixBySubtractingMatrix:(id)arg1;
- (id)matrixBySubtractingScalar:(float)arg1;
- (float)mean;
- (id)meanAlongAxis:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(void*)arg1;
- (id)row:(long long)arg1;
- (long long)rows;
- (float)sum;
- (id)sumAlongAxis:(unsigned long long)arg1;
- (float)sumOfSquares;

@end
