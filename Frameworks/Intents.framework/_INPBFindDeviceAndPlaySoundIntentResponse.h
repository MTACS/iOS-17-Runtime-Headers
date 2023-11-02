
@interface _INPBFindDeviceAndPlaySoundIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBFindDeviceAndPlaySoundIntentResponse> {
    NSArray * _devicesFounds;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devicesFounds;
@property (nonatomic, readonly) unsigned long long devicesFoundsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)devicesFoundType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDevicesFound:(id)arg1;
- (void)clearDevicesFounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)devicesFoundAtIndex:(unsigned long long)arg1;
- (id)devicesFounds;
- (unsigned long long)devicesFoundsCount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDevicesFounds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
