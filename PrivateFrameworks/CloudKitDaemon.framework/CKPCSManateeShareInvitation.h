
@interface CKPCSManateeShareInvitation : PBCodable <NSCopying> {
    NSData * _exportedPCSData;
    NSData * _shareePublicKeyData;
}

@property (nonatomic, retain) NSData *exportedPCSData;
@property (nonatomic, readonly) bool hasExportedPCSData;
@property (nonatomic, readonly) bool hasShareePublicKeyData;
@property (nonatomic, retain) NSData *shareePublicKeyData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportedPCSData;
- (bool)hasExportedPCSData;
- (bool)hasShareePublicKeyData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExportedPCSData:(id)arg1;
- (void)setShareePublicKeyData:(id)arg1;
- (id)shareePublicKeyData;
- (void)writeTo:(id)arg1;

@end
