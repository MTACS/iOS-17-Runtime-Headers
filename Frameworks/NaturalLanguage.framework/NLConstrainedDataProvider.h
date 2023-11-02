
@interface NLConstrainedDataProvider : NLDataProvider {
    NLDataProvider * _dataProvider;
    NSDictionary * _documentFrequencyMap;
    NSDictionary * _inverseLabelMap;
    NSDictionary * _labelMap;
    NSArray * _locators;
    unsigned long long  _numberOfLabels;
    unsigned long long  _numberOfVocabularyEntries;
    struct _NLConstraintParameters { 
        bool splitSentences; 
        unsigned long long minSplitTokens; 
        unsigned long long maxSplitTokens; 
        unsigned long long maxTokens; 
        unsigned long long maxLabels; 
        unsigned long long maxVocabularySize; 
    }  _parameters;
    NSDictionary * _vocabularyMap;
}

- (void).cxx_destruct;
- (void)_generateMaps;
- (id)configuration;
- (id)documentFrequencyMap;
- (id)initWithDataProvider:(id)arg1 parameters:(struct _NLConstraintParameters { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })arg2 modelTrainer:(id)arg3;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)inverseLabelMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)vocabularyMap;

@end
