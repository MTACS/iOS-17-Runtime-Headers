
@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray * _dataProviders;
}

- (void).cxx_destruct;
- (void)_generateMaps;
- (id)configuration;
- (id)documentFrequencyMap;
- (id)initWithDataProviders:(id)arg1;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)inverseLabelMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)vocabularyMap;

@end
