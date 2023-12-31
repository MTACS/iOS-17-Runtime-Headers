
@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {
    NSData * _authPutResponse;
    NSMutableArray * _contentResponseHeaders;
    NSMutableArray * _uploadTokens;
}

@property (nonatomic, retain) NSData *authPutResponse;
@property (nonatomic, retain) NSMutableArray *contentResponseHeaders;
@property (nonatomic, readonly) bool hasAuthPutResponse;
@property (nonatomic, retain) NSMutableArray *uploadTokens;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (void).cxx_destruct;
- (void)addContentResponseHeaders:(id)arg1;
- (void)addUploadTokens:(id)arg1;
- (id)authPutResponse;
- (void)clearContentResponseHeaders;
- (void)clearUploadTokens;
- (id)contentResponseHeaders;
- (id)contentResponseHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentResponseHeadersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthPutResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthPutResponse:(id)arg1;
- (void)setContentResponseHeaders:(id)arg1;
- (void)setUploadTokens:(id)arg1;
- (id)uploadTokens;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadTokensCount;
- (void)writeTo:(id)arg1;

@end
