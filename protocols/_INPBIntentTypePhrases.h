
@protocol _INPBIntentTypePhrases <NSObject>

@required

- (void)addIntentVocabularyExamples:(NSString *)arg1;
- (void)clearIntentVocabularyExamples;
- (bool)hasIntentType;
- (_INPBIntentType *)intentType;
- (NSArray *)intentVocabularyExamples;
- (NSString *)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentVocabularyExamplesCount;
- (void)setIntentType:(_INPBIntentType *)arg1;
- (void)setIntentVocabularyExamples:(NSArray *)arg1;

@end
