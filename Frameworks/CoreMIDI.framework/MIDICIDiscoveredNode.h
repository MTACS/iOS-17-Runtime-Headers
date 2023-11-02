
@interface MIDICIDiscoveredNode : NSObject <NSSecureCoding> {
    unsigned int  _destination;
    MIDICIDeviceInfo * _deviceInfo;
    unsigned int  _maxSysExSize;
    bool  _supportsProfiles;
    bool  _supportsProperties;
}

@property (nonatomic, readonly) unsigned int destination;
@property (nonatomic, readonly) MIDICIDeviceInfo *deviceInfo;
@property (nonatomic, readonly) NSNumber *maximumSysExSize;
@property (nonatomic, readonly) bool supportsProfiles;
@property (nonatomic, readonly) bool supportsProperties;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)destination;
- (id)deviceInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned int)arg1 deviceID:(struct MIDICIDeviceIdentification { unsigned char x1[3]; unsigned char x2[2]; unsigned char x3[2]; unsigned char x4[4]; unsigned char x5[5]; })arg2 profilesSupported:(bool)arg3 propertiesSupported:(bool)arg4 maxSysExSize:(unsigned int)arg5;
- (bool)isEqual:(id)arg1;
- (id)maximumSysExSize;
- (bool)supportsProfiles;
- (bool)supportsProperties;

@end
