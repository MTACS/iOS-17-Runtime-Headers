
@interface WFNetworkInterface : NSObject {
    NSString * _interfaceName;
}

@property (nonatomic, readonly) NSString *IPv4Address;
@property (nonatomic, readonly) NSString *IPv6Address;
@property (nonatomic, readonly) NSString *interfaceName;

+ (id)activeNetworkInterface;
+ (id)defaultNetworkInterfaces;
+ (id)networkInterfaceWithInterface:(id)arg1;
+ (id)wifiNetworkInterfaces;

- (void).cxx_destruct;
- (id)IPv4Address;
- (id)IPv6Address;
- (struct __WiFiNetwork { }*)currentWiFiNetwork;
- (id)initWithInterface:(id)arg1;
- (id)interfaceName;
- (id)ipAddressForFamily:(unsigned char)arg1;

@end
