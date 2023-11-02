
@interface NPKProtoPassSharesForCredentialIdentifierRequest : PBRequest <NSCopying> {
    NSString * _credentialIdentifier;
}

@property (nonatomic, retain) NSString *credentialIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
