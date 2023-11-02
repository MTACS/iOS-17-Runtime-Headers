
@interface NEEthernetTunnelNetworkSettings : NEPacketTunnelNetworkSettings {
    NSString * _ethernetAddress;
}

@property (copy) NSString *ethernetAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)ethernetAddress;
- (id)initWithCoder:(id)arg1;
- (id)initWithTunnelRemoteAddress:(id)arg1 ethernetAddress:(id)arg2 mtu:(long long)arg3;
- (void)setEthernetAddress:(id)arg1;

@end
