
@interface NPKProtoRegistrationDataRequest : PBRequest <NSCopying> {
    NSString * _authToken;
}

@property (nonatomic, retain) NSString *authToken;
@property (nonatomic, readonly) bool hasAuthToken;

- (void).cxx_destruct;
- (id)authToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
