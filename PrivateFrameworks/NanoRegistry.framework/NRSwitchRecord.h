
@interface NRSwitchRecord : NRPBSwitchRecord <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)initWithDeviceID:(id)arg1 date:(id)arg2 switchIndex:(unsigned int)arg3;

@end
