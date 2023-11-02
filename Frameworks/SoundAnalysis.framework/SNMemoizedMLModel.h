
@interface SNMemoizedMLModel : NSObject <MLCustomModel> {
    void cacheAccessRecency;
    void cacheStorage;
    void maxCacheSize;
    void wrappedModel;
}

+ (id)withWrappedModel:(id)arg1;
+ (id)withWrappedModel:(id)arg1 maxCacheSize:(long long)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)initWithWrappedModel:(id)arg1;
- (id)initWithWrappedModel:(id)arg1 maxCacheSize:(long long)arg2;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
