
@interface _INPBIntentTypePhrases : PBCodable <NSCopying, NSSecureCoding, _INPBIntentTypePhrases> {
    struct { }  _has;
    _INPBIntentType * _intentType;
    NSArray * _intentVocabularyExamples;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentType *intentType;
@property (nonatomic, copy) NSArray *intentVocabularyExamples;
@property (nonatomic, readonly) unsigned long long intentVocabularyExamplesCount;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addIntentVocabularyExamples:(id)arg1;
- (void)clearIntentVocabularyExamples;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentType;
- (id)intentVocabularyExamples;
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentVocabularyExamplesCount;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setIntentVocabularyExamples:(id)arg1;
- (void)writeTo:(id)arg1;

@end
