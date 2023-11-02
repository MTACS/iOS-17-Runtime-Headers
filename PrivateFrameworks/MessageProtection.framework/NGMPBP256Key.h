
@interface NGMPBP256Key : PBCodable <NSCopying> {
    NSData * _keyData;
    NSString * _keychainTag;
    int  _keystore;
}

@property (nonatomic, readonly) bool hasKeyData;
@property (nonatomic, readonly) bool hasKeychainTag;
@property (nonatomic, retain) NSData *keyData;
@property (nonatomic, retain) NSString *keychainTag;
@property (nonatomic) int keystore;

- (void).cxx_destruct;
- (int)StringAsKeystore:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKeyData;
- (bool)hasKeychainTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyData;
- (id)keychainTag;
- (int)keystore;
- (id)keystoreAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKeyData:(id)arg1;
- (void)setKeychainTag:(id)arg1;
- (void)setKeystore:(int)arg1;
- (void)writeTo:(id)arg1;

@end
