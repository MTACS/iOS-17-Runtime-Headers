
@interface TVLNetworkInterface : NSObject {
    NSString * _interfaceName;
    unsigned long long  _interfaceType;
    NSString * _ipv4;
    NSString * _ipv6;
}

@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, readonly) unsigned long long interfaceType;
@property (nonatomic, readonly, copy) NSString *ipv4;
@property (nonatomic, readonly, copy) NSString *ipv6;

- (void).cxx_destruct;
- (id)initWithInterfaceType:(unsigned long long)arg1 interfaceName:(id)arg2;
- (id)interfaceName;
- (unsigned long long)interfaceType;
- (id)ipv4;
- (id)ipv6;

@end
