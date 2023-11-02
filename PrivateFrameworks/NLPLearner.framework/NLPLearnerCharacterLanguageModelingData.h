
@interface NLPLearnerCharacterLanguageModelingData : NLPLearnerLanguageModelingData {
    CVNLPTokenIDConverter * _tokenConverter;
}

+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addResource:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2;

@end
