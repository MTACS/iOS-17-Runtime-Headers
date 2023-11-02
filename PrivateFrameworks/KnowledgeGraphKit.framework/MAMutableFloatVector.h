
@interface MAMutableFloatVector : MAFloatVector

@property (nonatomic, readonly) _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper *wrapper;

+ (Class)wrapperClass;

- (void)addScalar:(float)arg1;
- (void)addVector:(id)arg1;
- (void)appendArray:(id)arg1;
- (void)appendDoubles:(const double*)arg1 count:(long long)arg2;
- (void)appendFloat:(float)arg1;
- (void)appendFloats:(const float*)arg1 count:(long long)arg2;
- (void)appendVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)divideByScalar:(float)arg1;
- (void)elementwiseMultiplyByVector:(id)arg1;
- (void)elementwiseRaiseToExponent:(float)arg1;
- (void)multiplyByScalar:(float)arg1;
- (void)setFloat:(float)arg1 atIndex:(long long)arg2;
- (void)subtractScalar:(float)arg1;
- (void)subtractVector:(id)arg1;

@end
