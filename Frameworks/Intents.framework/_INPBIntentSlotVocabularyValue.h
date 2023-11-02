
@interface _INPBIntentSlotVocabularyValue : PBCodable <NSCopying, NSSecureCoding, _INPBIntentSlotVocabularyValue> {
    NSArray * _examples;
    struct { }  _has;
    NSString * _phrase;
    NSString * _pronunciation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *examples;
@property (nonatomic, readonly) unsigned long long examplesCount;
@property (nonatomic, readonly) bool hasPhrase;
@property (nonatomic, readonly) bool hasPronunciation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *pronunciation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addExamples:(id)arg1;
- (void)clearExamples;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)examples;
- (id)examplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)examplesCount;
- (bool)hasPhrase;
- (bool)hasPronunciation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)phrase;
- (id)pronunciation;
- (bool)readFrom:(id)arg1;
- (void)setExamples:(id)arg1;
- (void)setPhrase:(id)arg1;
- (void)setPronunciation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
