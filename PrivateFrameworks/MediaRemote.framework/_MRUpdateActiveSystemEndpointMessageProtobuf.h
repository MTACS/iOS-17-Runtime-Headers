
@interface _MRUpdateActiveSystemEndpointMessageProtobuf : PBCodable <NSCopying> {
    _MRUpdateActiveSystemEndpointRequestProtobuf * _request;
}

@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, retain) _MRUpdateActiveSystemEndpointRequestProtobuf *request;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
