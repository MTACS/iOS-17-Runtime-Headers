
@interface WiFiUsageNetworkIPv4Details : NSObject {
    NSString * _ipv4Address;
    NSString * _ipv4DefGwAddress;
    NSString * _ipv4RouterAddress;
    NSString * _ipv4RouterMacAddress;
    NSString * _ipv4Subnet;
    bool  _isValid;
}

@property (nonatomic, retain) NSString *ipv4Address;
@property (nonatomic, retain) NSString *ipv4DefGwAddress;
@property (nonatomic, retain) NSString *ipv4RouterAddress;
@property (nonatomic, retain) NSString *ipv4RouterMacAddress;
@property (nonatomic, retain) NSString *ipv4Subnet;
@property (nonatomic) bool isValid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)ipv4Address;
- (id)ipv4DefGwAddress;
- (id)ipv4RouterAddress;
- (id)ipv4RouterMacAddress;
- (id)ipv4Subnet;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)setIpv4Address:(id)arg1;
- (void)setIpv4DefGwAddress:(id)arg1;
- (void)setIpv4RouterAddress:(id)arg1;
- (void)setIpv4RouterMacAddress:(id)arg1;
- (void)setIpv4Subnet:(id)arg1;
- (void)setIsValid:(bool)arg1;

@end
