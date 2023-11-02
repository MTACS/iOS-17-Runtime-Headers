
@protocol WiFiRecommendation

@required

- (NSString *)SSID;
- (<WiFiCandidateNetwork> *)network;
- (long long)priority;
- (<WiFiScannedNetwork> *)scannedNetwork;
- (bool)unwantedNetworkName;

@end
