
@interface NSPPrivacyProxyAuthenticationInfo : PBCodable <NSCopying> {
    NSMutableArray * _accessTokenBlockedIssuers;
    NSMutableArray * _accessTokenKnownOrigins;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _accessTokenTypes;
    NSString * _accessTokenURL;
    int  _authType;
    NSString * _authURL;
    struct { 
        unsigned int authType : 1; 
    }  _has;
}

@property (nonatomic, retain) NSMutableArray *accessTokenBlockedIssuers;
@property (nonatomic, retain) NSMutableArray *accessTokenKnownOrigins;
@property (nonatomic, readonly) unsigned int*accessTokenTypes;
@property (nonatomic, readonly) unsigned long long accessTokenTypesCount;
@property (nonatomic, retain) NSString *accessTokenURL;
@property (nonatomic) int authType;
@property (nonatomic, retain) NSString *authURL;
@property (nonatomic, readonly) bool hasAccessTokenURL;
@property (nonatomic) bool hasAuthType;

+ (Class)accessTokenBlockedIssuersType;
+ (Class)accessTokenKnownOriginsType;

- (void).cxx_destruct;
- (int)StringAsAuthType:(id)arg1;
- (id)accessTokenBlockedIssuers;
- (id)accessTokenBlockedIssuersAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessTokenBlockedIssuersCount;
- (id)accessTokenKnownOrigins;
- (id)accessTokenKnownOriginsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessTokenKnownOriginsCount;
- (unsigned int*)accessTokenTypes;
- (unsigned int)accessTokenTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessTokenTypesCount;
- (id)accessTokenURL;
- (void)addAccessTokenBlockedIssuers:(id)arg1;
- (void)addAccessTokenKnownOrigins:(id)arg1;
- (void)addAccessTokenTypes:(unsigned int)arg1;
- (int)authType;
- (id)authTypeAsString:(int)arg1;
- (id)authURL;
- (void)clearAccessTokenBlockedIssuers;
- (void)clearAccessTokenKnownOrigins;
- (void)clearAccessTokenTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessTokenURL;
- (bool)hasAuthType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessTokenBlockedIssuers:(id)arg1;
- (void)setAccessTokenKnownOrigins:(id)arg1;
- (void)setAccessTokenTypes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setAccessTokenURL:(id)arg1;
- (void)setAuthType:(int)arg1;
- (void)setAuthURL:(id)arg1;
- (void)setHasAuthType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
