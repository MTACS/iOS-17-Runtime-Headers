
@interface NLSplitDataProvider : NLDataProvider {
    NLDataProvider * _dataProvider;
    NSArray * _indexes;
}

- (void).cxx_destruct;
- (void)_generateMaps;
- (id)configuration;
- (id)documentFrequencyMap;
- (id)initWithDataProvider:(id)arg1 indexes:(id)arg2;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)inverseLabelMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)vocabularyMap;

@end
