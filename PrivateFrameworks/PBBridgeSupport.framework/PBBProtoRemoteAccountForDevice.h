
@interface PBBProtoRemoteAccountForDevice : PBCodable <NSCopying> {
    NSData * _serializedDevice;
}

@property (nonatomic, readonly) bool hasSerializedDevice;
@property (nonatomic, retain) NSData *serializedDevice;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSerializedDevice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedDevice;
- (void)setSerializedDevice:(id)arg1;
- (void)writeTo:(id)arg1;

@end
