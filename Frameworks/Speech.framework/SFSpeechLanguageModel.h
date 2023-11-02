
@interface SFSpeechLanguageModel : NSObject {
    NSLocale * _locale;
    SFLocalSpeechRecognitionClient * _lsrClient;
}

@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly, copy) NSArray *outOfVocabularyWords;
@property (nonatomic, readonly, copy) NSDictionary *outOfVocabularyWordsAndFrequencies;

+ (void)appLmNeedsRebuild:(id)arg1 language:(id)arg2 clientIdentifier:(id)arg3 modelOverride:(id)arg4 completion:(id /* block */)arg5;
+ (void)initialize;
+ (void)prepareCustomLanguageModelForUrl:(id)arg1 clientIdentifier:(id)arg2 configuration:(id)arg3 completion:(id /* block */)arg4;
+ (void)prepareCustomLanguageModelForUrl:(id)arg1 clientIdentifier:(id)arg2 configuration:(id)arg3 ignoresCache:(bool)arg4 completion:(id /* block */)arg5;
+ (id)supportedLocales;
+ (void)trainAppLmFromNgramCountsArtifact:(id)arg1 language:(id)arg2 clientIdentifier:(id)arg3 writeToDirectory:(id)arg4 modelOverride:(id)arg5 completion:(id /* block */)arg6;
+ (void)trainAppLmFromNgramsSerializedDataFile:(id)arg1 customPronsFile:(id)arg2 language:(id)arg3 writeToDirectory:(id)arg4 modelOverride:(id)arg5 completion:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)addOovsFromSentence:(id)arg1;
- (bool)addProns:(id)arg1 forWord:(id)arg2;
- (void)addPronsFromFile:(id)arg1;
- (void)addSentence:(id)arg1;
- (void)addSentences:(id)arg1;
- (id)createNgramCountsArtifactFromPhraseCountArtifact:(id)arg1 writeDirectory:(id)arg2;
- (id)createNgramCountsArtifactWithIdentifier:(id)arg1 rawPhraseCountsPath:(id)arg2 customPronunciationsPath:(id)arg3 writeDirectory:(id)arg4;
- (id)createPhraseCountsArtifactWithIdentifier:(id)arg1 rawPhraseCountsPath:(id)arg2 customPronunciationsPath:(id)arg3 writeDirectory:(id)arg4;
- (void)dealloc;
- (id)deserializeModelData:(id)arg1;
- (void)generateNgramsSerializeDataAndWriteToFile:(id)arg1;
- (id)init;
- (id)initWithAssetPath:(id)arg1;
- (id)initWithLocale:(id)arg1 clientID:(id)arg2;
- (long long)lmeThreshold;
- (id)locale;
- (id)metrics;
- (id)outOfVocabularyWords;
- (id)outOfVocabularyWordsAndFrequencies;
- (bool)trainFromPlainTextAndWriteToDirectory:(id)arg1;
- (void)trainFromPlainTextAndWriteToDirectory:(id)arg1 completion:(id /* block */)arg2;

@end
