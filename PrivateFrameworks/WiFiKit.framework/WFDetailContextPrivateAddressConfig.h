
@interface WFDetailContextPrivateAddressConfig : NSObject {
    bool  _alwaysDisplayRandomAddress;
    bool  _connectedWithHardwareAddress;
    NSString * _hardwareMACAddress;
    bool  _privateAddressSupported;
    NSString * _randomMACAddress;
    bool  _randomMACAddressDisabled;
    bool  _randomMACSwitchOn;
}

@property (getter=isAlwaysDisplayRandomAddress, nonatomic, readonly) bool alwaysDisplayRandomAddress;
@property (getter=isConnectedWithHardwareAddress, nonatomic) bool connectedWithHardwareAddress;
@property (nonatomic, copy) NSString *hardwareMACAddress;
@property (getter=isPrivateAddressSupported, nonatomic) bool privateAddressSupported;
@property (nonatomic, copy) NSString *randomMACAddress;
@property (getter=isRandomMACAddressDisabled, nonatomic) bool randomMACAddressDisabled;
@property (getter=isRandomMACSwitchOn, nonatomic) bool randomMACSwitchOn;

- (void).cxx_destruct;
- (id)hardwareMACAddress;
- (id)initWithRandomMACAddress:(id)arg1 hardwareMACAddress:(id)arg2 randomMACSwitchOn:(bool)arg3 randomMACAddressDisabled:(bool)arg4 connectedWithHardwareAddress:(bool)arg5 privateAddressSupported:(bool)arg6;
- (bool)isAlwaysDisplayRandomAddress;
- (bool)isConnectedWithHardwareAddress;
- (bool)isPrivateAddressSupported;
- (bool)isRandomMACAddressDisabled;
- (bool)isRandomMACSwitchOn;
- (id)randomMACAddress;
- (void)setConnectedWithHardwareAddress:(bool)arg1;
- (void)setHardwareMACAddress:(id)arg1;
- (void)setPrivateAddressSupported:(bool)arg1;
- (void)setRandomMACAddress:(id)arg1;
- (void)setRandomMACAddressDisabled:(bool)arg1;
- (void)setRandomMACSwitchOn:(bool)arg1;

@end
