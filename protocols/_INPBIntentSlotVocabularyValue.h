
@protocol _INPBIntentSlotVocabularyValue <NSObject>

@required

- (void)addExamples:(NSString *)arg1;
- (void)clearExamples;
- (NSArray *)examples;
- (NSString *)examplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)examplesCount;
- (bool)hasPhrase;
- (bool)hasPronunciation;
- (NSString *)phrase;
- (NSString *)pronunciation;
- (void)setExamples:(NSArray *)arg1;
- (void)setPhrase:(NSString *)arg1;
- (void)setPronunciation:(NSString *)arg1;

@end
