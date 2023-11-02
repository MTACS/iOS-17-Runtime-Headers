
@interface CDMEmbeddingConfigItem : NSObject <NSSecureCoding> {
    NSNumber * _embeddingModelDimension;
    NSDictionary * _embeddingModelMetadata;
    NSString * _embeddingModelPath;
    NSString * _embeddingModelVersion;
    bool  _isStableEmbeddingModel;
}

@property (nonatomic, readonly) NSNumber *embeddingModelDimension;
@property (nonatomic, readonly) NSDictionary *embeddingModelMetadata;
@property (nonatomic, readonly) NSString *embeddingModelPath;
@property (nonatomic, readonly) NSString *embeddingModelVersion;
@property (nonatomic, readonly) bool isStableEmbeddingModel;

+ (long long)getEmbeddingDimensionFromEmbeddingModelMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)embeddingModelDimension;
- (id)embeddingModelMetadata;
- (id)embeddingModelPath;
- (id)embeddingModelVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmbeddingModelPath:(id)arg1 isStableEmbeddingModel:(bool)arg2;
- (bool)isStableEmbeddingModel;

@end
