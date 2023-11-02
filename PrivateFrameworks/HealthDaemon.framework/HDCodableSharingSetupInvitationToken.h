
@interface HDCodableSharingSetupInvitationToken : PBCodable <NSCopying> {
    NSString * _shareURL;
    NSData * _token;
}

@property (nonatomic, readonly) bool hasShareURL;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, retain) NSString *shareURL;
@property (nonatomic, retain) NSData *token;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShareURL;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setToken:(id)arg1;
- (id)shareURL;
- (id)token;
- (void)writeTo:(id)arg1;

@end
