
@interface RMSService : NSObject {
    id  _device;
    NSString * _displayName;
    NSString * _homeSharingGroupKey;
    NSString * _hostName;
    NSString * _networkName;
    int  _port;
    long long  _serviceDiscoverySource;
    long long  _serviceFlags;
    long long  _serviceType;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) id device;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *homeSharingGroupKey;
@property (nonatomic, retain) NSString *hostName;
@property (nonatomic, retain) NSString *networkName;
@property (nonatomic) int port;
@property (nonatomic) long long serviceDiscoverySource;
@property (nonatomic) long long serviceFlags;
@property (nonatomic) long long serviceType;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (id)protobufsFromServices:(id)arg1;
+ (id)servicesFromProtobufs:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)device;
- (id)displayName;
- (id)homeSharingGroupKey;
- (id)hostName;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToService:(id)arg1;
- (bool)isLegacyAppleTV;
- (bool)isTVRemoteCoreSupported;
- (id)networkName;
- (int)port;
- (id)protobuf;
- (long long)serviceDiscoverySource;
- (long long)serviceFlags;
- (long long)serviceType;
- (void)setDevice:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHomeSharingGroupKey:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setServiceDiscoverySource:(long long)arg1;
- (void)setServiceFlags:(long long)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
