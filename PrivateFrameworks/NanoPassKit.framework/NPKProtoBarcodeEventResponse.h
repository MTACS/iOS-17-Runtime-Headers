
@interface NPKProtoBarcodeEventResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _responseData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasResponseData;
@property (nonatomic, retain) NSData *responseData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasResponseData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseData;
- (void)setErrorData:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
