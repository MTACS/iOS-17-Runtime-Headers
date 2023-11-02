
@protocol _INPBIntentVocabulary <NSObject>

@required

+ (Class)intentSlotVocabularyPoliciesType;
+ (Class)intentTypePhrasesType;

- (void)addIntentSlotVocabularyPolicies:(_INPBIntentSlotVocabularyPolicy *)arg1;
- (void)addIntentTypePhrases:(_INPBIntentTypePhrases *)arg1;
- (void)clearIntentSlotVocabularyPolicies;
- (void)clearIntentTypePhrases;
- (NSArray *)intentSlotVocabularyPolicies;
- (_INPBIntentSlotVocabularyPolicy *)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyPoliciesCount;
- (NSArray *)intentTypePhrases;
- (_INPBIntentTypePhrases *)intentTypePhrasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentTypePhrasesCount;
- (void)setIntentSlotVocabularyPolicies:(NSArray *)arg1;
- (void)setIntentTypePhrases:(NSArray *)arg1;

@end
