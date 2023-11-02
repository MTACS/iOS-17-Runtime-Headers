
@interface NTPBBlindedToken : PBCodable <NSCopying> {
    unsigned int  _keyId;
    NSData * _token;
}

@property (nonatomic) unsigned int keyId;
@property (nonatomic, retain) NSData *token;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)keyId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKeyId:(unsigned int)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end
