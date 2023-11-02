
@interface AuthCredential : PBCodable <NSCopying> {
    int  _authCredentialOneof;
    struct { 
        unsigned int authCredentialOneof : 1; 
    }  _has;
    SharedOwnershipAuth * _sharedOwnershipAuth;
    NSString * _simpleJwt;
}

@property (nonatomic) int authCredentialOneof;
@property (nonatomic) bool hasAuthCredentialOneof;
@property (nonatomic, readonly) bool hasSharedOwnershipAuth;
@property (nonatomic, readonly) bool hasSimpleJwt;
@property (nonatomic, retain) SharedOwnershipAuth *sharedOwnershipAuth;
@property (nonatomic, retain) NSString *simpleJwt;

- (void).cxx_destruct;
- (int)StringAsAuthCredentialOneof:(id)arg1;
- (int)authCredentialOneof;
- (id)authCredentialOneofAsString:(int)arg1;
- (void)clearOneofValuesForAuthCredentialOneof;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthCredentialOneof;
- (bool)hasSharedOwnershipAuth;
- (bool)hasSimpleJwt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthCredentialOneof:(int)arg1;
- (void)setHasAuthCredentialOneof:(bool)arg1;
- (void)setSharedOwnershipAuth:(id)arg1;
- (void)setSimpleJwt:(id)arg1;
- (id)sharedOwnershipAuth;
- (id)simpleJwt;
- (void)writeTo:(id)arg1;

@end
