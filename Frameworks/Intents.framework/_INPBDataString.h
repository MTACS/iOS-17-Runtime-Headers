
@interface _INPBDataString : PBCodable <NSCopying, NSSecureCoding, _INPBDataString> {
    NSArray * _alternatives;
    struct { }  _has;
    NSString * _localizedValue;
    NSString * _pronunciationHint;
    NSString * _vocabularyIdentifier;
}

@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic, readonly) unsigned long long alternativesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLocalizedValue;
@property (nonatomic, readonly) bool hasPronunciationHint;
@property (nonatomic, readonly) bool hasVocabularyIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedValue;
@property (nonatomic, copy) NSString *pronunciationHint;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vocabularyIdentifier;

+ (Class)alternativesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAlternatives:(id)arg1;
- (id)alternatives;
- (id)alternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocalizedValue;
- (bool)hasPronunciationHint;
- (bool)hasVocabularyIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedValue;
- (id)pronunciationHint;
- (bool)readFrom:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setLocalizedValue:(id)arg1;
- (void)setPronunciationHint:(id)arg1;
- (void)setVocabularyIdentifier:(id)arg1;
- (id)vocabularyIdentifier;
- (void)writeTo:(id)arg1;

@end
