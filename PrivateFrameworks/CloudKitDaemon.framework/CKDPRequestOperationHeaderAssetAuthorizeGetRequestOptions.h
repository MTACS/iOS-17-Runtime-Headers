
@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {
    unsigned long long  _contentRequestAuthorizeGetOptions;
    NSMutableArray * _contentRequestHeaders;
    struct { 
        unsigned int contentRequestAuthorizeGetOptions : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long contentRequestAuthorizeGetOptions;
@property (nonatomic, retain) NSMutableArray *contentRequestHeaders;
@property (nonatomic) bool hasContentRequestAuthorizeGetOptions;

+ (Class)contentRequestHeadersType;

- (void).cxx_destruct;
- (void)addContentRequestHeaders:(id)arg1;
- (void)clearContentRequestHeaders;
- (unsigned long long)contentRequestAuthorizeGetOptions;
- (id)contentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentRequestAuthorizeGetOptions;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContentRequestAuthorizeGetOptions:(unsigned long long)arg1;
- (void)setContentRequestHeaders:(id)arg1;
- (void)setHasContentRequestAuthorizeGetOptions:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
