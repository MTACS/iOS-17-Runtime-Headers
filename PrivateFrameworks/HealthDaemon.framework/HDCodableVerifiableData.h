
@interface HDCodableVerifiableData : PBCodable <NSCopying> {
    NSData * _dataValue;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _issuerIdentifier;
    long long  _type;
}

@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasIssuerIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *issuerIdentifier;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasIssuerIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issuerIdentifier;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
