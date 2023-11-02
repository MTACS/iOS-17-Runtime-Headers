
@interface MAMutableFloatMatrix : MAFloatMatrix

@property (nonatomic, readonly) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper *wrapper;

+ (Class)wrapperClass;

- (void)addScalar:(float)arg1;
- (void)appendRow:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFloat:(float)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)subtractMatrix:(id)arg1;
- (void)subtractScalar:(float)arg1;

@end
