
@interface SYOutOfBandData : PBCodable <NSCopying> {
    NSData * _payload;
}

@property (nonatomic, retain) NSData *payload;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)writeTo:(id)arg1;

@end
