
@interface FCCKPRecordField : PBCodable <NSCopying> {
    FCCKPRecordFieldIdentifier * _identifier;
    FCCKPRecordFieldValue * _value;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) FCCKPRecordFieldIdentifier *identifier;
@property (nonatomic, retain) FCCKPRecordFieldValue *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
