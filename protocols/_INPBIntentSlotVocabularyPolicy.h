
@protocol _INPBIntentSlotVocabularyPolicy <NSObject>

@required

+ (Class)intentSlotVocabularyConceptsType;

- (void)addIntentSlotNames:(NSString *)arg1;
- (void)addIntentSlotVocabularyConcepts:(_INPBIntentSlotVocabularyConcept *)arg1;
- (void)clearIntentSlotNames;
- (void)clearIntentSlotVocabularyConcepts;
- (NSArray *)intentSlotNames;
- (NSString *)intentSlotNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotNamesCount;
- (NSArray *)intentSlotVocabularyConcepts;
- (_INPBIntentSlotVocabularyConcept *)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyConceptsCount;
- (void)setIntentSlotNames:(NSArray *)arg1;
- (void)setIntentSlotVocabularyConcepts:(NSArray *)arg1;

@end
