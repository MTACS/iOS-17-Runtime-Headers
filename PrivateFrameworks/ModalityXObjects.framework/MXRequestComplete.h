
@interface MXRequestComplete : PBCodable <NSCopying> {
    NSString * _requestId;
}

@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSString *requestId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
