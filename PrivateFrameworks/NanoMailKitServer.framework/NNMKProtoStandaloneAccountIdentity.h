
@interface NNMKProtoStandaloneAccountIdentity : PBCodable <NSCopying> {
    NSString * _accountIdentifier;
    NSString * _displayName;
    struct { 
        unsigned int identityType : 1; 
    }  _has;
    unsigned int  _identityType;
    NSString * _refreshToken;
    NSString * _token;
    NSString * _username;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasAccountIdentifier;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasIdentityType;
@property (nonatomic, readonly) bool hasRefreshToken;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic) unsigned int identityType;
@property (nonatomic, retain) NSString *refreshToken;
@property (nonatomic, retain) NSString *token;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasAccountIdentifier;
- (bool)hasDisplayName;
- (bool)hasIdentityType;
- (bool)hasRefreshToken;
- (bool)hasToken;
- (bool)hasUsername;
- (unsigned long long)hash;
- (unsigned int)identityType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)refreshToken;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasIdentityType:(bool)arg1;
- (void)setIdentityType:(unsigned int)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)token;
- (id)username;
- (void)writeTo:(id)arg1;

@end
