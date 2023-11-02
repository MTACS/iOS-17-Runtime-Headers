
@interface NPKProtoLongTermPrivacyKeyResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _keyData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasKeyData;
@property (nonatomic, retain) NSData *keyData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasKeyData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyData;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setKeyData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
