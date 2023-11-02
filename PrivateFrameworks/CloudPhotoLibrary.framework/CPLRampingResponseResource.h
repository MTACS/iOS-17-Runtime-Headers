
@interface CPLRampingResponseResource : PBCodable <NSCopying> {
    bool  _allowed;
    struct { 
        unsigned int retryAfterMillis : 1; 
        unsigned int allowed : 1; 
    }  _has;
    NSString * _resource;
    long long  _retryAfterMillis;
}

@property (nonatomic) bool allowed;
@property (nonatomic) bool hasAllowed;
@property (nonatomic, readonly) bool hasResource;
@property (nonatomic) bool hasRetryAfterMillis;
@property (nonatomic, retain) NSString *resource;
@property (nonatomic) long long retryAfterMillis;

- (void).cxx_destruct;
- (bool)allowed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowed;
- (bool)hasResource;
- (bool)hasRetryAfterMillis;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resource;
- (long long)retryAfterMillis;
- (void)setAllowed:(bool)arg1;
- (void)setHasAllowed:(bool)arg1;
- (void)setHasRetryAfterMillis:(bool)arg1;
- (void)setResource:(id)arg1;
- (void)setRetryAfterMillis:(long long)arg1;
- (void)writeTo:(id)arg1;

@end