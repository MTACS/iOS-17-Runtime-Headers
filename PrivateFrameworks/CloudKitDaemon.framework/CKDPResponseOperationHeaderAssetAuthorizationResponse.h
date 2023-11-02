
@interface CKDPResponseOperationHeaderAssetAuthorizationResponse : PBCodable <NSCopying> {
    NSData * _authGetResponseBody;
    NSMutableArray * _responseHeaders;
    NSString * _responseUUID;
}

@property (nonatomic, retain) NSData *authGetResponseBody;
@property (nonatomic, readonly) bool hasAuthGetResponseBody;
@property (nonatomic, readonly) bool hasResponseUUID;
@property (nonatomic, retain) NSMutableArray *responseHeaders;
@property (nonatomic, retain) NSString *responseUUID;

+ (Class)responseHeadersType;

- (void).cxx_destruct;
- (void)addResponseHeaders:(id)arg1;
- (id)authGetResponseBody;
- (void)clearResponseHeaders;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthGetResponseBody;
- (bool)hasResponseUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseHeaders;
- (id)responseHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)responseHeadersCount;
- (id)responseUUID;
- (void)setAuthGetResponseBody:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setResponseUUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
