
@interface TRISubject : PBCodable <NSCopying> {
    NSString * _deviceId;
}

@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic, readonly) bool hasDeviceId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceId;
- (id)dictionaryRepresentation;
- (bool)hasDeviceId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
