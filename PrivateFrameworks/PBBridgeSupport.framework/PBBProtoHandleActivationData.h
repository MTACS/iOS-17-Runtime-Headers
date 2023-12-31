
@interface PBBProtoHandleActivationData : PBCodable <NSCopying> {
    NSData * _activationData;
    NSData * _responseHeaders;
}

@property (nonatomic, retain) NSData *activationData;
@property (nonatomic, retain) NSData *responseHeaders;

- (void).cxx_destruct;
- (id)activationData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseHeaders;
- (void)setActivationData:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)writeTo:(id)arg1;

@end
