
@interface ModelKeyServerAPIFetchKeyRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int rawRequest : 1; 
    }  _has;
    NSString * _keyId;
    bool  _rawRequest;
    NSData * _signedKeyRequest;
    NSString * _teamId;
}

@property (nonatomic, readonly) bool hasKeyId;
@property (nonatomic) bool hasRawRequest;
@property (nonatomic, readonly) bool hasSignedKeyRequest;
@property (nonatomic, readonly) bool hasTeamId;
@property (nonatomic, retain) NSString *keyId;
@property (nonatomic) bool rawRequest;
@property (nonatomic, retain) NSData *signedKeyRequest;
@property (nonatomic, retain) NSString *teamId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKeyId;
- (bool)hasRawRequest;
- (bool)hasSignedKeyRequest;
- (bool)hasTeamId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyId;
- (void)mergeFrom:(id)arg1;
- (bool)rawRequest;
- (bool)readFrom:(id)arg1;
- (void)setHasRawRequest:(bool)arg1;
- (void)setKeyId:(id)arg1;
- (void)setRawRequest:(bool)arg1;
- (void)setSignedKeyRequest:(id)arg1;
- (void)setTeamId:(id)arg1;
- (id)signedKeyRequest;
- (id)teamId;
- (void)writeTo:(id)arg1;

@end
