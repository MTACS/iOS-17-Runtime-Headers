
@interface _NIWiFiRangingTestConfiguration : NIConfiguration {
    NSArray * _monitoredRegions;
    NSDictionary * _parameters;
    NIDiscoveryToken * _peerDiscoveryToken;
}

@property (copy) NSArray *monitoredRegions;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly, copy) NIDiscoveryToken *peerDiscoveryToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2 regions:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)monitoredRegions;
- (id)parameters;
- (id)peerDiscoveryToken;
- (void)setMonitoredRegions:(id)arg1;

@end
