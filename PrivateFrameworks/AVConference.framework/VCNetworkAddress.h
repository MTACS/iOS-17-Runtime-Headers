
@interface VCNetworkAddress : NSObject {
    NSString * _interfaceName;
    NSString * _ip;
    unsigned short  _ipVersion;
    unsigned short  _port;
}

@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic) unsigned short ipVersion;
@property (nonatomic) unsigned short port;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)getSockaddrStorage:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg1 size:(unsigned long long*)arg2;
- (id)interfaceName;
- (id)ip;
- (unsigned short)ipVersion;
- (bool)isEqual:(id)arg1;
- (bool)isIPv6;
- (bool)isValid;
- (unsigned short)port;
- (void)setInterfaceName:(id)arg1;
- (void)setIp:(id)arg1;
- (void)setIpVersion:(unsigned short)arg1;
- (void)setPort:(unsigned short)arg1;

@end
