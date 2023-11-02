
@interface PBBProtoDeviceName : PBCodable <NSCopying> {
    NSString * _deviceName;
}

@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly) bool hasDeviceName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasDeviceName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
