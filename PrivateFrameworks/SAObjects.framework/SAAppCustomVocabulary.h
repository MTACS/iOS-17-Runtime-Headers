
@interface SAAppCustomVocabulary : SADomainObject

@property (nonatomic, copy) NSString *intentSlotValue;
@property (nonatomic, retain) <SAIntentGroupCustomVocabularyEntity> *vocabularyEntity;
@property (nonatomic, copy) NSString *vocabularyIdentifier;

+ (id)appCustomVocabulary;
+ (id)appCustomVocabularyWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentSlotValue;
- (void)setIntentSlotValue:(id)arg1;
- (void)setVocabularyEntity:(id)arg1;
- (void)setVocabularyIdentifier:(id)arg1;
- (id)vocabularyEntity;
- (id)vocabularyIdentifier;

@end
