
@interface NPKProtoLongTermPrivacyKeyRequest : PBRequest <NSCopying> {
    NSString * _credentialGroupIdentifier;
    struct { 
        unsigned int reuseExisting : 1; 
    }  _has;
    bool  _reuseExisting;
}

@property (nonatomic, retain) NSString *credentialGroupIdentifier;
@property (nonatomic) bool hasReuseExisting;
@property (nonatomic) bool reuseExisting;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialGroupIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReuseExisting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)reuseExisting;
- (void)setCredentialGroupIdentifier:(id)arg1;
- (void)setHasReuseExisting:(bool)arg1;
- (void)setReuseExisting:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
