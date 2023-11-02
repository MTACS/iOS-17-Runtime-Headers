
@interface NPKProtoUpdateSubcredentialMetadataRequest : PBRequest <NSCopying> {
    NSData * _credentialData;
    NSData * _passData;
}

@property (nonatomic, retain) NSData *credentialData;
@property (nonatomic, readonly) bool hasCredentialData;
@property (nonatomic, readonly) bool hasPassData;
@property (nonatomic, retain) NSData *passData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCredentialData;
- (bool)hasPassData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passData;
- (bool)readFrom:(id)arg1;
- (void)setCredentialData:(id)arg1;
- (void)setPassData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
