
@interface SGMultiHeadInference : NSObject {
    SGQuickResponsesConfig * _config;
    NSMutableDictionary * _headDimensionality;
    SGMultiHeadEspressoModel * _model;
    SGQuickResponsesTransformerInstance * _transformer;
}

+ (id)predictForMessage:(id)arg1 conversationTurns:(id)arg2 localeIdentifier:(id)arg3 plistPath:(id)arg4 espressoBinPath:(id)arg5 vocabPath:(id)arg6 heads:(id)arg7;
+ (id)quickResponsesForMessage:(id)arg1 conversationTurns:(id)arg2 maxResponses:(unsigned long long)arg3 localeIdentifier:(id)arg4 plistPath:(id)arg5 espressoModelPath:(id)arg6 vocabPath:(id)arg7;

- (void).cxx_destruct;
- (id)_getMergedPromptForMessage:(id)arg1 conversationTurns:(id)arg2;
- (id)initWithLanguage:(id)arg1 inputName:(id)arg2 plistPath:(id)arg3 espressoBinPath:(id)arg4 vocabPath:(id)arg5;
- (id)initWithLanguage:(id)arg1 inputName:(id)arg2 plistPath:(id)arg3 espressoModelPath:(id)arg4 vocabPath:(id)arg5;
- (id)predictForMessage:(id)arg1 conversationTurns:(id)arg2 language:(id)arg3 heads:(id)arg4;
- (id)predictForMessage:(id)arg1 heads:(id)arg2;
- (id)predictForVector:(id)arg1 heads:(id)arg2;
- (id)quickResponsesForMessage:(id)arg1 conversationTurns:(id)arg2 maxResponses:(unsigned long long)arg3 language:(id)arg4;

@end
