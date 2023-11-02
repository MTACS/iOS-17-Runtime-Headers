
@interface TAUnknownBeacon : NSObject <NSSecureCoding> {
    TAAccessoryInformation * _accessoryInfo;
    NSData * _address;
    unsigned long long  _deviceType;
    NSUUID * _identifier;
}

@property (nonatomic, readonly, copy) TAAccessoryInformation *accessoryInfo;
@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, readonly, copy) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryInfo;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (unsigned long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBeaconUUID:(id)arg1 address:(id)arg2 deviceType:(unsigned long long)arg3 withAccessoryInfo:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
