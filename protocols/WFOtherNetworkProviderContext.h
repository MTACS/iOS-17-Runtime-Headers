
@protocol WFOtherNetworkProviderContext <WFCredentialsProviderContext>

@required

- (bool)WAPIEnabled;
- (NSArray *)WAPIIdentities;
- (NSArray *)WAPIRootCertificates;
- (NSString *)hardwareMACAddress;
- (bool)isUsingRandomMACAddress;
- (NSString *)randomMACAddress;
- (void)saveHardwareMAC;
- (void)saveRandomMAC;
- (bool)supportsRandomMACAddress;

@end
