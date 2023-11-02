
@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    NSMutableArray * _assets;
    NSData * _authPutRequest;
    int  _authPutType;
    NSMutableArray * _contentRequestHeaders;
    CKDPRecordFieldIdentifier * _field;
    struct { 
        unsigned int options : 1; 
        unsigned int authPutType : 1; 
    }  _has;
    unsigned long long  _options;
    CKDPRecordType * _type;
    NSMutableArray * _uploads;
}

@property (nonatomic, retain) NSMutableArray *assets;
@property (nonatomic, retain) NSData *authPutRequest;
@property (nonatomic) int authPutType;
@property (nonatomic, retain) NSMutableArray *contentRequestHeaders;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *field;
@property (nonatomic, readonly) bool hasAuthPutRequest;
@property (nonatomic) bool hasAuthPutType;
@property (nonatomic, readonly) bool hasField;
@property (nonatomic) bool hasOptions;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) CKDPRecordType *type;
@property (nonatomic, retain) NSMutableArray *uploads;

+ (Class)assetsType;
+ (Class)contentRequestHeadersType;
+ (id)options;
+ (Class)uploadsType;

- (void).cxx_destruct;
- (int)StringAsAuthPutType:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)addContentRequestHeaders:(id)arg1;
- (void)addUploads:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (id)authPutRequest;
- (int)authPutType;
- (id)authPutTypeAsString:(int)arg1;
- (void)clearAssets;
- (void)clearContentRequestHeaders;
- (void)clearUploads;
- (id)contentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (bool)hasAuthPutRequest;
- (bool)hasAuthPutType;
- (bool)hasField;
- (bool)hasOptions;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)options;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAssets:(id)arg1;
- (void)setAuthPutRequest:(id)arg1;
- (void)setAuthPutType:(int)arg1;
- (void)setContentRequestHeaders:(id)arg1;
- (void)setField:(id)arg1;
- (void)setHasAuthPutType:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setUploads:(id)arg1;
- (id)type;
- (id)uploads;
- (id)uploadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadsCount;
- (void)writeTo:(id)arg1;

@end
