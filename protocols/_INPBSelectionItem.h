
@protocol _INPBSelectionItem <NSObject>

@required

- (bool)hasUuid;
- (bool)hasValue;
- (bool)hasVocabularyValue;
- (void)setUuid:(NSString *)arg1;
- (void)setValue:(_INPBIntentSlotValue *)arg1;
- (void)setVocabularyValue:(NSString *)arg1;
- (NSString *)uuid;
- (_INPBIntentSlotValue *)value;
- (NSString *)vocabularyValue;

@end
