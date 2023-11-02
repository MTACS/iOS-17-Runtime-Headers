
@interface NPKProtoStandalonePaymentSetupField : PBCodable <NSCopying> {
    NSString * _currentValue;
    int  _fieldType;
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *currentValue;
@property (nonatomic) int fieldType;
@property (nonatomic, readonly) bool hasCurrentValue;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (int)StringAsFieldType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentValue;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fieldType;
- (id)fieldTypeAsString:(int)arg1;
- (bool)hasCurrentValue;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setFieldType:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
