
@interface MLCEmbeddingDescriptor : NSObject <NSCopying> {
    NSNumber * _embeddingCount;
    NSNumber * _embeddingDimension;
    NSNumber * _maximumNorm;
    NSNumber * _pNorm;
    NSNumber * _paddingIndex;
    bool  _scalesGradientByFrequency;
}

@property (nonatomic, readonly) NSNumber *embeddingCount;
@property (nonatomic, readonly) NSNumber *embeddingDimension;
@property (nonatomic, readonly) NSNumber *maximumNorm;
@property (nonatomic, readonly) NSNumber *pNorm;
@property (nonatomic, readonly) NSNumber *paddingIndex;
@property (nonatomic, readonly) bool scalesGradientByFrequency;

+ (id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2;
+ (id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(bool)arg6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)embeddingCount;
- (id)embeddingDimension;
- (unsigned long long)hash;
- (id)initWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)maximumNorm;
- (id)pNorm;
- (id)paddingIndex;
- (bool)scalesGradientByFrequency;

@end
