
@interface NLDataProvider : NSObject {
    NLModelConfiguration * _configuration;
    NSDictionary * _documentFrequencyMap;
    bool  _generatedMaps;
    NSArray * _instances;
    NSDictionary * _inverseLabelMap;
    NSDictionary * _labelMap;
    unsigned long long  _numberOfLabels;
    unsigned long long  _numberOfTokens;
    unsigned long long  _numberOfVocabularyEntries;
    bool  _performedLanguageRecognition;
    NSString * _recognizedLanguage;
    struct __CFStringTokenizer { } * _tokenizer;
    NSDictionary * _vocabularyMap;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) unsigned long long numberOfInstances;
@property (readonly) NSString *recognizedLanguage;

- (void).cxx_destruct;
- (void)_generateMaps;
- (void)_generateMapsWithModelTrainer:(id)arg1;
- (void)_performLanguageRecognition;
- (id)configuration;
- (void)dealloc;
- (id)documentFrequencyMap;
- (void)generateMapsWithModelTrainer:(id)arg1;
- (id)initWithConfiguration:(id)arg1 dataURL:(id)arg2;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)inverseLabelMap;
- (id)labelMap;
- (unsigned long long)numberOfInstances;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfTokens;
- (unsigned long long)numberOfVocabularyEntries;
- (id)recognizedLanguage;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)vocabularyMap;

@end
