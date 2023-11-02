
@interface NEIKEv2TrafficSelector : NSObject <NSCopying> {
    NWAddressEndpoint * _endAddress;
    unsigned short  _endPort;
    unsigned char  _ipProtocol;
    NWAddressEndpoint * _startAddress;
    unsigned short  _startPort;
}

@property (retain) NWAddressEndpoint *endAddress;
@property unsigned short endPort;
@property unsigned char ipProtocol;
@property (retain) NWAddressEndpoint *startAddress;
@property unsigned short startPort;

+ (id)copyAllIPv4;
+ (id)copyAllIPv6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endAddress;
- (unsigned short)endPort;
- (id)init;
- (unsigned char)ipProtocol;
- (void)setEndAddress:(id)arg1;
- (void)setEndPort:(unsigned short)arg1;
- (void)setIpProtocol:(unsigned char)arg1;
- (void)setStartAddress:(id)arg1;
- (void)setStartPort:(unsigned short)arg1;
- (id)startAddress;
- (unsigned short)startPort;

@end
