
@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {
    NSString * _apiToken;
    bool  _forceFetchToken;
    struct { 
        unsigned int forceFetchToken : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *apiToken;
@property (nonatomic) bool forceFetchToken;
@property (nonatomic, readonly) bool hasApiToken;
@property (nonatomic) bool hasForceFetchToken;

+ (id)options;

- (void).cxx_destruct;
- (id)apiToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)forceFetchToken;
- (bool)hasApiToken;
- (bool)hasForceFetchToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setApiToken:(id)arg1;
- (void)setForceFetchToken:(bool)arg1;
- (void)setHasForceFetchToken:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
