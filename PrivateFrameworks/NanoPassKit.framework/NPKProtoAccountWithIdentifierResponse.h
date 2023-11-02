
@interface NPKProtoAccountWithIdentifierResponse : PBCodable <NSCopying> {
    NSData * _accountData;
    NSData * _errorData;
}

@property (nonatomic, retain) NSData *accountData;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasAccountData;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (id)accountData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasAccountData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountData:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
