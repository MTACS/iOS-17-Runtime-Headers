
@interface SGQuickResponsesModel : NSObject {
    <PMLMultiLabelClassifierProtocol> * _model;
    SGQuickResponsesTransformerInstance * _transformer;
}

+ (void)_addModelAssetUpdateHandler;
+ (id)_sharedInvalidKeysCache;
+ (id)_sharedTransformerCache;
+ (id)_transformerCacheKeyForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;
+ (id)configForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 vocabPath:(id)arg4;
+ (id)featuresOf:(id)arg1 inLanguage:(id)arg2 andMode:(unsigned long long)arg3;
+ (id)featuresOf:(id)arg1 withFeaturizer:(id)arg2 source:(id)arg3;
+ (id)labelOf:(id)arg1 inLanguage:(id)arg2;
+ (id)labelOf:(id)arg1 withLabeler:(id)arg2;
+ (id)modelForLanguage:(id)arg1 mode:(unsigned long long)arg2 chunkPath:(id)arg3 plistPath:(id)arg4 vocabPath:(id)arg5;
+ (id)modelForLanguage:(id)arg1 mode:(unsigned long long)arg2 chunkPath:(id)arg3 plistPath:(id)arg4 vocabPath:(id)arg5 modelTypeAndSubModelKey:(id)arg6;
+ (id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 vocabPath:(id)arg4;
+ (void)setGlobalTransformerForTesting:(id)arg1;
+ (bool)shouldSampleForLabel:(id)arg1 inLanguage:(id)arg2 isDynamicLabel:(bool)arg3;
+ (id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2;
+ (id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 vocabPath:(id)arg4;

- (void).cxx_destruct;
- (id)config;
- (id)featuresOf:(id)arg1;
- (id)initWithEntity:(id)arg1 type:(id)arg2 mode:(unsigned long long)arg3 language:(id)arg4 class:(Class)arg5 modelPath:(id)arg6 plistPath:(id)arg7 vocabPath:(id)arg8;
- (id)labelOf:(id)arg1;
- (id)predict:(id)arg1;
- (void)setTransformer:(id)arg1;
- (bool)shouldSampleForLabel:(id)arg1 isDynamicLabel:(bool)arg2;

@end
