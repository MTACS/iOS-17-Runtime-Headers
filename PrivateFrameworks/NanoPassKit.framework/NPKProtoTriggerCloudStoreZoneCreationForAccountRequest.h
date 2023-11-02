
@interface NPKProtoTriggerCloudStoreZoneCreationForAccountRequest : PBRequest <NSCopying> {
    NSData * _accountData;
}

@property (nonatomic, retain) NSData *accountData;

- (void).cxx_destruct;
- (id)accountData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
