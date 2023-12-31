
@interface NPKProtoFeatureApplicationsForAccountIdentifierRequest : PBRequest <NSCopying> {
    NSString * _accountIdentifier;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, readonly) bool hasAccountIdentifier;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
