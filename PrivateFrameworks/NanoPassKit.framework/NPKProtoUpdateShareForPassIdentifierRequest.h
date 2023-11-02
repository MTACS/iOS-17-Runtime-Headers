
@interface NPKProtoUpdateShareForPassIdentifierRequest : PBRequest <NSCopying> {
    NSData * _authorization;
    NSString * _passIdentifier;
    NSData * _shareData;
}

@property (nonatomic, retain) NSData *authorization;
@property (nonatomic, readonly) bool hasAuthorization;
@property (nonatomic, retain) NSString *passIdentifier;
@property (nonatomic, retain) NSData *shareData;

- (void).cxx_destruct;
- (id)authorization;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorization;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (void)setPassIdentifier:(id)arg1;
- (void)setShareData:(id)arg1;
- (id)shareData;
- (void)writeTo:(id)arg1;

@end
