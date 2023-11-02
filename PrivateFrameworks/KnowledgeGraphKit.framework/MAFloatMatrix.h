
@interface MAFloatMatrix : NSObject {
    _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper * _wrapper;
}

@property (nonatomic, readonly) long long columns;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long rows;
@property (nonatomic, readonly) _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper *wrapper;

+ (id)onesWithRows:(long long)arg1 columns:(long long)arg2;
+ (Class)wrapperClass;
+ (id)zerosWithRows:(long long)arg1 columns:(long long)arg2;

- (void).cxx_destruct;
- (id)array;
- (long long)columns;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)data;
- (id)description;
- (float)floatAtRow:(long long)arg1 column:(long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithData:(id)arg1 rows:(long long)arg2 columns:(long long)arg3;
- (id)initWithFloats:(const float*)arg1 rows:(long long)arg2 columns:(long long)arg3;
- (id)initWithWrapper:(id)arg1;
- (bool)isApproximatelyEqualTo:(id)arg1;
- (bool)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2;
- (bool)isEqual:(id)arg1;
- (id)matrixByAddingScalar:(float)arg1;
- (id)matrixByAppendingColumn:(id)arg1;
- (id)matrixByAppendingColumnsOfMatrix:(id)arg1;
- (id)matrixByAppendingRow:(id)arg1;
- (id)matrixBySubtractingMatrix:(id)arg1;
- (id)matrixBySubtractingScalar:(float)arg1;
- (float)mean;
- (id)meanAlongAxis:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)row:(long long)arg1;
- (long long)rows;
- (float)sum;
- (id)sumAlongAxis:(unsigned long long)arg1;
- (float)sumOfSquares;
- (id)wrapper;

@end
