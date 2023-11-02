
@interface HDCodableSharingAuthorization : PBCodable <NSCopying> {
    NSString * _authorizationIdentifier;
    NSString * _displayName;
    NSString * _displaySubtitle;
}

@property (nonatomic, retain) NSString *authorizationIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *displaySubtitle;
@property (nonatomic, readonly) bool hasAuthorizationIdentifier;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasDisplaySubtitle;

- (void).cxx_destruct;
- (id)authorizationIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)displaySubtitle;
- (bool)hasAuthorizationIdentifier;
- (bool)hasDisplayName;
- (bool)hasDisplaySubtitle;
- (unsigned long long)hash;
- (id)initWithSharingAuthorization:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaySubtitle:(id)arg1;
- (id)sharingAuthorization;
- (void)writeTo:(id)arg1;

@end
