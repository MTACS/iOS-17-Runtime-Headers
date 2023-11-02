
@interface MPSGraphPruningDescriptor : MPSGraphObject <NSCopying> {
    long long  _pruningMetric;
    long long  _pruningStructure;
    float  _sparsity;
}

@property (nonatomic) long long pruningMetric;
@property (nonatomic) long long pruningStructure;
@property (nonatomic) float sparsity;

+ (id)descriptorWithPruningMetric:(long long)arg1 sparsityFormat:(long long)arg2 sparsity:(float)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)pruningMetric;
- (long long)pruningStructure;
- (void)setPruningMetric:(long long)arg1;
- (void)setPruningStructure:(long long)arg1;
- (void)setSparsity:(float)arg1;
- (float)sparsity;

@end
