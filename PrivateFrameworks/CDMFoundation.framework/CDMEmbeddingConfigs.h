
@interface CDMEmbeddingConfigs : NSObject <NSSecureCoding> {
    NSDictionary * _assetPaths;
    NSString * _clientEmbeddingVersion;
    NSDictionary * _embeddingConfigItems;
    NSDictionary * _embeddingReturnForVersion;
    NSDictionary * _serviceDependentEmbeddingModelVersions;
    bool  _setupCalled;
    NSString * _stableEmbeddingModelVersion;
}

+ (id)generateEmbeddingModelIdList:(id)arg1;
+ (int)getMaxEmbeddingConcurrency;
+ (int)getMaxEmbeddingConcurrencyConst;
+ (bool)isInternalBuild;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)generateEmbeddingConfigItemsWithError:(id*)arg1;
- (id)generateServiceDependentEmbeddingModelVersionsWithError:(id*)arg1;
- (id)getAllEmbeddingConfigs;
- (id)getAssetPaths;
- (id)getDependentEmbeddingConfigs;
- (id)getEmbeddingConfigForEmbeddingModelVersion:(id)arg1;
- (id)getEmbeddingConfigForFactor:(id)arg1;
- (id)getEmbeddingVersionDictionary;
- (id)getStableEmbeddingConfig;
- (id)initWithAssetPaths:(id)arg1;
- (id)initWithAssetPaths:(id)arg1 embeddingVersion:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setupWithError:(id*)arg1;
- (void)validateClientEmbeddingVersion:(id)arg1 embeddingAssetVersion:(id)arg2 embeddingModelIdList:(id)arg3 multipleModels:(bool)arg4 withError:(id*)arg5;

@end
