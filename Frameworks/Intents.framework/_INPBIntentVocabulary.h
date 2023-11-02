
@interface _INPBIntentVocabulary : PBCodable <NSCopying, NSSecureCoding, _INPBIntentVocabulary> {
    struct { }  _has;
    NSArray * _intentSlotVocabularyPolicies;
    NSArray * _intentTypePhrases;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentSlotVocabularyPolicies;
@property (nonatomic, readonly) unsigned long long intentSlotVocabularyPoliciesCount;
@property (nonatomic, copy) NSArray *intentTypePhrases;
@property (nonatomic, readonly) unsigned long long intentTypePhrasesCount;
@property (readonly) Class superclass;

+ (Class)intentSlotVocabularyPoliciesType;
+ (Class)intentTypePhrasesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;
- (void)addIntentTypePhrases:(id)arg1;
- (void)clearIntentSlotVocabularyPolicies;
- (void)clearIntentTypePhrases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentSlotVocabularyPolicies;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyPoliciesCount;
- (id)intentTypePhrases;
- (id)intentTypePhrasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentTypePhrasesCount;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentSlotVocabularyPolicies:(id)arg1;
- (void)setIntentTypePhrases:(id)arg1;
- (void)writeTo:(id)arg1;

@end
