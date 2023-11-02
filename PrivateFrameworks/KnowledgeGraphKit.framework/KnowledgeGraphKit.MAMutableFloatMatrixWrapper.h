
@interface KnowledgeGraphKit.MAMutableFloatMatrixWrapper : KnowledgeGraphKit.MAFloatMatrixWrapper

- (void)addScalar:(float)arg1;
- (void)appendRow:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)init;
- (id)initWithRows:(id)arg1;
- (void)setFloat:(float)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)subtract:(id)arg1;
- (void)subtractScalar:(float)arg1;

@end
