
@interface WFREPBRunRequest : PBRequest <NSCopying> {
    NSData * _payload;
    int  _payloadType;
}

@property (nonatomic, retain) NSData *payload;
@property (nonatomic) int payloadType;

- (void).cxx_destruct;
- (int)StringAsPayloadType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (int)payloadType;
- (id)payloadTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
