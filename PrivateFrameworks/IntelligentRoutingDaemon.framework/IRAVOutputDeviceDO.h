
@interface IRAVOutputDeviceDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceID;
    NSString * _deviceName;
    unsigned long long  _deviceSubType;
    unsigned long long  _deviceType;
    bool  _discoveredOverInfra;
    bool  _hasAirplayProperties;
    NSString * _modelID;
}

@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) unsigned long long deviceSubType;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, readonly) bool discoveredOverInfra;
@property (nonatomic, readonly) bool hasAirplayProperties;
@property (nonatomic, readonly) NSString *modelID;

+ (id)AVOutputDeviceToDO:(id)arg1;
+ (id)aVOutputDeviceDOWithDeviceID:(id)arg1 modelID:(id)arg2 deviceName:(id)arg3 hasAirplayProperties:(bool)arg4 discoveredOverInfra:(bool)arg5 deviceType:(unsigned long long)arg6 deviceSubType:(unsigned long long)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeviceID:(id)arg1;
- (id)copyWithReplacementDeviceName:(id)arg1;
- (id)copyWithReplacementDeviceSubType:(unsigned long long)arg1;
- (id)copyWithReplacementDeviceType:(unsigned long long)arg1;
- (id)copyWithReplacementDiscoveredOverInfra:(bool)arg1;
- (id)copyWithReplacementHasAirplayProperties:(bool)arg1;
- (id)copyWithReplacementModelID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (unsigned long long)deviceSubType;
- (unsigned long long)deviceType;
- (bool)discoveredOverInfra;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (bool)hasAirplayProperties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(id)arg1 modelID:(id)arg2 deviceName:(id)arg3 hasAirplayProperties:(bool)arg4 discoveredOverInfra:(bool)arg5 deviceType:(unsigned long long)arg6 deviceSubType:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAVOutputDeviceDO:(id)arg1;
- (id)modelID;

@end
