
@interface NPKProtoStandalonePaymentCredential : PBCodable <NSCopying> {
    NSString * _expiration;
    NSString * _longDescription;
    NSString * _sanitizedPrimaryAccountNumber;
}

@property (nonatomic, retain) NSString *expiration;
@property (nonatomic, readonly) bool hasExpiration;
@property (nonatomic, readonly) bool hasLongDescription;
@property (nonatomic, readonly) bool hasSanitizedPrimaryAccountNumber;
@property (nonatomic, retain) NSString *longDescription;
@property (nonatomic, retain) NSString *sanitizedPrimaryAccountNumber;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expiration;
- (bool)hasExpiration;
- (bool)hasLongDescription;
- (bool)hasSanitizedPrimaryAccountNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)longDescription;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sanitizedPrimaryAccountNumber;
- (void)setExpiration:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
