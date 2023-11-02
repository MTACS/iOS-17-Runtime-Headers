
@interface _INPBSelectionItem : PBCodable <NSCopying, NSSecureCoding, _INPBSelectionItem> {
    struct { }  _has;
    NSString * _uuid;
    _INPBIntentSlotValue * _value;
    NSString * _vocabularyValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasVocabularyValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, retain) _INPBIntentSlotValue *value;
@property (nonatomic, copy) NSString *vocabularyValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUuid;
- (bool)hasValue;
- (bool)hasVocabularyValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setVocabularyValue:(id)arg1;
- (id)uuid;
- (id)value;
- (id)vocabularyValue;
- (void)writeTo:(id)arg1;

@end
