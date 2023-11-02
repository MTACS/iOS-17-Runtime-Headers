
@interface _MRSystemPlaybackCustomDataQueueProtobuf : PBCodable <NSCopying> {
    NSData * _data;
    NSString * _identifier;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
