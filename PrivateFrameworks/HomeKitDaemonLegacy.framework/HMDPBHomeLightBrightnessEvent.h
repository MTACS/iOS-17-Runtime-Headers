
@interface HMDPBHomeLightBrightnessEvent : PBCodable <NSCopying> {
    NSString * _accessoryUUID;
    NSString * _brightness;
    NSString * _characteristicUUID;
    NSString * _homeUUID;
}

@property (nonatomic, retain) NSString *accessoryUUID;
@property (nonatomic, retain) NSString *brightness;
@property (nonatomic, retain) NSString *characteristicUUID;
@property (nonatomic, readonly) bool hasAccessoryUUID;
@property (nonatomic, readonly) bool hasBrightness;
@property (nonatomic, readonly) bool hasCharacteristicUUID;
@property (nonatomic, readonly) bool hasHomeUUID;
@property (nonatomic, retain) NSString *homeUUID;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)brightness;
- (id)characteristicUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryUUID;
- (bool)hasBrightness;
- (bool)hasCharacteristicUUID;
- (bool)hasHomeUUID;
- (unsigned long long)hash;
- (id)homeUUID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryUUID:(id)arg1;
- (void)setBrightness:(id)arg1;
- (void)setCharacteristicUUID:(id)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
