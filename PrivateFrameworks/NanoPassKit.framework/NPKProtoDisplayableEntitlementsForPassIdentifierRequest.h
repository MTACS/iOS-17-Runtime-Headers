
@interface NPKProtoDisplayableEntitlementsForPassIdentifierRequest : PBRequest <NSCopying> {
    NSString * _passIdentifier;
}

@property (nonatomic, retain) NSString *passIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setPassIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
