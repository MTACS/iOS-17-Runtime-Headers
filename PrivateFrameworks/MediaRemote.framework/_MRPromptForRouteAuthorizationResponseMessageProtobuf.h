
@interface _MRPromptForRouteAuthorizationResponseMessageProtobuf : PBCodable <NSCopying> {
    NSString * _response;
}

@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, retain) NSString *response;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (void)writeTo:(id)arg1;

@end
