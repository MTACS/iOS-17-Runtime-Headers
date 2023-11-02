
@interface WiFiAwareSubscribeConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _authenticationType;
    WiFiAwareFastDiscoveryConfiguration * _fastDiscoveryConfiguration;
    NSString * _serviceName;
    NSData * _serviceSpecificInfo;
}

@property (nonatomic) long long authenticationType;
@property (nonatomic, copy) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, copy) NSData *serviceSpecificInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authenticationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)fastDiscoveryConfigEqual:(id)arg1;
- (id)fastDiscoveryConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceSpecificInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)serviceName;
- (id)serviceSpecificInfo;
- (bool)serviceSpecificInfoEqual:(id)arg1;
- (void)setAuthenticationType:(long long)arg1;
- (void)setFastDiscoveryConfiguration:(id)arg1;
- (void)setServiceSpecificInfo:(id)arg1;

@end
