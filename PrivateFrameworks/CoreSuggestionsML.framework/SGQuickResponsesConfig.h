
@interface SGQuickResponsesConfig : NSObject {
    SGQuickResponsesClassificationParameters * _classificationParams;
    SGCustomResponsesParameters * _customResponsesParameters;
    NSArray * _labels;
    NSString * _language;
    unsigned long long  _mode;
    NSDictionary * _modelHeads;
    SGModelHyperparameters * _modelHyperparameters;
    SGQuickResponsesPredictionParameters * _predictionParams;
    NSArray * _preprocessingMethods;
    SGQuickResponsesReplies * _replies;
    PMLSessionDescriptor * _sessionDescriptor;
    <PMLWordPieceVocabProtocol> * _vocab;
}

@property (nonatomic, readonly) SGQuickResponsesClassificationParameters *classificationParams;
@property (nonatomic, readonly) SGCustomResponsesParameters *customResponsesParameters;
@property (nonatomic, readonly) NSArray *labels;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) NSDictionary *modelHeads;
@property (nonatomic, readonly) SGModelHyperparameters *modelHyperparameters;
@property (nonatomic, readonly) SGQuickResponsesPredictionParameters *predictionParams;
@property (nonatomic, readonly) NSArray *preprocessingMethods;
@property (nonatomic, readonly) SGQuickResponsesReplies *replies;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) <PMLWordPieceVocabProtocol> *vocab;

+ (void)_addModelAssetUpdateHandler;
+ (id)_cacheKeyForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 vocabPath:(id)arg4;
+ (id)_dictionaryForPlistPath:(id)arg1 mode:(unsigned long long)arg2;
+ (id)_sharedCache;
+ (id)_vocabForVocabPath:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configWithLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 vocabPath:(id)arg4;
+ (id)modelTypeAndSubModelKeyForLanguage:(id)arg1 plistPath:(id)arg2 vocabPath:(id)arg3 warmupBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)classificationParams;
- (id)customResponsesParameters;
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 dictionary:(id)arg3 lazyVocab:(id)arg4;
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 dictionary:(id)arg3 vocab:(id)arg4;
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 vocabPath:(id)arg4;
- (bool)isValidConfigForWordPieceWithLazyVocab:(id)arg1;
- (id)labels;
- (id)language;
- (unsigned long long)mode;
- (id)modelHeads;
- (id)modelHyperparameters;
- (id)predictionParams;
- (id)preprocessingMethods;
- (id)replies;
- (id)sessionDescriptor;
- (id)vocab;

@end
