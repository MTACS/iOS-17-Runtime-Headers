
@interface WiFiUsageNetworkIPv6Details : NSObject {
    NSArray * _ipv6Addresses;
    bool  _isValid;
}

@property (nonatomic, retain) NSArray *ipv6Addresses;
@property (nonatomic) bool isValid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)ipv6Addresses;
- (bool)isValid;
- (void)setIpv6Addresses:(id)arg1;
- (void)setIsValid:(bool)arg1;

@end
